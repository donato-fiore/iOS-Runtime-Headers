// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIPRODUCTPAGEDETAILSVIEWCONTROLLER_H
#define SKUIPRODUCTPAGEDETAILSVIEWCONTROLLER_H

@class UIViewController, NSMutableArray, NSString, NSOperationQueue, UIScrollView;
@protocol SKUIScreenshotsDelegate, SKUIItemStateCenterObserver, SKUITableViewSectionDelegate, SKUIProductPageChildViewController, SKUIProductPageChildViewControllerDelegate;


#import "SKUIProductPageTableHeaderOnlySection.h"
#import "SKUIProductPageTableTextBoxSection.h"
#import "SKUIResourceLoader.h"
#import "SKUIProductPageTableViewController.h"
#import "SKUILayoutCache.h"
#import "SKUIClientContext.h"
#import "SKUIProductPageHeaderViewController.h"
#import "SKUIProductPage.h"

@interface SKUIProductPageDetailsViewController : UIViewController <SKUIScreenshotsDelegate, SKUIItemStateCenterObserver, SKUITableViewSectionDelegate, SKUIProductPageChildViewController>

 {
    SKUIProductPageTableHeaderOnlySection *_copyrightSection;
    SKUIProductPageTableTextBoxSection *_descriptionSection;
    SKUIResourceLoader *_resourceLoader;
    SKUIProductPageTableHeaderOnlySection *_screenshotsSection;
    NSMutableArray *_sections;
    SKUIProductPageTableTextBoxSection *_storeNotesSection;
    SKUIProductPageTableViewController *_tableViewController;
    SKUILayoutCache *_textLayoutCache;
    SKUIProductPageTableTextBoxSection *_whatsNewSection;
}


@property (nonatomic) BOOL askPermission; // ivar: _askPermission
@property (retain, nonatomic) SKUIClientContext *clientContext; // ivar: _clientContext
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SKUIProductPageChildViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SKUIProductPageHeaderViewController *headerViewController;
@property (retain, nonatomic) NSOperationQueue *operationQueue; // ivar: _operationQueue
@property (readonly, nonatomic) SKUIProductPage *productPage; // ivar: _productPage
@property (readonly, nonatomic) UIScrollView *scrollView;
@property (readonly) Class superclass;


+(CGFloat)defaultPageWidthForUserInterfaceIdiom:(NSInteger)arg0 ;
-(id)_bundledAppsSection;
-(id)_copyrightSection;
-(id)_featuresSection;
-(id)_infoSection;
-(id)_parentBundlesSection;
-(id)_resourceLoader;
-(id)_screenshotsSection;
-(id)_storeNotesSection;
-(id)_tableViewController;
-(id)_textLayoutRequestWithText:(id)arg0 widthOffset:(CGFloat)arg1 ;
-(id)_whatsNewSection;
-(id)initWithProductPage:(id)arg0 ;
-(id)tableViewForTableViewSection:(id)arg0 ;
-(void)_addTapRecognizerForView:(id)arg0 action:(SEL)arg1 ;
-(void)_configureSwooshSection:(id)arg0 ;
-(void)_expandSection:(id)arg0 ;
-(void)dealloc;
-(void)itemStateCenterRestrictionsChanged:(id)arg0 ;
-(void)loadView;
-(void)screenshotsWillBeginDragging:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;


@end


#endif