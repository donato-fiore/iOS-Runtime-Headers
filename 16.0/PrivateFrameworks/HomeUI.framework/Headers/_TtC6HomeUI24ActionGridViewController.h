// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC6HOMEUI24ACTIONGRIDVIEWCONTROLLER_H
#define _TTC6HOMEUI24ACTIONGRIDVIEWCONTROLLER_H

@class NSArray;


#import "HUControllableItemCollectionViewController.h"

@interface _TtC6HomeUI24ActionGridViewController : HUControllableItemCollectionViewController {
    ? delegate;
    ? actionGridConfig;
    ? actionGridModule;
    ? actionGridModuleController;
}


@property (nonatomic, copy) NSArray *allowlistedAccessories;
@property (nonatomic) BOOL allowsEditing;
@property (nonatomic, copy) NSArray *denylistedAccessories;


+(NSUInteger)updateMode;
-(BOOL)hasDetailsActionForPresentationCoordinator:(id)arg0 item:(id)arg1 ;
-(BOOL)presentationCoordinator:(id)arg0 shouldBeginInteractivePresentationWithTouchLocation:(struct CGPoint )arg1 view:(id)arg2 ;
-(BOOL)presentationCoordinator:(id)arg0 shouldBeginLongPressPresentationWithContext:(id)arg1 ;
-(BOOL)presentationCoordinator:(id)arg0 shouldBeginPresentationWithContext:(id)arg1 ;
-(id)buildItemModuleControllerForModule:(id)arg0 ;
-(id)detailsViewControllerForPresentationCoordinator:(id)arg0 item:(id)arg1 ;
-(id)initUsingCompositionalLayoutWithItemManager:(id)arg0 ;
-(id)initWithItemManager:(id)arg0 collectionViewLayout:(id)arg1 ;
-(id)tappableAreaForPoint:(struct CGPoint )arg0 inItem:(id)arg1 atIndexPath:(id)arg2 ;


@end


#endif