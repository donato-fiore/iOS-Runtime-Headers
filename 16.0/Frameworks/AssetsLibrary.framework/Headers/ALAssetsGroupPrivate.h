// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ALASSETSGROUPPRIVATE_H
#define ALASSETSGROUPPRIVATE_H

@class PLPhotoLibrary, NSString, NSMutableDictionary;
@protocol ALAssetsLibraryAsset, PLAlbumProtocol;

#import <Foundation/Foundation.h>

#import "ALAssetsLibrary.h"
#import "ALAssetsFilter.h"

@interface ALAssetsGroupPrivate : NSObject <ALAssetsLibraryAsset>

 {
    BOOL _loadedAssets;
    ALAssetsLibrary *_library;
}


@property (retain, nonatomic) PLPhotoLibrary *_photoLibrary; // ivar: _photoLibrary
@property (retain, nonatomic) NSObject<PLAlbumProtocol> *album; // ivar: _album
@property (nonatomic) BOOL applyHyperionFilter; // ivar: _applyHyperionFilter
@property (retain, nonatomic) ALAssetsFilter *assetsFilter; // ivar: _assetsFilter
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger groupType; // ivar: _groupType
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isCloudSharedGroup; // ivar: _isCloudSharedGroup
@property (nonatomic) BOOL isValid; // ivar: _isValid
@property (nonatomic) ALAssetsLibrary *library;
@property (retain, nonatomic) NSMutableDictionary *propertyValues; // ivar: _propertyValues
@property (readonly) Class superclass;


-(id)initWithAlbum:(id)arg0 library:(id)arg1 ;
-(id)valueForProperty:(id)arg0 ;
-(void)_performBlockAndWait:(id)arg0 ;
-(void)dealloc;
-(void)populateAssets;
-(void)resetAssets;
-(void)setValue:(id)arg0 forProperty:(id)arg1 ;
-(void)updateAlbumFiltering;


@end


#endif