// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUQUICKCONTROLCOLLECTIONITEMMANAGER_H
#define HUQUICKCONTROLCOLLECTIONITEMMANAGER_H

@class HFItemManager, NSString, HFItemProvider, HFItem<NSCopying>;
@protocol HUQuickControlCollectionItemManaging;



@interface HUQuickControlCollectionItemManager : HFItemManager <HUQuickControlCollectionItemManaging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) HFItemProvider *gridItemProvider; // ivar: _gridItemProvider
@property (readonly, copy, nonatomic) id *gridItemProviderCreator; // ivar: _gridItemProviderCreator
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) HFItem<NSCopying> *supplementaryItem; // ivar: _supplementaryItem
@property (retain, nonatomic) HFItemProvider *supplementaryItemProvider; // ivar: _supplementaryItemProvider
@property (readonly, copy, nonatomic) id *supplementaryItemProviderCreator; // ivar: _supplementaryItemProviderCreator


-(BOOL)isGridItem:(id)arg0 ;
-(id)_buildItemProvidersForHome:(id)arg0 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg0 ;
// -(id)initWithDelegate:(id)arg0 gridItemProviderCreator:(id)arg1 supplementaryItemProviderCreator:(unk)arg2  ;


@end


#endif