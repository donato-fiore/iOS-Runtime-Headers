// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PSFEEDBACK_H
#define _PSFEEDBACK_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>

#import "_PSFeedbackAction.h"
#import "_PSPredictionContext.h"

@interface _PSFeedback : NSObject

@property (readonly, nonatomic) _PSFeedbackAction *action; // ivar: _action
@property (readonly, nonatomic) _PSPredictionContext *context; // ivar: _context
@property (readonly, nonatomic) CGFloat delay; // ivar: _delay
@property (nonatomic) BOOL dryRun; // ivar: _dryRun
@property (readonly, nonatomic) NSUInteger indexOfEngagedSuggestion;
@property (readonly, nonatomic) float numberOfVisibleSuggestions; // ivar: _numberOfVisibleSuggestions
@property (readonly, copy, nonatomic) NSString *sessionIdentifier; // ivar: _sessionIdentifier
@property (readonly, nonatomic) NSArray *suggestions; // ivar: _suggestions


+(id)feedbackForAction:(id)arg0 delay:(CGFloat)arg1 context:(id)arg2 suggestions:(id)arg3 numberOfVisibleSuggestions:(float)arg4 sessionIdentifier:(id)arg5 ;
-(id)feedbackPayloadShowFamily:(id)arg0 ;
-(id)getTrialID;
-(id)initWithAction:(id)arg0 delay:(CGFloat)arg1 context:(id)arg2 suggestions:(id)arg3 numberOfVisibleSuggestions:(float)arg4 sessionIdentifier:(id)arg5 ;
-(id)knowledgeEvent;


@end


#endif