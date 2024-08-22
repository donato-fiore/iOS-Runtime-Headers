// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXCONTACTENTITYFEATURES_H
#define ATXCONTACTENTITYFEATURES_H

@class NSNumber;
@protocol ATXJSONSerializableProtocol;

#import <Foundation/Foundation.h>


@interface ATXContactEntityFeatures : NSObject <ATXJSONSerializableProtocol>



@property (retain, nonatomic) NSNumber *classConditionalOfNotificationsClearedForEntity; // ivar: _classConditionalOfNotificationsClearedForEntity
@property (retain, nonatomic) NSNumber *classConditionalOfNotificationsReceivedForEntity; // ivar: _classConditionalOfNotificationsReceivedForEntity
@property (retain, nonatomic) NSNumber *globalCountOfNotificationsClearedForEntity; // ivar: _globalCountOfNotificationsClearedForEntity
@property (retain, nonatomic) NSNumber *globalCountOfNotificationsReceivedForEntity; // ivar: _globalCountOfNotificationsReceivedForEntity
@property (retain, nonatomic) NSNumber *globalNotificationsClearedRateForEntity; // ivar: _globalNotificationsClearedRateForEntity
@property (retain, nonatomic) NSNumber *globalPopularityOfNotificationsReceivedForEntity; // ivar: _globalPopularityOfNotificationsReceivedForEntity
@property (nonatomic) BOOL isEmergencyContact; // ivar: _isEmergencyContact
@property (nonatomic) BOOL isFavoriteContact; // ivar: _isFavoriteContact
@property (nonatomic) BOOL isICloudFamilyMember; // ivar: _isICloudFamilyMember
@property (nonatomic) BOOL isVIPContact; // ivar: _isVIPContact
@property (retain, nonatomic) NSNumber *localNotificationsClearedRateForEntity; // ivar: _localNotificationsClearedRateForEntity
@property (retain, nonatomic) NSNumber *localPopularityOfNotificationsReceivedForEntity; // ivar: _localPopularityOfNotificationsReceivedForEntity
@property (retain, nonatomic) NSNumber *modeCountOfNotificationsClearedForEntity; // ivar: _modeCountOfNotificationsClearedForEntity
@property (retain, nonatomic) NSNumber *modeCountOfNotificationsReceivedForEntity; // ivar: _modeCountOfNotificationsReceivedForEntity
@property (retain, nonatomic) NSNumber *ratioOfLocalToGlobalNotificationsClearedRateForEntity; // ivar: _ratioOfLocalToGlobalNotificationsClearedRateForEntity
@property (retain, nonatomic) NSNumber *ratioOfLocalToGlobalPopularityOfNotificationsReceivedForEntity; // ivar: _ratioOfLocalToGlobalPopularityOfNotificationsReceivedForEntity


-(id)init;
-(id)initFromJSON:(id)arg0 ;
-(id)jsonRepresentation;


@end


#endif