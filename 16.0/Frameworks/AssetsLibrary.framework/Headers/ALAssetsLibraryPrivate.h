// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ALASSETSLIBRARYPRIVATE_H
#define ALASSETSLIBRARYPRIVATE_H

@class NSHashTable, NSMutableDictionary, PLPhotoLibrary;

#import <Foundation/Foundation.h>

#import "ALAssetsLibrary.h"

@interface ALAssetsLibraryPrivate : NSObject {
    NSHashTable *_assetGroupInternals;
    NSMutableDictionary *_groupURLSByAlbumOID;
}


@property (nonatomic) ALAssetsLibrary *assetsLibrary; // ivar: _assetsLibrary
@property (nonatomic) BOOL isValid; // ivar: _isValid
@property (readonly, retain, nonatomic) PLPhotoLibrary *photoLibrary; // ivar: _photoLibrary


-(id)initWithAssetsLibrary:(id)arg0 ;
-(void)dealloc;
-(void)photoLibraryDidChange:(id)arg0 ;
-(void)registerAlbum:(id)arg0 assetGroupPrivate:(id)arg1 ;


@end


#endif