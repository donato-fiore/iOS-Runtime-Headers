// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUINAVIGATIONBARCONTROLLER_H
#define SKUINAVIGATIONBARCONTROLLER_H

@class NSMutableArray, NSMapTable, NSString, NSArray, UIView, UIViewController;
@protocol SKUILayoutCacheDelegate, SKUINavigationBarControllerDelegate;

#import <Foundation/Foundation.h>

#import "SKUINavigationBarButtonsController.h"
#import "SKUINavigationBarContext.h"
#import "SKUINavigationPaletteController.h"
#import "SKUIButtonViewElement.h"
#import "SKUIClientContext.h"
#import "SKUINavigationBarViewElement.h"

@interface SKUINavigationBarController : NSObject <SKUILayoutCacheDelegate>

 {
    SKUINavigationBarButtonsController *_buttonsController;
    SKUINavigationBarContext *_navigationBarContext;
    SKUINavigationPaletteController *_paletteController;
    NSMutableArray *_reusableSearchBarControllers;
    NSMapTable *_searchBarControllers;
    NSMutableArray *_sections;
    SKUIButtonViewElement *_titleButtonViewElement;
}


@property (retain, nonatomic) SKUIClientContext *clientContext; // ivar: _clientContext
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SKUINavigationBarControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *existingSearchBarControllers;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SKUINavigationBarViewElement *navigationBarViewElement; // ivar: _viewElement
@property (readonly, nonatomic) UIView *navigationPaletteView;
@property (weak, nonatomic) UIViewController *parentViewController; // ivar: _parentViewController
@property (readonly) Class superclass;


-(CGFloat)_availableWidth;
-(id)_addSearchBarControllerWithViewElement:(id)arg0 ;
-(id)_attributedStringForButton:(id)arg0 ;
-(id)_attributedStringForButtonText:(id)arg0 type:(NSInteger)arg1 style:(id)arg2 ;
-(id)_barButtonItemWithButtonViewElement:(id)arg0 ;
-(id)_barButtonItemWithSearchBarViewElement:(id)arg0 ;
-(id)_barButtonItemWithViewElement:(id)arg0 ;
-(id)_buttonWithElement:(id)arg0 width:(CGFloat)arg1 ;
-(id)_navigationBarContext;
-(id)_resourceImageForImageElement:(id)arg0 ;
-(id)barButtonItemForElementIdentifier:(id)arg0 ;
-(id)fallbackTitleView;
-(id)initWithNavigationBarViewElement:(id)arg0 ;
-(id)titleViewWithViewElement:(id)arg0 ;
-(id)viewForElementIdentifier:(id)arg0 ;
-(void)_fullyReloadSections:(id)arg0 withNavigationItem:(id)arg1 ;
-(void)_titleButtonAction:(id)arg0 ;
-(void)_viewElementEventNotification:(id)arg0 ;
-(void)attachToNavigationItem:(id)arg0 ;
-(void)dealloc;
-(void)detachFromNavigationItem:(id)arg0 ;
-(void)detachNavigationItemControllers;
-(void)itemOfferButtonWillAnimateTransition:(id)arg0 ;
-(void)layoutCacheDidFinishBatch:(id)arg0 ;
-(void)setReusableSearchBarControllers:(id)arg0 ;
-(void)updateNavigationItem:(id)arg0 ;


@end


#endif