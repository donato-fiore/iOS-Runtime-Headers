// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNAUTOCOMPLETEPEOPLESUGGESTERFEEDBACK_H
#define CNAUTOCOMPLETEPEOPLESUGGESTERFEEDBACK_H

@class NSString, _PSSuggester;

#import <Foundation/Foundation.h>


@interface CNAutocompletePeopleSuggesterFeedback : NSObject

@property (readonly, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, nonatomic) _PSSuggester *psSuggester; // ivar: _psSuggester


+(id)sharedInstance;
+(void)didReceiveSuggestions:(id)arg0 ;
+(void)provideFeedback:(id)arg0 ;
+(void)userEnteredContact:(id)arg0 ;
+(void)userEnteredExistingSession;
+(void)userEnteredNewSession;
+(void)userNavigatedAwayFromSession;
+(void)userRemovedContact:(id)arg0 ;
+(void)userSelectedFromContactPicker:(id)arg0 ;
+(void)userSelectedSuggestion:(id)arg0 ;
+(void)userTerminatedSession;
-(id)init;


@end


#endif