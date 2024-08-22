// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUSPLITVIEWCONTROLLER_H
#define SUSPLITVIEWCONTROLLER_H

@class NSURL, UIViewController, NSString;


#import "SUViewController.h"
#import "SUGradient.h"
#import "SUPlaceholderViewController.h"
#import "SUSplitView.h"
#import "SUStructuredPage.h"
#import "SUShadow.h"

@interface SUSplitViewController : SUViewController {
    SUGradient *_placeholderGradient;
    SUPlaceholderViewController *_placeholderViewController;
    SUSplitView *_splitView;
    SUStructuredPage *_structuredPage;
}


@property (retain, nonatomic) NSURL *displayedURL; // ivar: _displayedURL
@property (retain, nonatomic) UIViewController *firstViewController; // ivar: _firstViewController
@property (nonatomic) NSInteger layoutType;
@property (retain, nonatomic) NSString *mainTitle; // ivar: _mainTitle
@property (nonatomic) CGFloat minimumPaneSize;
@property (retain, nonatomic) UIViewController *secondViewController; // ivar: _secondViewController
@property (nonatomic) CGFloat splitPosition;
@property (copy, nonatomic) SUShadow *splitShadow; // ivar: _splitShadow
@property (nonatomic) BOOL usesSharedPlaceholder; // ivar: _usesSharedPlaceholder
@property (nonatomic, getter=isVertical) BOOL vertical;
@property (nonatomic) BOOL viewIsReady; // ivar: _viewIsReady


+(BOOL)isValidSplitPositionValue:(id)arg0 ;
+(BOOL)isValidSplitTypeString:(id)arg0 ;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(BOOL)isSkLoaded;
-(BOOL)shouldExcludeFromNavigationHistory;
-(id)_newGradientWithValue:(id)arg0 ;
-(id)_newViewControllerFromDictionary:(id)arg0 ;
-(id)_splitView;
-(id)copyArchivableContext;
-(id)copyChildViewControllersForReason:(NSInteger)arg0 ;
-(id)copyScriptViewController;
-(id)init;
-(id)newRotationController;
-(id)splitTypeString;
-(id)storePageProtocol;
-(void)_loadingDidChangeNotification:(id)arg0 ;
-(void)_navigationItemDidChangeNotification:(id)arg0 ;
-(void)_reloadLoadingState;
-(void)_reloadTitle;
-(void)_reloadView;
-(void)_reloadViewController:(id)arg0 fromDictionary:(id)arg1 ;
-(void)_reloadWithStorePageDictionary:(id)arg0 ;
-(void)_setPlaceholderVisible:(BOOL)arg0 ;
-(void)_setStructuredPage:(id)arg0 ;
-(void)_setViewController:(*id)arg0 toValue:(id)arg1 ;
-(void)addChildViewController:(id)arg0 ;
-(void)dealloc;
-(void)loadView;
-(void)reloadWithStorePage:(id)arg0 forURL:(id)arg1 ;
-(void)removeChildViewController:(id)arg0 ;
-(void)restoreArchivableContext:(id)arg0 ;
-(void)setSkLoading:(BOOL)arg0 ;
-(void)setSplitTypeString:(id)arg0 ;
-(void)storePage:(id)arg0 finishedWithSuccess:(BOOL)arg1 ;


@end


#endif