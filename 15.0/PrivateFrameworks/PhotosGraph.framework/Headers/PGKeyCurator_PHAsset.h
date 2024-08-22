// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGKEYCURATOR_PHASSET_H
#define PGKEYCURATOR_PHASSET_H

@class PHPhotoLibrary;


#import "PGKeyCurator.h"

@interface PGKeyCurator_PHAsset : PGKeyCurator {
    PHPhotoLibrary *_photoLibrary;
}




-(id)initWithPhotoLibrary:(id)arg0 curationCriteriaFactory:(id)arg1 ;
-(id)keyAssetInAssets:(id)arg0 options:(id)arg1 criteria:(id)arg2 debugInfo:(id)arg3 progressBlock:(id)arg4 ;
-(id)keyAssetWithFeeder:(id)arg0 options:(id)arg1 criteria:(id)arg2 debugInfo:(id)arg3 progressBlock:(id)arg4 ;


@end


#endif