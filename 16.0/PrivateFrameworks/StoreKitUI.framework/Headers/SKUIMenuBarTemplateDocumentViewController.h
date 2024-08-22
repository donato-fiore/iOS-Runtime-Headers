// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIMENUBARTEMPLATEDOCUMENTVIEWCONTROLLER_H
#define SKUIMENUBARTEMPLATEDOCUMENTVIEWCONTROLLER_H

@class NSMutableDictionary, SKUIViewElement<SKUIMenuBarViewElement>, NSString, UIScrollView, UIView;
@protocol SKUIHorizontalScrollingContainerViewControllerDelegate, SKUIMenuBarViewElementConfigurationDelegate, SKUIScrollingSegmentedControllerDelegate, SKUIScrollingTabAppearanceStatusObserver, SKUIScrollingTabNestedPagedScrolling, SKUINavigationBarControllerProviding, SKUIDocumentViewController;


#import "SKUIViewController.h"
#import "SKUIMenuBarTemplateDocumentViewControllerEmbeddedPaletteHost.h"
#import "SKUIDynamicPageSectionIndexMapper.h"
#import "SKUIHorizontalScrollingContainerViewController.h"
#import "SKUILoadingDocumentViewController.h"
#import "SKUIMenuBarSectionsViewController.h"
#import "SKUIMenuBarViewElementConfiguration.h"
#import "SKUIMenuItemViewElement.h"
#import "SKUIScrollingSegmentedController.h"
#import "SKUIMenuBarTemplateElement.h"

@interface SKUIMenuBarTemplateDocumentViewController : SKUIViewController <SKUIHorizontalScrollingContainerViewControllerDelegate, SKUIMenuBarViewElementConfigurationDelegate, SKUIScrollingSegmentedControllerDelegate, SKUIScrollingTabAppearanceStatusObserver, SKUIScrollingTabNestedPagedScrolling, SKUINavigationBarControllerProviding, SKUIDocumentViewController>

 {
    SKUIMenuBarTemplateDocumentViewControllerEmbeddedPaletteHost *_embeddedPaletteHost;
    SKUIDynamicPageSectionIndexMapper *_dynamicPageSectionIndexMapper;
    NSMutableDictionary *_entityUniqueIdentifierToEntityIndex;
    SKUIHorizontalScrollingContainerViewController *_horizontalScrollingContainerViewController;
    SKUILoadingDocumentViewController *_loadingDocumentViewController;
    SKUIMenuBarSectionsViewController *_menuBarSectionsViewController;
    NSInteger _menuBarStyle;
    SKUIViewElement<SKUIMenuBarViewElement> *_menuBarViewElement;
    SKUIMenuBarViewElementConfiguration *_menuBarViewElementConfiguration;
    SKUIMenuItemViewElement *_pendingSelectedMenuItemViewElement;
    SKUIScrollingSegmentedController *_scrollingSegmentedController;
    ? _scrollingTabAppearanceStatus;
    SKUIMenuBarTemplateElement *_templateElement;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIScrollView *scrollingTabNestedPagingScrollView;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIView *titleView;
@property (readonly, nonatomic) CGFloat titleViewHeight;


-(BOOL)_isFirstViewControllerOnNavigationStack;
-(NSUInteger)_menuItemIndexForEntityIndex:(NSUInteger)arg0 entityValueProvider:(*id)arg1 ;
-(id)_childViewControllersForMenuItems;
-(id)_colorScheme;
-(id)_contentViewController;
-(id)_dynamicPageSectionIndexMapper;
-(id)_newChildViewControllerForEntityAtIndex:(NSUInteger)arg0 ;
-(id)_zoomingShelfPageSplitsDescription;
-(id)contentScrollView;
-(id)initWithTemplateElement:(id)arg0 ;
-(id)navigationBarControllerWithViewElement:(id)arg0 ;
-(id)navigationPaletteView;
-(id)scrollingTabViewControllerInNestedPagingScrollViewAtPageIndex:(NSUInteger)arg0 ;
-(void)_addContentViewController:(id)arg0 ;
-(void)_recordEntityUniqueIdentifier:(id)arg0 forEntityIndex:(NSUInteger)arg1 ;
-(void)_reloadContentViewController;
-(void)_removeContentViewController:(id)arg0 ;
-(void)_replaceViewControllerAtIndex:(NSUInteger)arg0 withViewController:(id)arg1 ;
-(void)_willDisplayViewControllerAtIndex:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)documentDidUpdate:(id)arg0 ;
-(void)documentMediaQueriesDidUpdate:(id)arg0 ;
-(void)horizontalScrollingContainerViewController:(id)arg0 willDisplayViewControllerAtIndex:(NSUInteger)arg1 ;
-(void)menuBarViewElementConfiguration:(id)arg0 didReplaceDocumentForEntityUniqueIdentifier:(id)arg1 ;
-(void)menuBarViewElementConfiguration:(id)arg0 didReplaceDocumentForMenuItemAtIndex:(NSUInteger)arg1 ;
-(void)menuBarViewElementConfiguration:(id)arg0 selectMenuItemViewElement:(id)arg1 animated:(BOOL)arg2 ;
-(void)scrollingSegmentedController:(id)arg0 willDisplayViewControllerAtIndex:(NSUInteger)arg1 ;
-(void)scrollingTabAppearanceStatusWasUpdated:(struct ? )arg0 ;
-(void)setClientContext:(id)arg0 ;
-(void)setOperationQueue:(id)arg0 ;
-(void)setPreferredContentSize:(struct CGSize )arg0 ;
-(void)viewDidLoad;


@end


#endif