// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MIROBURSTHELPERS_H
#define MIROBURSTHELPERS_H


#import <Foundation/Foundation.h>


@interface MiroBurstHelpers : NSObject



+(BOOL)isBurstClip:(id)arg0 memory:(id)arg1 ;
+(BOOL)isDateBasedBurstClip:(id)arg0 memory:(id)arg1 ;
+(BOOL)isRealBurstClip:(id)arg0 ;
+(id)photoAssetsForBurstAsset:(id)arg0 memory:(id)arg1 ;
+(id)photoAssetsForDateBasedBurstAsset:(id)arg0 memory:(id)arg1 ;
+(id)photoAssetsForRealBurstAsset:(id)arg0 ;
+(id)thinOutAssets:(id)arg0 byKeepingOnlyOneAssetFromEachBurst:(id)arg1 ;


@end


#endif