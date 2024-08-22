// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUINAVIGATIONBARBUTTONSCONTROLLER_H
#define SKUINAVIGATIONBARBUTTONSCONTROLLER_H

@class NSMapTable, NSString;
@protocol SKUIItemOfferButtonDelegate;


#import "SKUINavigationBarSectionController.h"
#import "SKUINavigationBarViewElement.h"

@interface SKUINavigationBarButtonsController : SKUINavigationBarSectionController <SKUIItemOfferButtonDelegate>

 {
    NSMapTable *_buttonItemElements;
    NSMapTable *_buttonItemToImageResourceCacheKey;
    SKUINavigationBarViewElement *_navigationBarElement;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_imageForImageViewElement:(id)arg0 ;
-(id)addButtonItemWithButtonViewElement:(id)arg0 ;
-(id)barButtonItemForElementIdentifier:(id)arg0 ;
-(id)initWithNavigationBarViewElement:(id)arg0 ;
-(struct UIEdgeInsets )_imageInsetsForImageViewElement:(id)arg0 ;
-(void)_buttonAction:(id)arg0 ;
-(void)_cancelConfirmationAction:(id)arg0 ;
-(void)_itemOfferAction:(id)arg0 ;
-(void)_reloadButtonItem:(id)arg0 withButtonViewElement:(id)arg1 ;
-(void)_showConfirmationAction:(id)arg0 ;
-(void)_updateButtonItem:(id)arg0 withButtonViewElement:(id)arg1 ;
-(void)_updateItemOfferButton:(id)arg0 withButtonViewElement:(id)arg1 ;
-(void)artworkRequest:(id)arg0 didLoadImage:(id)arg1 ;
-(void)dealloc;
-(void)disconnectAllButtons;
-(void)reloadAfterDocumentUpdateWithNavigationItem:(id)arg0 ;


@end


#endif