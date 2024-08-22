// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PIEFFECTADJUSTMENTCONTROLLER_H
#define PIEFFECTADJUSTMENTCONTROLLER_H

@class NSString;


#import "PIAdjustmentController.h"

@interface PIEffectAdjustmentController : PIAdjustmentController

@property (nonatomic) CGFloat intensity;
@property (copy, nonatomic) NSString *kind;
@property (nonatomic) NSInteger version;


-(BOOL)isSettingEqual:(id)arg0 forKey:(id)arg1 ;


@end


#endif