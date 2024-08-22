// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXUIFEEDBACKSESSIONCONTEXT_H
#define ATXUIFEEDBACKSESSIONCONTEXT_H

@class NSMutableDictionary, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ATXUIFeedbackSessionContext : NSObject <NSSecureCoding>

 {
    NSMutableDictionary *_sessions;
}


@property (readonly, nonatomic) NSDictionary *sessions;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXUIFeedbackSessionContext:(id)arg0 ;
-(NSUInteger)hash;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSessions:(id)arg0 ;
-(id)returnAndRemoveUIFeedbackSessionWithSessionIdentifier:(id)arg0 endDate:(id)arg1 ;
-(id)uiFeedbackSessionWithSessionIdentifier:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)trackNewUIFeedbackSessionWithSessionIdentifier:(id)arg0 startDate:(id)arg1 ;


@end


#endif