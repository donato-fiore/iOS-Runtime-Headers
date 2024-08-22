// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKTEXTINPUTDEBUGVIEWCONTROLLER_H
#define PKTEXTINPUTDEBUGVIEWCONTROLLER_H

@class UIViewController, NSTimer, UIView, UITableView, NSArray, UIToolbar, NSString;
@protocol UITableViewDataSource, UITableViewDelegate, PKTextInputDebugViewTableCellDelegate, PKTextInputDebugStateIntrospectorDelegate, PKTextInputDebugViewControllerDelegate;


#import "PKTextInputDebugTargetsView.h"
#import "PKTextInputDebugLogController.h"
#import "PKTextInputElementsController.h"
#import "PKTextInputDebugStateIntrospector.h"

@interface PKTextInputDebugViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, PKTextInputDebugViewTableCellDelegate, PKTextInputDebugStateIntrospectorDelegate>



@property (retain, nonatomic) NSTimer *_autoreloadTimer; // ivar: __autoreloadTimer
@property (nonatomic) BOOL _needsReloadData; // ivar: __needsReloadData
@property (nonatomic) BOOL _needsReloadTargetsVisualization; // ivar: __needsReloadTargetsVisualization
@property (retain, nonatomic) UIView *_statusContainerView; // ivar: __statusContainerView
@property (retain, nonatomic) UITableView *_statusTableView; // ivar: __statusTableView
@property (retain, nonatomic) NSArray *_statusViewPositionConstraints; // ivar: __statusViewPositionConstraints
@property (retain, nonatomic) UIToolbar *_statusViewToolbar; // ivar: __statusViewToolbar
@property (retain, nonatomic) PKTextInputDebugTargetsView *_targetsContainerView; // ivar: __targetsContainerView
@property (nonatomic, setter=_setVisualizeTargets:) BOOL _visualizeTargets; // ivar: __visualizeTargets
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) PKTextInputDebugLogController *debugLogController; // ivar: _debugLogController
@property (weak, nonatomic) NSObject<PKTextInputDebugViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PKTextInputElementsController *elementsController; // ivar: _elementsController
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PKTextInputDebugStateIntrospector *introspectorDataSource; // ivar: _introspectorDataSource
@property (nonatomic) NSUInteger statusViewAnchorCorner; // ivar: _statusViewAnchorCorner
@property (readonly) Class superclass;


-(BOOL)_canShowWhileLocked;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_configureCell:(id)arg0 forItemAtIndex:(NSInteger)arg1 ;
-(void)_handleAutoreloadTimerFired;
-(void)_handleCloseButton:(id)arg0 ;
-(void)_handleLogButton:(id)arg0 ;
-(void)_handleRadarButton:(id)arg0 ;
-(void)_handleTargetsButton:(id)arg0 ;
-(void)_reloadDebugStateData;
-(void)_reloadTargetsVisualization;
-(void)_setupStatusView;
-(void)_updateStatusView;
-(void)_updateTargetsVisualizationView;
-(void)debugStateIntrospectorContentDidChange:(id)arg0 ;
-(void)debugViewTableCellDidTapDetailsButton:(id)arg0 ;
-(void)loadView;
-(void)setNeedsReloadDebugStateData;
-(void)setNeedsReloadTargetsVisualization;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif