// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BBBULLETINBOARDDEFAULTS_H
#define BBBULLETINBOARDDEFAULTS_H

@class BSAbstractDefaultDomain, NSArray;



@interface BBBulletinBoardDefaults : BSAbstractDefaultDomain

@property (nonatomic, getter=isAnnounceSupportedForCarPlay) BOOL announceSupportedForCarPlay;
@property (nonatomic, getter=isAnnounceSupportedForHeadphones) BOOL announceSupportedForHeadphones;
@property (nonatomic) NSInteger globalAnnounceCarPlaySetting;
@property (nonatomic) NSInteger globalAnnounceHeadphonesSetting;
@property (nonatomic) NSInteger globalAnnounceSetting;
@property (nonatomic) NSInteger globalContentPreviewSetting;
@property (nonatomic) NSInteger globalNotificationListDisplayStyleSetting;
@property (nonatomic) NSInteger globalScheduledDeliverySetting;
@property (nonatomic) NSInteger globalScheduledDeliveryShowNextSummarySetting;
@property (nonatomic) NSArray *globalScheduledDeliveryTimes;
@property (nonatomic) NSInteger globalSpokenNotificationSetting_deprecated;
@property (nonatomic, getter=hasPairedVehiclesForCarPlay) BOOL pairedVehiclesForCarPlay;


+(id)standardDefaults;
-(id)init;
-(void)_bindAndRegisterDefaults;


@end


#endif