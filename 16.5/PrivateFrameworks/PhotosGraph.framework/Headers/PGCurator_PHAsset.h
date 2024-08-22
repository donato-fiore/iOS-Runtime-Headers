// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGCURATOR_PHASSET_H
#define PGCURATOR_PHASSET_H

@class PHPhotoLibrary;


#import "PGCurator.h"

@interface PGCurator_PHAsset : PGCurator {
    PHPhotoLibrary *_photoLibrary;
}




-(id)bestAssetsForFeeder:(id)arg0 options:(id)arg1 debugInfo:(id)arg2 progressBlock:(id)arg3 ;
-(id)initWithPhotoLibrary:(id)arg0 ;
-(id)newMovieDeduperWithOptions:(id)arg0 ;
-(id)newSemanticalDeduperWithOptions:(id)arg0 ;
-(void)addMoviesToAssets:(id)arg0 fromFeeder:(id)arg1 maximumNumberOfAssets:(NSUInteger)arg2 debugInfo:(id)arg3 ;
-(void)lastPassToCompleteItems:(id)arg0 fromFeeder:(id)arg1 options:(id)arg2 maximumNumberOfItems:(NSUInteger)arg3 debugInfo:(id)arg4 ;


@end


#endif