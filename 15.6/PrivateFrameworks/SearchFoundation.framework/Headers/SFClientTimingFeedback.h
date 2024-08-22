// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFCLIENTTIMINGFEEDBACK_H
#define SFCLIENTTIMINGFEEDBACK_H

@class NSString;


#import "SFFeedback.h"

@interface SFClientTimingFeedback : SFFeedback

@property (copy, nonatomic) NSString *eventName; // ivar: _eventName
@property (copy, nonatomic) NSString *input; // ivar: _input
@property NSUInteger nanosecondInterval; // ivar: _nanosecondInterval


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEvent:(id)arg0 timeInterval:(NSUInteger)arg1 queryId:(NSUInteger)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif