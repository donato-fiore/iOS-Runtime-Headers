// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AFOPPORTUNESPEAKINGMODELFEEDBACK_H
#define AFOPPORTUNESPEAKINGMODELFEEDBACK_H

@class NSDate, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AFOpportuneSpeakingModelFeedback : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSDate *lastNegativeFeedback; // ivar: _lastNegativeFeedback
@property (retain, nonatomic) NSDictionary *negativeFeedbackByContact; // ivar: _negativeFeedbackByContact


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif