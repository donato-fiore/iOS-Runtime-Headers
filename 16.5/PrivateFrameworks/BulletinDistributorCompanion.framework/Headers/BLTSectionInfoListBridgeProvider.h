// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLTSECTIONINFOLISTBRIDGEPROVIDER_H
#define BLTSECTIONINFOLISTBRIDGEPROVIDER_H

@class NSDate, NPSDomainAccessor, NSString;
@protocol LSApplicationWorkspaceObserverProtocol, BLTSectionInfoListOverrideProvider, BLTSectionInfoListProviderDelegate;

#import <Foundation/Foundation.h>

#import "BLTSectionConfiguration.h"

@interface BLTSectionInfoListBridgeProvider : NSObject <LSApplicationWorkspaceObserverProtocol, BLTSectionInfoListOverrideProvider>

 {
    _opaque_pthread_mutex_t _lock;
    NSDate *_lastKnownBridgeSettingsChangeDate;
    NPSDomainAccessor *_npsDomainAccessor;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<BLTSectionInfoListProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) BLTSectionConfiguration *sectionConfiguration; // ivar: _sectionConfiguration
@property (readonly) Class superclass;


-(id)_companionSetupNotificationSettingsDictionaryForSectionInfo:(id)arg0 sectionID:(id)arg1 ;
-(id)_loadOverridesChangedSince:(id)arg0 ;
-(id)initWithSectionConfiguration:(id)arg0 ;
-(void)_reloadUpdatedOverrides;
-(void)_reloadUpdatedOverridesWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)enableCustomSettingsForWatchSectionID:(id)arg0 ;
-(void)reloadWithCompletion:(id)arg0 ;
-(void)removeSectionWithSectionID:(id)arg0 ;
-(void)setCustomSettingsWithSectionInfo:(id)arg0 ;
-(void)setCustomSettingsWithSectionInfo:(id)arg0 watchSectionID:(id)arg1 ;
-(void)setNotificationsLevel:(int)arg0 sectionID:(id)arg1 forceCustom:(BOOL)arg2 ;


@end


#endif