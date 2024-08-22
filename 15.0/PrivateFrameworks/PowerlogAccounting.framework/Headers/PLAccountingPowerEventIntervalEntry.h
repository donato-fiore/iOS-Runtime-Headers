// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLACCOUNTINGPOWEREVENTINTERVALENTRY_H
#define PLACCOUNTINGPOWEREVENTINTERVALENTRY_H



#import "PLAccountingPowerEventEntry.h"

@interface PLAccountingPowerEventIntervalEntry : PLAccountingPowerEventEntry



+(id)entryKey;
+(int)classDirectionality;
+(void)load;
-(BOOL)canMergeWithEvent:(id)arg0 ;
-(id)initWithRootNodeID:(id)arg0 withPower:(CGFloat)arg1 withStartDate:(id)arg2 withEndDate:(id)arg3 ;


@end


#endif