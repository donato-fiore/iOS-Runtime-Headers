// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HREACTIONRANGEVARIANCERULE_H
#define HREACTIONRANGEVARIANCERULE_H



#import "HRECharacteristicActionVarianceRule.h"

@interface HREActionRangeVarianceRule : HRECharacteristicActionVarianceRule

@property (readonly, nonatomic) _NSRange allowedTargetValues; // ivar: _allowedTargetValues


+(id)rangeVarianceWithType:(id)arg0 max:(NSUInteger)arg1 ;
+(id)rangeVarianceWithType:(id)arg0 min:(NSUInteger)arg1 ;
+(id)rangeVarianceWithType:(id)arg0 min:(NSUInteger)arg1 max:(NSUInteger)arg2 ;
+(id)rangeVarianceWithType:(id)arg0 range:(struct _NSRange )arg1 ;
-(BOOL)passesForAction:(id)arg0 ;
-(BOOL)passesWithTargetValue:(id)arg0 ;
-(id)_initWithType:(id)arg0 range:(struct _NSRange )arg1 ;


@end


#endif