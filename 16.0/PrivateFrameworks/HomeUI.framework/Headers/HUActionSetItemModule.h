// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUACTIONSETITEMMODULE_H
#define HUACTIONSETITEMMODULE_H

@class HFItemModule, HFActionSetItemProvider, HMHome;



@interface HUActionSetItemModule : HFItemModule {
    ? filter;
    ? sortBlock;
}


@property (nonatomic, retain) HFActionSetItemProvider *actionSetItemProvider; // ivar: actionSetItemProvider
@property (nonatomic) NSUInteger actionSetItemStyle; // ivar: actionSetItemStyle
@property (nonatomic, copy) id *filter;
@property (nonatomic, readonly) HMHome *home; // ivar: home
@property (nonatomic, copy) id *sortBlock;


+(id)actionSetSectionIdentifier;
-(id)buildItemProviders;
-(id)buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)initWithHome:(id)arg0 itemUpdater:(id)arg1 ;
-(id)initWithItemUpdater:(id)arg0 ;


@end


#endif