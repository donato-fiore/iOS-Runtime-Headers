// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EDAMSYNCSTATE_H
#define EDAMSYNCSTATE_H

@class NSNumber;


#import "FATObject.h"
#import "EDAMClientSyncRateConfig.h"

@interface EDAMSyncState : FATObject

@property (retain, nonatomic) NSNumber *businessSummaryUpdated; // ivar: _businessSummaryUpdated
@property (retain, nonatomic) EDAMClientSyncRateConfig *clientSyncRateConfig; // ivar: _clientSyncRateConfig
@property (retain, nonatomic) NSNumber *communicationEngineUpdateId; // ivar: _communicationEngineUpdateId
@property (retain, nonatomic) NSNumber *currentDevicesUsed; // ivar: _currentDevicesUsed
@property (retain, nonatomic) NSNumber *currentTime; // ivar: _currentTime
@property (retain, nonatomic) NSNumber *fullSyncBefore; // ivar: _fullSyncBefore
@property (retain, nonatomic) NSNumber *showChoiceScreen; // ivar: _showChoiceScreen
@property (retain, nonatomic) NSNumber *updateCount; // ivar: _updateCount
@property (retain, nonatomic) NSNumber *uploaded; // ivar: _uploaded
@property (retain, nonatomic) NSNumber *userLastUpdated; // ivar: _userLastUpdated
@property (retain, nonatomic) NSNumber *userMaxMessageEventId; // ivar: _userMaxMessageEventId


+(id)structFields;
+(id)structName;


@end


#endif