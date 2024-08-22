// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKMCCYCLE_H
#define HKMCCYCLE_H

@class NSArray, NSString, NSNumber;
@protocol HKRedactedDescription, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "HKMCCycleSegment.h"

@interface HKMCCycle : NSObject <HKRedactedDescription, NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *cycleFactors; // ivar: _cycleFactors
@property (readonly, nonatomic) HKMCCycleSegment *fertileWindowSegment; // ivar: _fertileWindowSegment
@property (readonly, copy) NSString *hk_redactedDescription;
@property (readonly, copy, nonatomic) NSNumber *lastDayIndex; // ivar: _lastDayIndex
@property (readonly, nonatomic) HKMCCycleSegment *menstruationSegment; // ivar: _menstruationSegment


+(BOOL)supportsSecureCoding;
+(id)_cycleWithMenstruationSegment:(id)arg0 fertileWindowSegment:(id)arg1 lastDayIndex:(id)arg2 ;
+(id)_cycleWithMenstruationSegment:(id)arg0 fertileWindowSegment:(id)arg1 lastDayIndex:(id)arg2 cycleFactors:(id)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithMenstruationSegment:(id)arg0 fertileWindowSegment:(id)arg1 lastDayIndex:(id)arg2 cycleFactors:(id)arg3 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif