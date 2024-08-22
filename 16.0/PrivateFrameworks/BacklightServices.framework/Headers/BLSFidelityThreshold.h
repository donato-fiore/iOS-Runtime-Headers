// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLSFIDELITYTHRESHOLD_H
#define BLSFIDELITYTHRESHOLD_H


#import <Foundation/Foundation.h>


@interface BLSFidelityThreshold : NSObject



+(CGFloat)animationCoalesceThreshold;
+(CGFloat)secondsFidelityThreshold;
+(NSInteger)fidelityForUpdateInterval:(CGFloat)arg0 ;


@end


#endif