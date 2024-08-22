// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFMETRICSTATUSEVENT_H
#define WFMETRICSTATUSEVENT_H

@class NSString;


#import "WFEvent.h"

@interface WFMetricStatusEvent : WFEvent

@property (nonatomic) unsigned int appComplicationSlotsUsed; // ivar: _appComplicationSlotsUsed
@property (nonatomic) unsigned int appSessionCount; // ivar: _appSessionCount
@property (copy, nonatomic) NSString *automationSuggestionsTrialIdentifier; // ivar: _automationSuggestionsTrialIdentifier
@property (nonatomic) unsigned int averageShortcutCountPerFolder; // ivar: _averageShortcutCountPerFolder
@property (nonatomic) unsigned int folderCount; // ivar: _folderCount
@property (nonatomic) BOOL homeAutomationsEnabled; // ivar: _homeAutomationsEnabled
@property (nonatomic) BOOL installed; // ivar: _installed
@property (copy, nonatomic) NSString *key; // ivar: _key
@property (nonatomic) unsigned int numberOfLargeWidgets; // ivar: _numberOfLargeWidgets
@property (nonatomic) unsigned int numberOfMediumWidgets; // ivar: _numberOfMediumWidgets
@property (nonatomic) unsigned int numberOfPersonalAutomationsEnabled; // ivar: _numberOfPersonalAutomationsEnabled
@property (nonatomic) unsigned int numberOfPersonalAutomationsFromSuggestionsEnabled; // ivar: _numberOfPersonalAutomationsFromSuggestionsEnabled
@property (nonatomic) unsigned int numberOfSmallWidgets; // ivar: _numberOfSmallWidgets
@property (nonatomic) unsigned int numberOfSuggestedAutomationsGenerated; // ivar: _numberOfSuggestedAutomationsGenerated
@property (nonatomic) unsigned int numberOfSuggestedAutomationsGeneratedUserAlreadyHas; // ivar: _numberOfSuggestedAutomationsGeneratedUserAlreadyHas
@property (nonatomic) unsigned int numberOfWidgetsOnHomeScreen; // ivar: _numberOfWidgetsOnHomeScreen
@property (nonatomic) unsigned int numberOfWidgetsOnLoL; // ivar: _numberOfWidgetsOnLoL
@property (nonatomic) BOOL personalAutomationsEnabled; // ivar: _personalAutomationsEnabled
@property (nonatomic) BOOL sharingEnabled; // ivar: _sharingEnabled
@property (nonatomic) unsigned int shortcutComplicationSlotsUsed; // ivar: _shortcutComplicationSlotsUsed
@property (nonatomic) unsigned int shortcutRunCount; // ivar: _shortcutRunCount
@property (nonatomic) unsigned int shortcutsCount; // ivar: _shortcutsCount
@property (nonatomic) BOOL sleepEnabled; // ivar: _sleepEnabled
@property (nonatomic) unsigned int sleepShortcutsCount; // ivar: _sleepShortcutsCount
@property (nonatomic) unsigned int uncategorizedShortcutCount; // ivar: _uncategorizedShortcutCount
@property (nonatomic) unsigned int watchShortcutCount; // ivar: _watchShortcutCount


+(Class)codableEventClass;


@end


#endif