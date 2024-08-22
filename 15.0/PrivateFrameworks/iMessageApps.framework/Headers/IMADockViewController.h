// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMADOCKVIEWCONTROLLER_H
#define IMADOCKVIEWCONTROLLER_H

@class UIViewController, CKBrowserSwitcherFooterView, CKBrowserSwitcherFooterViewDataSource, NSString;
@protocol CKBrowserSwitcherFooterViewDelegate, IMADockViewControllerDelegate;


#import "IMAAppPresenter.h"

@interface IMADockViewController : UIViewController <CKBrowserSwitcherFooterViewDelegate>

 {
    CKBrowserSwitcherFooterView *_appStrip;
    CKBrowserSwitcherFooterViewDataSource *_appStripDataSource;
    IMAAppPresenter *_appPresenter;
}


@property (nonatomic) BOOL alwaysPresentAppsExpanded;
@property (readonly, nonatomic) UIViewController *currentAppViewController;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<IMADockViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hidesCompactAppForStickerDrag;
@property (readonly, nonatomic) CGFloat minimizedDockHeight;
@property (nonatomic) BOOL showIconBorders; // ivar: _showIconBorders
@property (readonly) Class superclass;


-(id)appStrip;
-(id)imageViewForSticker:(id)arg0 ;
-(id)init;
-(void)cleanupRunningApps;
-(void)hideAppViewControllerAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)switcherView:(id)arg0 didMagnify:(BOOL)arg1 ;
-(void)switcherView:(id)arg0 didSelectPluginAtIndex:(id)arg1 ;
-(void)updateAppStripFrame;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif