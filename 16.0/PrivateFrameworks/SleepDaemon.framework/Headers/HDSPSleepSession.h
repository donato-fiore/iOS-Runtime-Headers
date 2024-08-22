// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDSPSLEEPSESSION_H
#define HDSPSLEEPSESSION_H

@class NSString, NSDateInterval, NSDictionary, NSArray;
@protocol BSDescriptionProviding, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HDSPSleepSession : NSObject <BSDescriptionProviding, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger endReason; // ivar: _endReason
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDateInterval *interval; // ivar: _interval
@property (readonly, nonatomic) NSDictionary *metadata; // ivar: _metadata
@property (readonly, nonatomic) BOOL requiresFirstUnlock; // ivar: _requiresFirstUnlock
@property (readonly, nonatomic) NSArray *sleepIntervals; // ivar: _sleepIntervals
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)sleepSessionWithDateInterval:(id)arg0 sleepIntervals:(id)arg1 endReason:(NSUInteger)arg2 metadata:(id)arg3 requiresFirstUnlock:(BOOL)arg4 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDateInterval:(id)arg0 sleepIntervals:(id)arg1 endReason:(NSUInteger)arg2 metadata:(id)arg3 requiresFirstUnlock:(BOOL)arg4 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif