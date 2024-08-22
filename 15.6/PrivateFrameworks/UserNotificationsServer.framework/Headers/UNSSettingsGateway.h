// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UNSSETTINGSGATEWAY_H
#define UNSSETTINGSGATEWAY_H

@class NSMutableArray, BBSettingsGateway, BBObserver, NSString;
@protocol BBObserverDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface UNSSettingsGateway : NSObject <BBObserverDelegate>

 {
    NSMutableArray *_observers;
    BBSettingsGateway *_settingsGateway;
    BBObserver *_settingsObserver;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)_queue_globalAnnounceCarPlaySetting;
-(NSInteger)_queue_globalAnnounceHeadphonesSetting;
-(NSInteger)_queue_globalAnnounceSetting;
-(NSInteger)_queue_globalContentPreviewSetting;
-(NSInteger)_queue_globalScheduledDeliverySetting;
-(NSInteger)_queue_globalScheduledDeliveryShowNextSummarySetting;
-(NSInteger)globalAnnounceCarPlaySetting;
-(NSInteger)globalAnnounceHeadphonesSetting;
-(NSInteger)globalAnnounceSetting;
-(NSInteger)globalContentPreviewSetting;
-(NSInteger)globalScheduledDeliverySetting;
-(NSInteger)globalScheduledDeliveryShowNextSummarySetting;
-(id)_queue_allEffectiveSectionInfos;
-(id)_queue_allSectionInfos;
-(id)_queue_effectiveSectionInfoForSectionID:(id)arg0 ;
-(id)_queue_effectiveSectionInfosForSectionIDs:(id)arg0 ;
-(id)_queue_globalScheduledDeliveryTimes;
-(id)_queue_sectionInfoForSectionID:(id)arg0 ;
-(id)_queue_sectionInfosForSectionIDs:(id)arg0 ;
-(id)allEffectiveSectionInfo;
-(id)allSectionInfo;
-(id)effectiveSectionInfoForSectionID:(id)arg0 ;
-(id)effectiveSectionInfoForSectionIDs:(id)arg0 ;
-(id)globalScheduledDeliveryTimes;
-(id)init;
-(id)sectionInfoForSectionID:(id)arg0 ;
-(id)sectionInfoForSectionIDs:(id)arg0 ;
-(void)_queue_addObserver:(id)arg0 ;
-(void)_queue_getSectionInfoForSectionIDs:(id)arg0 withCompletion:(id)arg1 ;
-(void)_queue_removeObserver:(id)arg0 ;
-(void)_queue_setGlobalAnnounceCarPlaySetting:(NSInteger)arg0 ;
-(void)_queue_setGlobalAnnounceHeadphonesSetting:(NSInteger)arg0 ;
-(void)_queue_setGlobalAnnounceSetting:(NSInteger)arg0 ;
-(void)_queue_setGlobalContentPreviewSetting:(NSInteger)arg0 ;
-(void)_queue_setGlobalScheduledDeliverySetting:(NSInteger)arg0 ;
-(void)_queue_setGlobalScheduledDeliveryShowNextSummarySetting:(NSInteger)arg0 ;
-(void)_queue_setGlobalScheduledDeliveryTimes:(id)arg0 ;
-(void)_queue_setSectionInfo:(id)arg0 forSectionID:(id)arg1 ;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)getSectionInfoForSectionIDs:(id)arg0 withCompletion:(id)arg1 ;
-(void)observer:(id)arg0 updateGlobalSettings:(id)arg1 ;
-(void)observer:(id)arg0 updateSectionInfo:(id)arg1 ;
-(void)removeObserver:(id)arg0 ;
-(void)setGlobalAnnounceCarPlaySetting:(NSInteger)arg0 ;
-(void)setGlobalAnnounceHeadphonesSetting:(NSInteger)arg0 ;
-(void)setGlobalAnnounceSetting:(NSInteger)arg0 ;
-(void)setGlobalContentPreviewSetting:(NSInteger)arg0 ;
-(void)setGlobalScheduledDeliverySetting:(NSInteger)arg0 ;
-(void)setGlobalScheduledDeliveryShowNextSummarySetting:(NSInteger)arg0 ;
-(void)setGlobalScheduledDeliveryTimes:(id)arg0 ;
-(void)setSectionInfo:(id)arg0 forSectionID:(id)arg1 ;


@end


#endif