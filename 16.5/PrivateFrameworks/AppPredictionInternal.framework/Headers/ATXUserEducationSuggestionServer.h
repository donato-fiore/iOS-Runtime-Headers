// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXUSEREDUCATIONSUGGESTIONSERVER_H
#define ATXUSEREDUCATIONSUGGESTIONSERVER_H

@class ATXUserEducationSuggestionConnector;

#import <Foundation/Foundation.h>

#import "ATXUserEducationSuggestionCustomizeFocusServer.h"
#import "ATXUserEducationSuggestionExploreFacesServer.h"
#import "ATXUserEducationSuggestionSleepMigrationServer.h"

@interface ATXUserEducationSuggestionServer : NSObject {
    ATXUserEducationSuggestionConnector *_connector;
}


@property (readonly, nonatomic) ATXUserEducationSuggestionCustomizeFocusServer *customizeFocusServer; // ivar: _customizeFocusServer
@property (readonly, nonatomic) ATXUserEducationSuggestionExploreFacesServer *exploreFacesServer; // ivar: _exploreFacesServer
@property (readonly, nonatomic) ATXUserEducationSuggestionSleepMigrationServer *sleepMigrationServer; // ivar: _sleepMigrationServer


+(id)sharedInstance;
-(id)init;


@end


#endif