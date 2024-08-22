// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUINAVIGATIONPALETTECONTROLLER_H
#define SKUINAVIGATIONPALETTECONTROLLER_H



#import "SKUINavigationBarSectionController.h"
#import "SKUINavigationBarContext.h"
#import "SKUINavigationPaletteView.h"
#import "SKUIPaletteViewElement.h"
#import "SKUIViewElementLayoutContext.h"

@interface SKUINavigationPaletteController : SKUINavigationBarSectionController {
    SKUINavigationBarContext *_navigationBarContext;
    SKUINavigationPaletteView *_paletteView;
    SKUIPaletteViewElement *_viewElement;
    SKUIViewElementLayoutContext *_viewLayoutContext;
}




-(id)initWithPaletteViewElement:(id)arg0 ;
-(id)view;
-(id)viewForElementIdentifier:(id)arg0 ;
-(void)artworkRequest:(id)arg0 didLoadImage:(id)arg1 ;
-(void)reloadSectionViews;
-(void)willAppearInNavigationBar;


@end


#endif