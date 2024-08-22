// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXMODEAPPUSAGEDATA_H
#define ATXMODEAPPUSAGEDATA_H

@class NSMutableDictionary, NSSet, NSDate, NSArray;

#import <Foundation/Foundation.h>


@interface ATXModeAppUsageData : NSObject

@property (retain, nonatomic) NSMutableDictionary *appCategoryDict; // ivar: _appCategoryDict
@property (retain, nonatomic) NSMutableDictionary *appNameDict; // ivar: _appNameDict
@property (retain, nonatomic) NSSet *bundleIDs; // ivar: _bundleIDs
@property (retain, nonatomic) NSMutableDictionary *deviceUnlockActivity; // ivar: _deviceUnlockActivity
@property (retain, nonatomic) NSMutableDictionary *dndUsage; // ivar: _dndUsage
@property (retain, nonatomic) NSDate *firstModeSessionDate; // ivar: _firstModeSessionDate
@property (retain, nonatomic) NSMutableDictionary *launchCounts; // ivar: _launchCounts
@property (retain, nonatomic) NSMutableDictionary *modeCounts; // ivar: _modeCounts
@property (retain, nonatomic) NSMutableDictionary *modeTime; // ivar: _modeTime
@property (retain, nonatomic) NSArray *modeTimeline; // ivar: _modeTimeline
@property (retain, nonatomic) NSMutableDictionary *notificationUsage; // ivar: _notificationUsage
@property (retain, nonatomic) NSMutableDictionary *peopleStats; // ivar: _peopleStats
@property (retain, nonatomic) NSMutableDictionary *screenTime; // ivar: _screenTime
@property (retain, nonatomic) NSDate *sinceDate; // ivar: _sinceDate
@property (nonatomic) CGFloat timespan; // ivar: _timespan
@property (retain, nonatomic) NSDate *updateDate; // ivar: _updateDate


-(id)dictionaryRepresentation;
-(id)init;


@end


#endif