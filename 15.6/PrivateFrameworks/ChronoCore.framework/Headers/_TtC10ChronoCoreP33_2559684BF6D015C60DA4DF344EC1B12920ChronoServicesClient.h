// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC10CHRONOCOREP33_2559684BF6D015C60DA4DF344EC1B12920CHRONOSERVICESCLIENT_H
#define _TTC10CHRONOCOREP33_2559684BF6D015C60DA4DF344EC1B12920CHRONOSERVICESCLIENT_H

@protocol CHSChronoWidgetServiceServerInterface;

#import <Foundation/Foundation.h>


@interface _TtC10ChronoCoreP33_2559684BF6D015C60DA4DF344EC1B12920ChronoServicesClient : NSObject <CHSChronoWidgetServiceServerInterface>

 {
    ? connection;
    ? timelineService;
    ? taskService;
    ? descriptorService;
    ? extensionService;
    ? configurationService;
    ? keybagStateProvider;
    ? powerlogSuggestionService;
    ? duetService;
    ? queue;
    ? widgetHostIdentifiers;
    ? tasks;
    ? widgetFetchSubscriptions;
    ? widgetTimelineLoadSubscriptions;
    ? widgetTimelineLoadActionResponders;
}




-(id)_URLSessionDidCompleteForExtensionWithBundleIdentifier:(id)arg0 info:(id)arg1 ;
-(id)init;
-(id)widgetEnvironmentDataForBundleIdentifier:(id)arg0 ;
-(void)allWidgetConfigurationsByHostWithCompletion:(id)arg0 ;
-(void)applicationWithBundleIdentifierEnteredForeground:(id)arg0 ;
-(void)descriptors:(id)arg0 ;
-(void)flushPowerlog;
-(void)loadSuggestedWidget:(id)arg0 metrics:(id)arg1 stackIdentifier:(id)arg2 reason:(id)arg3 completion:(id)arg4 ;
-(void)reloadTimeline:(id)arg0 error:(*id)arg1 ;
-(void)reloadTimelineForAvocadoWithIdentifier:(id)arg0 inBundleWithIdentifier:(id)arg1 error:(*id)arg2 ;
-(void)removeWidgetHostWithIdentifier:(id)arg0 ;
-(void)setWidgetConfiguration:(id)arg0 forWidgetHostWithIdentifier:(id)arg1 ;
-(void)suggestionBudgetsForStackIdentifiers:(id)arg0 completion:(id)arg1 ;


@end


#endif