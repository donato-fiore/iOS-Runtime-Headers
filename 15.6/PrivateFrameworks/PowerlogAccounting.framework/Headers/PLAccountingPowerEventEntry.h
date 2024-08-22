// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLACCOUNTINGPOWEREVENTENTRY_H
#define PLACCOUNTINGPOWEREVENTENTRY_H

@class NSNumber;


#import "PLAccountingEventEntry.h"

@interface PLAccountingPowerEventEntry : PLAccountingEventEntry

@property (readonly, nonatomic) CGFloat power;
@property (readonly, nonatomic) NSNumber *rootNodeID;


+(BOOL)isValidPower:(CGFloat)arg0 forRootNodeID:(id)arg1 ;
+(CGFloat)minPowerDifference;
+(CGFloat)minPowerPercentageDifference;
+(void)load;
-(BOOL)isEmptyEvent;
-(BOOL)isEqualContentsWithEvent:(id)arg0 ;
-(id)initWithRootNodeID:(id)arg0 withPower:(CGFloat)arg1 withRange:(id)arg2 ;
-(id)subEntryKey;
-(int)instanceDirectionality;


@end


#endif