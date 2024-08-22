// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCLINTERRUPTEVENTBEHAVIOR_H
#define SCLINTERRUPTEVENTBEHAVIOR_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SCLInterruptEvent.h"

@interface SCLInterruptEventBehavior : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSUInteger eligibility; // ivar: _eligibility
@property (readonly, nonatomic) SCLInterruptEvent *event; // ivar: _event


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEvent:(id)arg0 interruptEligibility:(NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif