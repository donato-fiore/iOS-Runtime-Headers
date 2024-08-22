// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BLTSECTIONINFOLIST_H
#define BLTSECTIONINFOLIST_H

@class NSMutableDictionary, NSMutableSet, NSMutableArray, NSString;
@protocol BLTSectionInfoListProviderDelegate, BLTSectionInfoListDelegate, BLTSectionInfoListOverrideProvider, BLTSectionInfoListBBProvider;

#import <Foundation/Foundation.h>


@interface BLTSectionInfoList : NSObject <BLTSectionInfoListProviderDelegate>

 {
    NSMutableDictionary *_sectionInfoListItemsBySectionID;
    NSMutableSet *_sectionInfoSectionIDs;
    _opaque_pthread_mutex_t _lock;
    NSMutableArray *_loadingCompletionHandlers;
    BOOL _loading;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<BLTSectionInfoListDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=hasLoaded) BOOL loaded; // ivar: _loaded
@property (retain, nonatomic) NSObject<BLTSectionInfoListOverrideProvider> *overrideProvider; // ivar: _overrideProvider
@property (retain, nonatomic) NSObject<BLTSectionInfoListBBProvider> *sectionInfoProvider; // ivar: _sectionInfoProvider
@property (readonly) Class superclass;


-(BOOL)hasCustomSettingsSetForSectionID:(id)arg0 ;
-(id)_lock_sectionInfoFromListItem:(id)arg0 sectionID:(id)arg1 displayName:(*id)arg2 ;
-(id)_overriddenSectionInfoForSectionID:(id)arg0 originalSectionInfo:(*id)arg1 displayName:(*id)arg2 ;
-(id)_sectionInfoFromSectionID:(id)arg0 displayName:(*id)arg1 ;
-(id)bbSectionInfoForSectionID:(id)arg0 ;
-(id)effectiveSectionInfoForSectionID:(id)arg0 ;
-(id)init;
-(id)originalSettings;
-(id)overriddenSectionInfoForSectionID:(id)arg0 ;
-(id)overriddenSettings;
-(id)overrides;
-(id)sectionIDs;
-(id)sectionOverrideOnlyForSectionID:(id)arg0 ;
-(id)sectionOverridesOnly;
-(id)settingsDescriptionForSectionIDs:(id)arg0 ;
-(id)universalSectionIDForSectionID:(id)arg0 ;
-(void)_migrateFromExternalDeviceSwitchToOverrides:(id)arg0 sectionID:(id)arg1 ;
-(void)_updateListItem:(id)arg0 overrides:(id)arg1 sectionID:(id)arg2 ;
-(void)dealloc;
-(void)mapSection:(id)arg0 map:(id)arg1 ;
-(void)reloadBBSection:(id)arg0 completion:(id)arg1 ;
-(void)reloadWithCompletion:(id)arg0 ;
-(void)removedSectionWithSectionID:(id)arg0 transaction:(id)arg1 ;
-(void)updateOverrides:(id)arg0 forSectionID:(id)arg1 transaction:(id)arg2 ;
-(void)updateSectionInfoForSectionIDs:(id)arg0 transaction:(id)arg1 ;


@end


#endif