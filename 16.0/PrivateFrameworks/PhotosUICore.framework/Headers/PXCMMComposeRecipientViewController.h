// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXCMMCOMPOSERECIPIENTVIEWCONTROLLER_H
#define PXCMMCOMPOSERECIPIENTVIEWCONTROLLER_H

@class UIViewController, NSProgress, NSString, UIVisualEffectView, UILabel, UIButton;
@protocol PXChangeObserver, PXComposeRecipientTableViewControllerDelegate, PXDiagnosticsEnvironment, PXCMMActionControllerDelegate;


#import "PXCMMSession.h"
#import "PXCMMSpecManager.h"
#import "PXComposeRecipientTableViewController.h"
#import "PXComposeRecipientTableViewModel.h"
#import "PXUpdater.h"

@interface PXCMMComposeRecipientViewController : UIViewController <PXChangeObserver, PXComposeRecipientTableViewControllerDelegate, PXDiagnosticsEnvironment>



@property (weak, nonatomic) NSObject<PXCMMActionControllerDelegate> *actionDelegate; // ivar: _actionDelegate
@property (retain, nonatomic) NSProgress *actionProgress; // ivar: _actionProgress
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIVisualEffectView *footerVisualEffectView; // ivar: _footerVisualEffectView
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat maximumContentWidth; // ivar: _maximumContentWidth
@property (retain, nonatomic) UILabel *privacyMessageLabel; // ivar: _privacyMessageLabel
@property (retain, nonatomic) UIButton *sendButton; // ivar: _sendButton
@property (readonly, nonatomic) PXCMMSession *session; // ivar: _session
@property (readonly, nonatomic) PXCMMSpecManager *specManager; // ivar: _specManager
@property (readonly) Class superclass;
@property (retain, nonatomic) PXComposeRecipientTableViewController *tableViewController; // ivar: _tableViewController
@property (retain, nonatomic) PXComposeRecipientTableViewModel *tableViewModel; // ivar: _tableViewModel
@property (retain, nonatomic) UIButton *tapToRadarButton; // ivar: _tapToRadarButton
@property (readonly, nonatomic) PXUpdater *updater; // ivar: _updater


-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithSession:(id)arg0 ;
-(id)px_diagnosticsItemProvidersForPoint:(struct CGPoint )arg0 inCoordinateSpace:(id)arg1 ;
-(void)_handleActionButton:(id)arg0 ;
-(void)_setNeedsUpdate;
-(void)_tapToRadarTapped:(id)arg0 ;
-(void)_updateFooter;
-(void)_updateTableView;
-(void)_updateUserInteraction;
-(void)composeRecipientTableViewControllerDidChangeHeight:(id)arg0 ;
-(void)dealloc;
-(void)dismissPresentedViewControllerAnimated:(BOOL)arg0 forComposeRecipientTableViewController:(id)arg1 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)presentViewController:(id)arg0 animated:(BOOL)arg1 forComposeRecipientTableViewController:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif