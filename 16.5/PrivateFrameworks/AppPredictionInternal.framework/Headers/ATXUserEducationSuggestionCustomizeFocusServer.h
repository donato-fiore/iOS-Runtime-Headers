// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXUSEREDUCATIONSUGGESTIONCUSTOMIZEFOCUSSERVER_H
#define ATXUSEREDUCATIONSUGGESTIONCUSTOMIZEFOCUSSERVER_H

@class ATXUserEducationSuggestionConnector, ATXDNDModeConfigurationClient;
@protocol ATXUserEducationSuggestionModeChangeObserver;


#import "ATXUserEducationSuggestionBaseServer.h"

@interface ATXUserEducationSuggestionCustomizeFocusServer : ATXUserEducationSuggestionBaseServer <ATXUserEducationSuggestionModeChangeObserver>

 {
    ATXUserEducationSuggestionConnector *_connector;
    ATXDNDModeConfigurationClient *_modeConfigurationClient;
}




-(id)initWithConnector:(id)arg0 ;
-(void)_processModeChangeEvent:(id)arg0 ;
-(void)dealloc;
-(void)processModeChangeEvent:(id)arg0 ;
-(void)sendSuggestion:(id)arg0 eventType:(NSUInteger)arg1 ;


@end


#endif