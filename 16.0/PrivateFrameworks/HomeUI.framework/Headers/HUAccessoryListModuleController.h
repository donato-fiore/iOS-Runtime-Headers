// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUACCESSORYLISTMODULECONTROLLER_H
#define HUACCESSORYLISTMODULECONTROLLER_H

@class TtC6HomeUI30SelectableItemModuleController;
@protocol HUCollectionLayoutManagerDelegate;



@interface HUAccessoryListModuleController : TtC6HomeUI30SelectableItemModuleController <HUCollectionLayoutManagerDelegate>

 {
    ? collectionLayoutManager;
    ? cellVerticalContentInset;
}




-(BOOL)shouldShowHeaderForSection:(id)arg0 ;
-(Class)collectionCellClassForItem:(id)arg0 ;
-(id)collectionLayoutSectionForSectionWithIdentifier:(id)arg0 layoutEnvironment:(id)arg1 ;
-(id)displayedItemsInSection:(id)arg0 ;
-(id)initWithModule:(id)arg0 ;
-(void)configureCell:(id)arg0 forItem:(id)arg1 ;


@end


#endif