// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXUSEREDUCATIONSUGGESTIONSERVER_H
#define ATXUSEREDUCATIONSUGGESTIONSERVER_H

@class ATXUserEducationSuggestionConnector;

#import <Foundation/Foundation.h>

#import "ATXUserEducationSuggestionCustomizeFocusServer.h"
#import "ATXUserEducationSuggestionSleepMigrationServer.h"

@interface ATXUserEducationSuggestionServer : NSObject {
    ATXUserEducationSuggestionCustomizeFocusServer *_customizeFocusServer;
    ATXUserEducationSuggestionSleepMigrationServer *_sleepMigrationServer;
    ATXUserEducationSuggestionConnector *_connector;
}




+(id)sharedInstance;
-(id)init;


@end


#endif