// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ALASSETPRIVATE_H
#define ALASSETPRIVATE_H

@class PLPhotoLibrary, NSString, PLManagedAsset;
@protocol ALAssetsLibraryAsset;

#import <Foundation/Foundation.h>

#import "ALAssetsLibrary.h"

@interface ALAssetPrivate : NSObject <ALAssetsLibraryAsset>

 {
    ALAssetsLibrary *_library;
}


@property (retain, nonatomic) PLPhotoLibrary *_photoLibrary; // ivar: _photoLibrary
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=isDeletable) BOOL deletable;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isValid; // ivar: _isValid
@property (nonatomic) ALAssetsLibrary *library;
@property (retain, nonatomic) PLManagedAsset *photo; // ivar: _photo
@property (readonly) Class superclass;


-(id)initWithManagedAsset:(id)arg0 library:(id)arg1 ;
-(void)_performBlockAndWait:(id)arg0 ;
-(void)dealloc;


@end


#endif