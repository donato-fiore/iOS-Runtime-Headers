// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PDSCHEDULEDACTIVITYREGISTRATION_H
#define PDSCHEDULEDACTIVITYREGISTRATION_H

@protocol NSSecureCoding, NSObject><NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PDScheduledActivityCriteria.h"

@interface PDScheduledActivityRegistration : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSObject<NSObject><NSSecureCoding> *activityContext; // ivar: _activityContext
@property (readonly, nonatomic) PDScheduledActivityCriteria *activityCriteria; // ivar: _activityCriteria


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToScheduledActivityRegistration:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithActivityCriteria:(id)arg0 activityContext:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif