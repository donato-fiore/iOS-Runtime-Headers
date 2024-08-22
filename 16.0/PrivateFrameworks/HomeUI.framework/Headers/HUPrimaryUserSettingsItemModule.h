// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUPRIMARYUSERSETTINGSITEMMODULE_H
#define HUPRIMARYUSERSETTINGSITEMMODULE_H

@class HFItemModule, HMHome, HFItem, HFStaticItemProvider;
@protocol HFMediaProfileContainer;


#import "HUPrimaryUserItemProvider.h"

@interface HUPrimaryUserSettingsItemModule : HFItemModule

@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (retain, nonatomic) HFItem *homePodAccountSelectionItem; // ivar: _homePodAccountSelectionItem
@property (readonly, nonatomic) NSObject<HFMediaProfileContainer> *mediaProfileContainer; // ivar: _mediaProfileContainer
@property (retain, nonatomic) HUPrimaryUserItemProvider *primaryUserItemProvider; // ivar: _primaryUserItemProvider
@property (retain, nonatomic) HFItem *primaryUserSettingsHeaderItem; // ivar: _primaryUserSettingsHeaderItem
@property (retain, nonatomic) HFStaticItemProvider *staticItemProvider; // ivar: _staticItemProvider


+(id)_userItemComparator:(SEL)arg0 ;
-(id)_updatePrimaryUserSelectionType:(NSUInteger)arg0 user:(id)arg1 ;
-(id)buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)initWithItemUpdater:(id)arg0 home:(id)arg1 mediaProfileContainer:(id)arg2 ;
-(id)itemProviders;
-(id)updatePrimaryUserSelectionType:(NSUInteger)arg0 user:(id)arg1 ;
-(void)_buildItemProviders;


@end


#endif