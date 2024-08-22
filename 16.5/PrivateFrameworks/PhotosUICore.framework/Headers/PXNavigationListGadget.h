// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXNAVIGATIONLISTGADGET_H
#define PXNAVIGATIONLISTGADGET_H

@class NSString;
@protocol PXGadget, PXNavigableCollectionContainer, PXGadgetDelegate;


#import "PXNavigationListController.h"
#import "PXGadgetSpec.h"

@interface PXNavigationListGadget : PXNavigationListController <PXGadget, PXNavigableCollectionContainer>



@property (readonly, nonatomic) NSString *accessoryButtonTitle;
@property (readonly, nonatomic) NSUInteger accessoryButtonType;
@property (readonly, nonatomic) Class collectionViewItemClass;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXGadgetDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger gadgetCapabilities;
@property (retain, nonatomic) PXGadgetSpec *gadgetSpec; // ivar: _gadgetSpec
@property (readonly, nonatomic) NSUInteger gadgetType;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger headerStyle;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (nonatomic) NSInteger priority;
@property (readonly) Class superclass;
@property (nonatomic) CGRect visibleContentRect; // ivar: _visibleContentRect
@property (readonly, nonatomic) BOOL wantsMultilineTitle;


-(BOOL)canNavigateToCollection:(id)arg0 ;
-(NSUInteger)routingOptionsForDestination:(id)arg0 ;
-(id)_listItemForCollection:(id)arg0 ;
-(id)contentViewController;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)contentHeightDidChange;
-(void)navigateToCollection:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)navigateToDestination:(id)arg0 options:(NSUInteger)arg1 completionHandler:(id)arg2 ;


@end


#endif