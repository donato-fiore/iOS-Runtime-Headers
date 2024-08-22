// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKACCOUNTSUPPORTTOPIC_H
#define PKACCOUNTSUPPORTTOPIC_H

@class NSString;

#import <Foundation/Foundation.h>

#import "PKAccountSupportTopicExplanation.h"

@interface PKAccountSupportTopic : NSObject

@property (readonly, copy, nonatomic) NSString *bodyText; // ivar: _bodyText
@property (readonly, copy, nonatomic) NSString *businessChatPage; // ivar: _businessChatPage
@property (readonly, copy, nonatomic) NSString *businessChatTargetDialog; // ivar: _businessChatTargetDialog
@property (readonly, nonatomic) PKAccountSupportTopicExplanation *explanation; // ivar: _explanation
@property (readonly, nonatomic) NSUInteger issueType; // ivar: _issueType
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title


-(BOOL)supportsBusinessChat;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithNonCancellableBillPayment;
-(id)initWithOtherTopicForAccount:(id)arg0 ;
-(id)initWithUnavailableFundingSourceTopicForAccount:(id)arg0 ;


@end


#endif