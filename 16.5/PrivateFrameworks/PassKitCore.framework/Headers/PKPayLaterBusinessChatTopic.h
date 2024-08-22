// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYLATERBUSINESSCHATTOPIC_H
#define PKPAYLATERBUSINESSCHATTOPIC_H

@class NSString, NSSet;

#import <Foundation/Foundation.h>


@interface PKPayLaterBusinessChatTopic : NSObject {
    NSString *_displayText;
    NSString *_page;
    NSString *_targetDialog;
    NSString *_analyticsIdentifier;
    NSString *_serverDefinedContentRequestType;
    NSSet *_relevantFinancingPlanStates;
}


@property (readonly, copy, nonatomic) NSString *analyticsIdentifier;
@property (readonly, copy, nonatomic) NSString *displayText;
@property (copy, nonatomic) NSString *messageBubbleText; // ivar: _messageBubbleText
@property (readonly, copy, nonatomic) NSString *page;
@property (readonly, copy, nonatomic) NSString *payLaterContentRequestTypeString;
@property (readonly, copy, nonatomic) NSSet *relevantFinancingPlanStates;
@property (readonly, nonatomic) BOOL requiresFinancingPlan; // ivar: _requiresFinancingPlan
@property (readonly, copy, nonatomic) NSString *targetDialog;
@property (readonly, nonatomic) NSUInteger topicType; // ivar: _topicType


+(id)genericBusinessChatTopicForContext:(NSUInteger)arg0 ;
-(id)initWithContext:(NSUInteger)arg0 topicType:(NSUInteger)arg1 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)messagesBubbleTextWithFinancingPlan:(id)arg0 installment:(id)arg1 payment:(id)arg2 dispute:(id)arg3 ;
-(void)updateWithBusinessChatTopic:(id)arg0 ;


@end


#endif