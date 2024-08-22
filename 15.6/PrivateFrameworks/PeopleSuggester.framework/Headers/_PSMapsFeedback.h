// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PSMAPSFEEDBACK_H
#define _PSMAPSFEEDBACK_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "_PSMapsFeedbackAction.h"
#import "_PSMapsPredictionContext.h"

@interface _PSMapsFeedback : NSObject

@property (readonly, nonatomic) _PSMapsFeedbackAction *action; // ivar: _action
@property (readonly, nonatomic) _PSMapsPredictionContext *context; // ivar: _context
@property (nonatomic) BOOL dryRun; // ivar: _dryRun
@property (readonly, nonatomic) NSUInteger indexOfEngagedSuggestion;
@property (readonly, nonatomic) NSArray *suggestions; // ivar: _suggestions


-(id)feedbackPayload;
-(id)getTrialID;
-(id)initWithFeedbackAction:(id)arg0 predictionContext:(id)arg1 suggestions:(id)arg2 ;
-(id)knowledgeEvent;


@end


#endif