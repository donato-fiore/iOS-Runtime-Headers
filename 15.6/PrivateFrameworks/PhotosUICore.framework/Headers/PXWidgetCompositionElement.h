// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXWIDGETCOMPOSITIONELEMENT_H
#define PXWIDGETCOMPOSITIONELEMENT_H

@class NSHashTable, NSString;
@protocol PXWidgetBarDelegate, PXWidgetDelegate, PXWidgetCompositionElementDelegate, PXWidget;

#import <Foundation/Foundation.h>

#import "PXWidgetBar.h"
#import "PXTilingController.h"
#import "PXScrollViewController.h"
#import "PXWidgetCompositionSpec.h"

@interface PXWidgetCompositionElement : NSObject <PXWidgetBarDelegate, PXWidgetDelegate>

 {
    ? _delegateFlags;
    BOOL _isPerformingChanges;
}


@property (readonly, nonatomic) PXWidgetBar *_footer; // ivar: __footer
@property (readonly, nonatomic) PXWidgetBar *_header; // ivar: __header
@property (nonatomic) BOOL _isClassOfViewElement; // ivar: __isClassOfViewElement
@property (nonatomic, setter=_setNotifyingWidget:) BOOL _isNotifyingWidget; // ivar: __isNotifyingWidget
@property (readonly, nonatomic) NSHashTable *_observers; // ivar: __observers
@property (readonly, nonatomic) PXTilingController *animationOptionsOriginatingTilingController; // ivar: _animationOptionsOriginatingTilingController
@property (readonly, nonatomic) PXTilingController *contentTilingController;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXWidgetCompositionElementDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PXTilingController *footerTilingController;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PXTilingController *headerTilingController;
@property (readonly, weak, nonatomic) PXScrollViewController *scrollViewController; // ivar: _scrollViewController
@property (nonatomic) BOOL shouldLoadWidgetContent; // ivar: _shouldLoadWidgetContent
@property (retain, nonatomic) PXWidgetCompositionSpec *spec; // ivar: _spec
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<PXWidget> *widget; // ivar: _widget
@property (nonatomic) CGSize widgetContentSize; // ivar: _widgetContentSize


+(Class)footerBarClass;
+(Class)headerBarClass;
+(id)elementWithWidget:(id)arg0 scrollViewController:(id)arg1 ;
-(BOOL)_isViewElementAndCheckingInTile;
-(BOOL)widget:(id)arg0 requestViewControllerDismissalAnimated:(BOOL)arg1 ;
-(BOOL)widget:(id)arg0 transitionToViewController:(id)arg1 withTransitionType:(NSInteger)arg2 ;
-(NSInteger)widgetDefaultContentViewAnchoringTypeForDisclosureHeightChange:(id)arg0 ;
-(id)extendedTraitCollection;
-(id)init;
-(id)initWithWidget:(id)arg0 scrollViewController:(id)arg1 ;
-(id)widgetExtendedTraitCollection:(id)arg0 ;
-(id)widgetScrollViewControllerHostingWidget:(id)arg0 ;
-(id)widgetViewControllerHostingWidget:(id)arg0 ;
-(id)widgetViewHostingGestureRecognizers:(id)arg0 ;
-(void)_invalidateFooter;
-(void)_invalidateHeader;
-(void)_notifyWidgetUsingBlock:(id)arg0 ;
// -(void)_performChanges:(id)arg0 withAnimationOptions:(unk)arg1  ;
-(void)_performContentChangeWhenSafe:(id)arg0 ;
-(void)_updateFooter;
-(void)_updateHeader;
-(void)prepare;
-(void)registerObserver:(id)arg0 ;
-(void)saveAnchoring;
-(void)unregisterObserver:(id)arg0 ;
// -(void)widget:(id)arg0 animateChanges:(id)arg1 withAnimationOptions:(unk)arg2  ;
-(void)widgetBarDidSelectDisclosureAffordance:(id)arg0 ;
-(void)widgetBarDidSelectSubtitle:(id)arg0 ;
-(void)widgetHasLoadedContentDataDidChange:(id)arg0 ;
-(void)widgetInvalidateContentLayoutStyle:(id)arg0 ;
-(void)widgetInvalidateContentViewAnchoringType:(id)arg0 ;
-(void)widgetLocalizedCaptionDidChange:(id)arg0 ;
-(void)widgetLocalizedDisclosureTitleDidChange:(id)arg0 ;
-(void)widgetLocalizedSubtitleDidChange:(id)arg0 ;
-(void)widgetLocalizedTitleDidChange:(id)arg0 ;
-(void)widgetPreferredContentHeightForWidthDidChange:(id)arg0 ;
-(void)widgetRequestFocus:(id)arg0 ;


@end


#endif