// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFRUNSHORTCUTEVENT_H
#define WFRUNSHORTCUTEVENT_H

@class NSString;


#import "WFEvent.h"

@interface WFRunShortcutEvent : WFEvent

@property (nonatomic) unsigned int actionCount; // ivar: _actionCount
@property (copy, nonatomic) NSString *automationSuggestionsTrialIdentifier; // ivar: _automationSuggestionsTrialIdentifier
@property (copy, nonatomic) NSString *automationType; // ivar: _automationType
@property (nonatomic) BOOL completed; // ivar: _completed
@property (nonatomic) BOOL didRunRemotely; // ivar: _didRunRemotely
@property (copy, nonatomic) NSString *galleryIdentifier; // ivar: _galleryIdentifier
@property (nonatomic) BOOL isFromAutomationSuggestion; // ivar: _isFromAutomationSuggestion
@property (copy, nonatomic) NSString *key; // ivar: _key
@property (nonatomic) unsigned int numberOfDialogsPresented; // ivar: _numberOfDialogsPresented
@property (copy, nonatomic) NSString *runSource; // ivar: _runSource
@property (copy, nonatomic) NSString *shortcutSource; // ivar: _shortcutSource


+(Class)codableEventClass;
+(id)serializablePropertyTransformers;


@end


#endif