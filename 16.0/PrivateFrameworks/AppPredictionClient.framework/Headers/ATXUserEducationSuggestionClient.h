// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXUSEREDUCATIONSUGGESTIONCLIENT_H
#define ATXUSEREDUCATIONSUGGESTIONCLIENT_H

@class NSHashTable;

#import <Foundation/Foundation.h>

#import "ATXUserEducationSuggestionConnector.h"

@interface ATXUserEducationSuggestionClient : NSObject {
    NSHashTable *_observers;
    ATXUserEducationSuggestionConnector *_connector;
}




+(id)sharedInstance;
-(id)init;
-(void)logUserEducationSuggestionFeedback:(id)arg0 ;
-(void)notifyObserversOfSuggestionEvent:(id)arg0 ;
-(void)registerObserver:(id)arg0 ;
-(void)unregisterObserver:(id)arg0 ;


@end


#endif