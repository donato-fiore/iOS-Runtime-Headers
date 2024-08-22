// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYLATERBUSINESSCHATTOPIC_H
#define PKPAYLATERBUSINESSCHATTOPIC_H


#import <Foundation/Foundation.h>


@interface PKPayLaterBusinessChatTopic : NSObject

@property (readonly, nonatomic) NSUInteger context; // ivar: _context
@property (readonly, nonatomic) NSUInteger topicType; // ivar: _topicType


+(NSInteger)compareTopic:(id)arg0 withOtherTopic:(id)arg1 context:(NSUInteger)arg2 ;
+(id)genericBusinessChatTopicWithContext:(NSUInteger)arg0 ;
-(BOOL)requiresFinancingPlan;
-(NSInteger)priorityForContext:(NSUInteger)arg0 ;
-(NSUInteger)payLaterContentRequestType;
-(id)analyticsIdentifier;
-(id)displayText;
-(id)initWithContext:(NSUInteger)arg0 topicType:(NSUInteger)arg1 ;
-(id)messagesBubbleTextWithFinancingPlan:(id)arg0 installment:(id)arg1 payment:(id)arg2 dispute:(id)arg3 ;
-(id)page;
-(id)relevantFinancingPlanStates;
-(id)targetDialog;


@end


#endif