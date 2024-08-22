// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DBSDISPLAYZOOMSELECTIONLISTCONTROLLER_H
#define DBSDISPLAYZOOMSELECTIONLISTCONTROLLER_H

@class PSListController, NSString;
@protocol DBSDisplayZoomTableViewCellDelegate, DBSDisplayZoomSelectionControllerDelegate;



@interface DBSDisplayZoomSelectionListController : PSListController <DBSDisplayZoomTableViewCellDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (retain) NSObject<DBSDisplayZoomSelectionControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger selectedDisplayZoomOption; // ivar: _selectedDisplayZoomOption
@property (readonly) Class superclass;


-(NSUInteger)displayZoomTableViewCellCurrentlySelectedDisplayZoomOption:(id)arg0 ;
-(id)confirmationDictForCurrentSelectedScale;
-(id)specifiers;
-(id)supportedDisplayZoomOptions;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(struct CGSize )preferredContentSize;
-(void)_updateNavigationButtonStateWithNewOption:(NSUInteger)arg0 ;
-(void)_userDidConfirmDisplayZoomModeWithSpecifier:(id)arg0 ;
-(void)displayZoomTableViewCell:(id)arg0 userDidTapOnDisplayZoomOption:(NSUInteger)arg1 ;
-(void)tableView:(id)arg0 didEndDisplayingCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)updateNavigationButtonStateWithCurrentState;
-(void)userDidTapCancel:(id)arg0 ;
-(void)userDidTapDone:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif