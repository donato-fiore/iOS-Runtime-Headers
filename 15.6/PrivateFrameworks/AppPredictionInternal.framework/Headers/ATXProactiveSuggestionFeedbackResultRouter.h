// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXPROACTIVESUGGESTIONFEEDBACKRESULTROUTER_H
#define ATXPROACTIVESUGGESTIONFEEDBACKRESULTROUTER_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface ATXProactiveSuggestionFeedbackResultRouter : NSObject {
    NSDictionary *_feedbackListeners;
}




-(id)clientModelIdsWithFeedbackListeners;
-(id)init;
-(id)initWithFeedbackListeners:(id)arg0 ;
-(void)_initializeFeedbackListenersDictWith:(id)arg0 ;
-(void)handleNewFeedbackResult:(id)arg0 ;


@end


#endif