// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBHICONSHARESHEETMANAGER_H
#define SBHICONSHARESHEETMANAGER_H

@class NSString, UIView, UIViewController;
@protocol SKStoreProductActivityViewControllerDelegate;

#import <Foundation/Foundation.h>

#import "SBHIconManager.h"
#import "SBIconView.h"

@interface SBHIconShareSheetManager : NSObject <SKStoreProductActivityViewControllerDelegate>



@property (readonly, nonatomic) BOOL areAnyAppIconShareSheetsShowing;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIView *fakeSourceView; // ivar: _fakeSourceView
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) SBHIconManager *iconManager; // ivar: _iconManager
@property (weak, nonatomic) SBIconView *iconView; // ivar: _iconView
@property (retain, nonatomic) UIViewController *shareSheetViewController; // ivar: _shareSheetViewController
@property (readonly) Class superclass;


-(id)_shareSheetPresentationViewControllerForIconView:(id)arg0 ;
-(id)initWithIconManager:(id)arg0 ;
-(struct CGRect )_iconViewFrameInScreenCoordinateSpace:(id)arg0 ;
-(void)_appIconForceTouchControllerDidDismissNotification:(id)arg0 ;
-(void)_createFakeSourceViewForIconView:(id)arg0 ;
-(void)_presentShareSheet:(id)arg0 forIconView:(id)arg1 ;
-(void)_queueShareSheetPresentation:(id)arg0 forIconView:(id)arg1 ;
-(void)dealloc;
-(void)dismissIconShareSheetsIfNecessaryAndCleanUp;
-(void)presentShareSheetForIconView:(id)arg0 withActivityItems:(id)arg1 ;
-(void)presentShareSheetForIconView:(id)arg0 withAppStoreItemIdentifier:(id)arg1 ;
-(void)productActivityViewController:(id)arg0 didFinishWithResult:(NSUInteger)arg1 ;


@end


#endif