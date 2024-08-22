// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef POWERUIMODELPREDICTIONCONTAINER_H
#define POWERUIMODELPREDICTIONCONTAINER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PowerUIModelPredictionContainer : NSObject

@property (readonly, nonatomic) CGFloat engagementConfidence; // ivar: _engagementConfidence
@property (readonly, nonatomic) NSString *modelVersion; // ivar: _modelVersion
@property (readonly, nonatomic) CGFloat smartChargeDuration; // ivar: _smartChargeDuration
@property (readonly, nonatomic) NSUInteger state; // ivar: _state


-(id)initInvalidEntry:(NSUInteger)arg0 withEngagementConfidence:(CGFloat)arg1 withSmartChargeDuration:(CGFloat)arg2 withModelVersion:(id)arg3 ;
-(id)initWithEngagementConfidence:(CGFloat)arg0 withSmartChargeDuration:(CGFloat)arg1 withModelVersion:(id)arg2 ;


@end


#endif