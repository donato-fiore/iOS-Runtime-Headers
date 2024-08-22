// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLSLALOMUTILITIES_H
#define PLSLALOMUTILITIES_H


#import <Foundation/Foundation.h>


@interface PLSlalomUtilities : NSObject



+(CGFloat)durationForBaseDuration:(CGFloat)arg0 videoAdjustments:(id)arg1 ;
+(CGFloat)durationForManagedAsset:(id)arg0 applyVideoAdjustments:(BOOL)arg1 ;
+(id)synchronouslyFetchVideoAdjustmentsFromManagedAsset:(id)arg0 ;
+(id)videoAVObjectBuilderForManagedAsset:(id)arg0 applyVideoAdjustments:(BOOL)arg1 ;


@end


#endif