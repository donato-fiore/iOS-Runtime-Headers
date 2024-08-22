// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDSPSLEEPSESSIONINTERVAL_H
#define HDSPSLEEPSESSIONINTERVAL_H

@class NSString, NSDateInterval;
@protocol BSDescriptionProviding, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HDSPSleepSessionInterval : NSObject <BSDescriptionProviding, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDateInterval *interval; // ivar: _interval
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)sleepSessionIntervalWithInterval:(id)arg0 type:(NSUInteger)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInterval:(id)arg0 type:(NSUInteger)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif