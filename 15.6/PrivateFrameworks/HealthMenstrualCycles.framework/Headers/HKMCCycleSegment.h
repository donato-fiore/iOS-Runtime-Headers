// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKMCCYCLESEGMENT_H
#define HKMCCYCLESEGMENT_H

@class NSString;
@protocol HKRedactedDescription, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HKMCCycleSegment : NSObject <HKRedactedDescription, NSCopying, NSSecureCoding>



@property (readonly, nonatomic) ? days; // ivar: _days
@property (readonly, copy) NSString *hk_redactedDescription;
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)_fertileWindowSegmentWithDays:(struct ? )arg0 ;
+(id)_menstruationSegmentWithDays:(struct ? )arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithType:(NSInteger)arg0 days:(struct ? )arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif