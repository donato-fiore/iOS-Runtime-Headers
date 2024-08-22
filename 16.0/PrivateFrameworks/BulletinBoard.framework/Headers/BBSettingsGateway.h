// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BBSETTINGSGATEWAY_H
#define BBSETTINGSGATEWAY_H

@class NSXPCConnection, NSString;
@protocol BBSettingsGatewayClientInterface, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BBSettingsGateway : NSObject <BBSettingsGatewayClientInterface>

 {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)clientInterface;
+(id)serverInterface;
+(void)initialize;
-(NSInteger)effectiveGlobalAnnounceCarPlaySetting;
-(NSInteger)effectiveGlobalAnnounceHeadphonesSetting;
-(NSInteger)effectiveGlobalAnnounceSetting;
-(NSInteger)effectiveGlobalContentPreviewsSetting;
-(NSInteger)effectiveGlobalNotificationListDisplayStyleSetting;
-(NSInteger)effectiveGlobalScheduledDeliverySetting;
-(NSInteger)effectiveGlobalScheduledDeliveryShowNextSummarySetting;
-(NSInteger)effectiveGlobalSpokenNotificationSetting;
-(id)activeSectionInfo;
-(id)allEffectiveSectionInfo;
-(id)allSectionIDs;
-(id)allSectionInfo;
-(id)effectiveGlobalScheduledDeliveryTimes;
-(id)effectiveSectionInfoForSectionID:(id)arg0 ;
-(id)effectiveSectionInfoForSectionIDs:(id)arg0 ;
-(id)init;
-(id)initWithQueue:(id)arg0 ;
-(id)sectionInfoForSectionID:(id)arg0 ;
-(id)sectionInfoForSectionIDs:(id)arg0 ;
-(void)dealloc;
-(void)getEffectiveGlobalAnnounceCarPlaySettingWithCompletion:(id)arg0 ;
-(void)getEffectiveGlobalAnnounceHeadphonesSettingWithCompletion:(id)arg0 ;
-(void)getEffectiveGlobalAnnounceSettingWithCompletion:(id)arg0 ;
-(void)getEffectiveGlobalContentPreviewsSettingWithCompletion:(id)arg0 ;
-(void)getEffectiveGlobalNotificationListDisplayStyleSettingWithCompletion:(id)arg0 ;
-(void)getEffectiveGlobalScheduledDeliverySettingWithCompletion:(id)arg0 ;
-(void)getEffectiveGlobalScheduledDeliveryShowNextSummarySettingWithCompletion:(id)arg0 ;
-(void)getEffectiveGlobalScheduledDeliveryTimesWithCompletion:(id)arg0 ;
-(void)getEffectiveGlobalSpokenNotificationSettingWithCompletion:(id)arg0 ;
-(void)getEffectiveSectionInfoForSectionID:(id)arg0 withCompletion:(id)arg1 ;
-(void)getEffectiveSectionInfoForSectionIDs:(id)arg0 withCompletion:(id)arg1 ;
-(void)getSectionInfoForActiveSectionsWithCompletion:(id)arg0 ;
-(void)getSectionInfoForSectionID:(id)arg0 withCompletion:(id)arg1 ;
-(void)getSectionInfoForSectionIDs:(id)arg0 withCompletion:(id)arg1 ;
-(void)getSectionInfoWithCompletion:(id)arg0 ;
-(void)invalidate;
-(void)setEffectiveGlobalAnnounceCarPlaySetting:(NSInteger)arg0 ;
-(void)setEffectiveGlobalAnnounceHeadphonesSetting:(NSInteger)arg0 ;
-(void)setEffectiveGlobalAnnounceSetting:(NSInteger)arg0 ;
-(void)setEffectiveGlobalContentPreviewsSetting:(NSInteger)arg0 ;
-(void)setEffectiveGlobalNotificationListDisplayStyleSetting:(NSInteger)arg0 ;
-(void)setEffectiveGlobalScheduledDeliverySetting:(NSInteger)arg0 ;
-(void)setEffectiveGlobalScheduledDeliveryShowNextSummarySetting:(NSInteger)arg0 ;
-(void)setEffectiveGlobalScheduledDeliveryTimes:(id)arg0 ;
-(void)setEffectiveGlobalSpokenNotificationSetting:(NSInteger)arg0 ;
-(void)setSectionInfo:(id)arg0 forSectionID:(id)arg1 ;
-(void)setSectionInfo:(id)arg0 forSectionID:(id)arg1 withCompletion:(id)arg2 ;
-(void)updateSectionInfoForSectionID:(id)arg0 withHandler:(id)arg1 ;


@end


#endif