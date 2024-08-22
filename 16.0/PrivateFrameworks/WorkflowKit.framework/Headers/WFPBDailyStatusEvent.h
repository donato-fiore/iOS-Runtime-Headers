// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFPBDAILYSTATUSEVENT_H
#define WFPBDAILYSTATUSEVENT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface WFPBDailyStatusEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int appComplicationSlotsUsed; // ivar: _appComplicationSlotsUsed
@property (nonatomic) unsigned int appSessionCount; // ivar: _appSessionCount
@property (nonatomic) BOOL autoShortcutsSectionsViewed; // ivar: _autoShortcutsSectionsViewed
@property (retain, nonatomic) NSString *automationSuggestionsTrialIdentifier; // ivar: _automationSuggestionsTrialIdentifier
@property (nonatomic) unsigned int averageShortcutCountPerFolder; // ivar: _averageShortcutCountPerFolder
@property (nonatomic) unsigned int folderCount; // ivar: _folderCount
@property (nonatomic) BOOL hasAppComplicationSlotsUsed;
@property (nonatomic) BOOL hasAppSessionCount;
@property (nonatomic) BOOL hasAutoShortcutsSectionsViewed;
@property (readonly, nonatomic) BOOL hasAutomationSuggestionsTrialIdentifier;
@property (nonatomic) BOOL hasAverageShortcutCountPerFolder;
@property (nonatomic) BOOL hasFolderCount;
@property (nonatomic) BOOL hasHomeAutomationsEnabled;
@property (nonatomic) BOOL hasInstalled;
@property (readonly, nonatomic) BOOL hasKey;
@property (nonatomic) BOOL hasNumberOfLargeWidgets;
@property (nonatomic) BOOL hasNumberOfMediumWidgets;
@property (nonatomic) BOOL hasNumberOfPersonalAutomationsEnabled;
@property (nonatomic) BOOL hasNumberOfPersonalAutomationsFromSuggestionsEnabled;
@property (nonatomic) BOOL hasNumberOfSmallWidgets;
@property (nonatomic) BOOL hasNumberOfSuggestedAutomationsGenerated;
@property (nonatomic) BOOL hasNumberOfSuggestedAutomationsGeneratedUserAlreadyHas;
@property (nonatomic) BOOL hasNumberOfWidgetsOnHomeScreen;
@property (nonatomic) BOOL hasNumberOfWidgetsOnLoL;
@property (nonatomic) BOOL hasPersonalAutomationsEnabled;
@property (nonatomic) BOOL hasSharingEnabled;
@property (nonatomic) BOOL hasShortcutComplicationSlotsUsed;
@property (nonatomic) BOOL hasShortcutRunCount;
@property (nonatomic) BOOL hasShortcutsCount;
@property (nonatomic) BOOL hasSleepEnabled;
@property (nonatomic) BOOL hasSleepShortcutsCount;
@property (nonatomic) BOOL hasUncategorizedShortcutCount;
@property (nonatomic) BOOL hasWatchShortcutCount;
@property (nonatomic) BOOL homeAutomationsEnabled; // ivar: _homeAutomationsEnabled
@property (nonatomic) BOOL installed; // ivar: _installed
@property (retain, nonatomic) NSString *key; // ivar: _key
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


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif