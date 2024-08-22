// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PSMAPSSUGGESTER_H
#define _PSMAPSSUGGESTER_H


#import <Foundation/Foundation.h>


@interface _PSMapsSuggester : NSObject



-(id)suggestionsFromContext:(id)arg0 maxSuggestions:(NSUInteger)arg1 ;
-(void)deleteMapsFeedbackEventsMatchingHandle:(id)arg0 contactId:(id)arg1 startLocationId:(id)arg2 endLocationId:(id)arg3 ;
-(void)provideMapsFeedback:(id)arg0 ;


@end


#endif