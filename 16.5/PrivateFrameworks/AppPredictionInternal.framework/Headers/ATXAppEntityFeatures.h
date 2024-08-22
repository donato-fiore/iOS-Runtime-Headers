// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXAPPENTITYFEATURES_H
#define ATXAPPENTITYFEATURES_H

@class NSNumber;
@protocol ATXJSONSerializableProtocol;

#import <Foundation/Foundation.h>


@interface ATXAppEntityFeatures : NSObject <ATXJSONSerializableProtocol>



@property (retain, nonatomic) NSNumber *appCategoryScore; // ivar: _appCategoryScore
@property (retain, nonatomic) NSNumber *appCategoryScore_v2; // ivar: _appCategoryScore_v2
@property (retain, nonatomic) NSNumber *classConditionalOfNotificationsClearedForEntity; // ivar: _classConditionalOfNotificationsClearedForEntity
@property (retain, nonatomic) NSNumber *classConditionalOfNotificationsReceivedForEntity; // ivar: _classConditionalOfNotificationsReceivedForEntity
@property (retain, nonatomic) NSNumber *globalAppInterruptionsCountByEntity; // ivar: _globalAppInterruptionsCountByEntity
@property (retain, nonatomic) NSNumber *globalCountOfNotificationsClearedForEntity; // ivar: _globalCountOfNotificationsClearedForEntity
@property (retain, nonatomic) NSNumber *globalCountOfNotificationsReceivedForEntity; // ivar: _globalCountOfNotificationsReceivedForEntity
@property (retain, nonatomic) NSNumber *globalInterruptingPrior; // ivar: _globalInterruptingPrior
@property (retain, nonatomic) NSNumber *globalModeAffinityPrior; // ivar: _globalModeAffinityPrior
@property (retain, nonatomic) NSNumber *globalNotificationsClearedRateForEntity; // ivar: _globalNotificationsClearedRateForEntity
@property (retain, nonatomic) NSNumber *globalPopularityOfInterruptingEntity; // ivar: _globalPopularityOfInterruptingEntity
@property (retain, nonatomic) NSNumber *globalPopularityOfNotificationsReceivedForEntity; // ivar: _globalPopularityOfNotificationsReceivedForEntity
@property (retain, nonatomic) NSNumber *localNotificationsClearedRateForEntity; // ivar: _localNotificationsClearedRateForEntity
@property (retain, nonatomic) NSNumber *localPopularityOfNotificationsReceivedForEntity; // ivar: _localPopularityOfNotificationsReceivedForEntity
@property (retain, nonatomic) NSNumber *modeAppInterruptionsClassConditionalProbabilityByEntity; // ivar: _modeAppInterruptionsClassConditionalProbabilityByEntity
@property (retain, nonatomic) NSNumber *modeAppInterruptionsCountByEntity; // ivar: _modeAppInterruptionsCountByEntity
@property (retain, nonatomic) NSNumber *modeCountOfNotificationsClearedForEntity; // ivar: _modeCountOfNotificationsClearedForEntity
@property (retain, nonatomic) NSNumber *modeCountOfNotificationsReceivedForEntity; // ivar: _modeCountOfNotificationsReceivedForEntity
@property (retain, nonatomic) NSNumber *modePopularityOfInterruptingEntity; // ivar: _modePopularityOfInterruptingEntity
@property (retain, nonatomic) NSNumber *notificationsReceivedInLastTwoWeeks; // ivar: _notificationsReceivedInLastTwoWeeks
@property (retain, nonatomic) NSNumber *ratioOfLocalToGlobalNotificationsClearedRateForEntity; // ivar: _ratioOfLocalToGlobalNotificationsClearedRateForEntity
@property (retain, nonatomic) NSNumber *ratioOfLocalToGlobalPopularityOfNotificationsReceivedForEntity; // ivar: _ratioOfLocalToGlobalPopularityOfNotificationsReceivedForEntity
@property (retain, nonatomic) NSNumber *ratioOfModePopularityToGlobalPopularityOfInterruptingEntity; // ivar: _ratioOfModePopularityToGlobalPopularityOfInterruptingEntity


-(id)init;
-(id)initFromJSON:(id)arg0 ;
-(id)jsonRepresentation;


@end


#endif