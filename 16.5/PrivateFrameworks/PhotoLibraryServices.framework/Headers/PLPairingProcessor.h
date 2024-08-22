// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLPAIRINGPROCESSOR_H
#define PLPAIRINGPROCESSOR_H

@class NSPredicate;

#import <Foundation/Foundation.h>


@interface PLPairingProcessor : NSObject

@property (retain, nonatomic) NSPredicate *locatedInUsersPhotoLibrary; // ivar: _locatedInUsersPhotoLibrary


-(BOOL)_copyFromURL:(id)arg0 toURL:(id)arg1 error:(*id)arg2 ;
-(BOOL)_copyResourceOfType:(unsigned int)arg0 onAsset:(id)arg1 toType:(unsigned int)arg2 onAsset:(id)arg3 error:(*id)arg4 ;
-(BOOL)processPairingForFetchRequest:(id)arg0 inContext:(id)arg1 error:(*id)arg2 ;
-(BOOL)updatePrimaryAsset:(id)arg0 andRemoveAssetIfPossible:(id)arg1 ;
-(id)combinePair:(id)arg0 error:(*id)arg1 ;
-(id)fetchRequestForLibrary;
-(id)fetchRequestForSortedGroupIDs:(id)arg0 ;
-(id)firstGroupFromAssets:(id)arg0 ;
-(id)groupIDForAsset:(id)arg0 ;
-(id)init;
-(void)_deleteResourceOfType:(unsigned int)arg0 forAsset:(id)arg1 verifyInserted:(BOOL)arg2 deleteFile:(BOOL)arg3 ;
-(void)setDeferredProcessingIfNescessaryForAsset:(id)arg0 ;


@end


#endif