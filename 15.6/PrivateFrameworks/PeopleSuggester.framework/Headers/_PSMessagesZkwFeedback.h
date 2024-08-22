// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PSMESSAGESZKWFEEDBACK_H
#define _PSMESSAGESZKWFEEDBACK_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface _PSMessagesZkwFeedback : NSObject

@property (readonly, copy, nonatomic) NSString *chatGuidEngaged; // ivar: _chatGuidEngaged
@property (nonatomic) BOOL dryRun; // ivar: _dryRun
@property (readonly, copy, nonatomic) NSArray *suggestions; // ivar: _suggestions


-(NSInteger)feedbackActionTypeForSuggestionIndex:(NSUInteger)arg0 ;
-(NSUInteger)indexOfEngagedSuggestionForChatGuidEngaged;
-(id)feedbackPayload;
-(id)getTrialID;
-(id)initWithChatGuidEngagaged:(id)arg0 suggestions:(id)arg1 ;
-(id)reasonForSuggestionIndex:(NSUInteger)arg0 ;
-(id)reasonTypeForSuggestionIndex:(NSUInteger)arg0 ;


@end


#endif