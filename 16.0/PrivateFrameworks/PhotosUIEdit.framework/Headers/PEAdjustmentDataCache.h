// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PEADJUSTMENTDATACACHE_H
#define PEADJUSTMENTDATACACHE_H


#import <Foundation/Foundation.h>


@interface PEAdjustmentDataCache : NSObject



+(id)compositionControllerForAssetIfLoaded:(id)arg0 disposition:(*NSInteger)arg1 ;
+(id)entryForAsset:(id)arg0 networkAccessAllowed:(BOOL)arg1 disposition:(*NSInteger)arg2 originalAdjustmentData:(BOOL)arg3 ;
+(id)synchronousCompositionControllerForAsset:(id)arg0 networkAccessAllowed:(BOOL)arg1 disposition:(*NSInteger)arg2 originalComposition:(BOOL)arg3 ;
+(id)synchronousEditorBundleIDForAsset:(id)arg0 ;
+(struct CGSize )synchronousInputSizeForAsset:(id)arg0 disposition:(*NSInteger)arg1 ;
+(void)initialize;
+(void)requestCompositionControllerForAsset:(id)arg0 queue:(id)arg1 completion:(id)arg2 ;


@end


#endif