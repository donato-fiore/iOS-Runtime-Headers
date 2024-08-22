// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUINAVIGATIONBARSECTIONCONTROLLER_H
#define SKUINAVIGATIONBARSECTIONCONTROLLER_H

@class NSString, UIView;
@protocol SKUIArtworkRequestDelegate;

#import <Foundation/Foundation.h>

#import "SKUIViewElementLayoutContext.h"
#import "SKUINavigationBarContext.h"

@interface SKUINavigationBarSectionController : NSObject <SKUIArtworkRequestDelegate>

 {
    SKUIViewElementLayoutContext *_viewLayoutContext;
}


@property (retain, nonatomic) SKUINavigationBarContext *context; // ivar: _navigationBarContext
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIView *view;
@property (readonly, nonatomic) SKUIViewElementLayoutContext *viewLayoutContext;


-(id)barButtonItemForElementIdentifier:(id)arg0 ;
-(id)viewForElementIdentifier:(id)arg0 ;
-(void)artworkRequest:(id)arg0 didLoadImage:(id)arg1 ;
-(void)dealloc;
-(void)reloadAfterDocumentUpdateWithNavigationItem:(id)arg0 ;
-(void)reloadSectionViews;
-(void)willAppearInNavigationBar;


@end


#endif