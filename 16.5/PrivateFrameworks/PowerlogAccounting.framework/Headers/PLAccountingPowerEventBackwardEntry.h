// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLACCOUNTINGPOWEREVENTBACKWARDENTRY_H
#define PLACCOUNTINGPOWEREVENTBACKWARDENTRY_H



#import "PLAccountingPowerEventEntry.h"

@interface PLAccountingPowerEventBackwardEntry : PLAccountingPowerEventEntry



+(id)entryKey;
+(int)classDirectionality;
+(void)load;
-(id)initWithRootNodeID:(id)arg0 withPower:(CGFloat)arg1 withEndDate:(id)arg2 ;


@end


#endif