// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUSERVICEDETAILSITEMMODULE_H
#define HUSERVICEDETAILSITEMMODULE_H

@class HFItemModule, HMHome, HFItem;



@interface HUServiceDetailsItemModule : HFItemModule

@property (retain, nonatomic) HMHome *home; // ivar: _home
@property (retain, nonatomic) HFItem *sourceItem; // ivar: _sourceItem


+(id)serviceDetailsItemSectionComparatorForSortStrategy:(SEL)arg0 ;
-(id)initWithItemUpdater:(id)arg0 home:(id)arg1 sourceItem:(id)arg2 ;
-(id)itemProviders;


@end


#endif