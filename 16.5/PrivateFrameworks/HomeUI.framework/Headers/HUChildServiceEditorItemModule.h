// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUCHILDSERVICEEDITORITEMMODULE_H
#define HUCHILDSERVICEEDITORITEMMODULE_H

@class HFItemModule, NSSet, HMAccessory, HFServiceItemProvider, HMHome, HFItem<HFServiceLikeItem>;



@interface HUChildServiceEditorItemModule : HFItemModule {
    NSSet *_itemProviders;
}


@property (readonly, nonatomic) HMAccessory *accessory;
@property (retain, nonatomic) HFServiceItemProvider *childServiceItemProvider; // ivar: _childServiceItemProvider
@property (readonly, nonatomic) NSUInteger editingMode; // ivar: _editingMode
@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (readonly, nonatomic) HFItem<HFServiceLikeItem> *sourceItem; // ivar: _sourceItem


+(id)childItemComparator:(SEL)arg0 ;
+(id)supportedServiceTypes;
-(BOOL)canToggleConfigurationStateForItem:(id)arg0 ;
-(NSInteger)configurationStateForItem:(id)arg0 ;
-(id)_createItemProviders;
-(id)_isConfiguredControlItemForItem:(id)arg0 ;
-(id)initWithItemUpdater:(id)arg0 home:(id)arg1 sourceItem:(id)arg2 mode:(NSUInteger)arg3 ;
-(id)itemProviders;
-(id)toggleConfigurationStateForItem:(id)arg0 ;


@end


#endif