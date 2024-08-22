// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPSLISTTEMPLATEVIEWCONTROLLER_H
#define CPSLISTTEMPLATEVIEWCONTROLLER_H

@class NSUUID, NSString, CPListTemplate, CPUINowPlayingManager, NSTimer;
@protocol UITableViewDelegate, CPUINowPlayingObserving, CPListTemplateProviding;


#import "CPSBaseTemplateViewController.h"
#import "CPSSectionedDataSource.h"
#import "CPSEmptyView.h"
#import "CPSTableView.h"

@interface CPSListTemplateViewController : CPSBaseTemplateViewController <UITableViewDelegate, CPUINowPlayingObserving, CPListTemplateProviding>



@property (nonatomic) BOOL assistantCellAvailable; // ivar: _assistantCellAvailable
@property (copy, nonatomic) NSUUID *currentSpinningIdentifier; // ivar: _currentSpinningIdentifier
@property (retain, nonatomic) CPSSectionedDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CPSEmptyView *emptyView; // ivar: _emptyView
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSUUID *lastFocusedItem; // ivar: _lastFocusedItem
@property (readonly, nonatomic) CPListTemplate *listTemplate;
@property (copy, nonatomic) NSUUID *nextSpinningIdentifier; // ivar: _nextSpinningIdentifier
@property (retain, nonatomic) CPUINowPlayingManager *nowPlayingManager; // ivar: _nowPlayingManager
@property (retain, nonatomic) NSTimer *spinnerStartTimer; // ivar: _spinnerStartTimer
@property (nonatomic) NSUInteger spinnerState; // ivar: _spinnerState
@property (retain, nonatomic) NSTimer *spinnerTimeoutTimer; // ivar: _spinnerTimeoutTimer
@property (readonly) Class superclass;
@property (retain, nonatomic) CPSTableView *tableView; // ivar: _tableView


+(BOOL)clientAssistantCellConfiguration:(id)arg0 availableWithError:(*id)arg1 templateEnvironment:(id)arg2 ;
+(id)intentIdentifierFromConfigurationEnum:(NSInteger)arg0 ;
-(BOOL)_shouldRetainFocusOnWillAppear;
-(BOOL)_wantsNowPlayingButton;
-(BOOL)restoresFocusAfterTransition;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)_playingIndicatorStateForSnapshot:(id)arg0 ;
-(id)initWithListTemplate:(id)arg0 templateDelegate:(id)arg1 templateEnvironment:(id)arg2 ;
-(id)preferredFocusEnvironments;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(void)_activateSiriForAssistantItem;
-(void)_activateSiriForMessageItem:(id)arg0 ;
-(void)_addSpinnerToIdentifier:(id)arg0 ;
-(void)_cancelScheduledLoadingSpinner;
-(void)_cellSelectionCompleted:(id)arg0 ;
-(void)_scheduleLoadingSpinnerForIdentifier:(id)arg0 ;
-(void)_scrollViewAccessoryInsetsDidChange:(id)arg0 ;
-(void)_startSpinnerTimerFired:(id)arg0 identifier:(id)arg1 ;
-(void)_timeoutSpinnerFired:(id)arg0 identifier:(id)arg1 ;
-(void)_updateEmptyView;
-(void)_viewDidLoad;
-(void)didSelectMediaButton:(id)arg0 ;
-(void)nowPlayingManager:(id)arg0 didUpdateSnapshot:(id)arg1 ;
-(void)reloadItems:(id)arg0 ;
-(void)reloadTemplate:(id)arg0 ;
-(void)setButton:(id)arg0 enabled:(BOOL)arg1 ;
-(void)setButton:(id)arg0 hidden:(BOOL)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)updateAssistantCell;
-(void)updateAssistantCellConfiguration:(id)arg0 withCompletion:(id)arg1 ;
-(void)updateSectionHeaderImage:(id)arg0 forSectionIdentifier:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif