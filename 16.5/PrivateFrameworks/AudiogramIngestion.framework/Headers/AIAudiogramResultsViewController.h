// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AIAUDIOGRAMRESULTSVIEWCONTROLLER_H
#define AIAUDIOGRAMRESULTSVIEWCONTROLLER_H

@class OBWelcomeController, NSIndexPath, HKAudiogramSample, NSString, NSArray, HKHealthStore, NSDate, UITableView, NSMutableDictionary, NSLayoutConstraint, HKUnitPreferenceController;
@protocol UITableViewDataSource, UITableViewDelegate, _UIScrollViewScrollObserver, AIAudiogramResultDateCellDelegate, AIAudiogramResultTimeCellDelegate, AIAudiogramResultEarCellDelegate, AIAudiogramConfirmResultsViewControllerDelegate;


#import "AIAudiogramKeyboardToolbar.h"

@interface AIAudiogramResultsViewController : OBWelcomeController <UITableViewDataSource, UITableViewDelegate, _UIScrollViewScrollObserver, AIAudiogramResultDateCellDelegate, AIAudiogramResultTimeCellDelegate, AIAudiogramResultEarCellDelegate>



@property (retain, nonatomic) NSIndexPath *activeIndexPath; // ivar: _activeIndexPath
@property (nonatomic) NSUInteger analyticsClient; // ivar: _analyticsClient
@property (nonatomic) BOOL analyticsDidCompleteIngestion; // ivar: _analyticsDidCompleteIngestion
@property (nonatomic) BOOL analyticsDidMakeAdjustments; // ivar: _analyticsDidMakeAdjustments
@property (nonatomic) NSUInteger analyticsImportSource; // ivar: _analyticsImportSource
@property (retain, nonatomic) HKAudiogramSample *audiogram; // ivar: _audiogram
@property (weak, nonatomic) NSObject<AIAudiogramConfirmResultsViewControllerDelegate> *audiogramConfirmationDelegate; // ivar: _audiogramConfirmationDelegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *frequencies; // ivar: _frequencies
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore
@property (retain, nonatomic) NSDate *initialDate; // ivar: _initialDate
@property (retain, nonatomic) AIAudiogramKeyboardToolbar *keyboardToolbar; // ivar: _keyboardToolbar
@property (readonly) Class superclass;
@property (retain, nonatomic) UITableView *tableView; // ivar: _tableView
@property (retain, nonatomic) NSMutableDictionary *tableViewCells; // ivar: _tableViewCells
@property (retain, nonatomic) NSLayoutConstraint *tableViewHeightConstraint; // ivar: _tableViewHeightConstraint
@property (retain, nonatomic) HKUnitPreferenceController *unitPreferenceController; // ivar: _unitPreferenceController


-(BOOL)_scrollToIndexPathIfNecessary:(id)arg0 animated:(BOOL)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithDelegate:(id)arg0 audiogram:(id)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)_confirmTapped:(id)arg0 ;
-(void)_observeScrollViewDidScroll:(id)arg0 ;
-(void)_reloadAudiogramWithSensitivityPoints:(id)arg0 date:(id)arg1 ;
-(void)_setCellActive:(BOOL)arg0 indexPath:(id)arg1 scroll:(BOOL)arg2 ;
-(void)_updateTableViewHeight;
-(void)dateCellDidPickDate:(id)arg0 ;
-(void)dealloc;
-(void)earCellDidBeginEditingForFrequency:(id)arg0 forEar:(NSInteger)arg1 ;
-(void)earCellDidEndEditingForFrequency:(id)arg0 forEar:(NSInteger)arg1 ;
-(void)earCellDidUpdateHearingLevel:(id)arg0 forFrequency:(id)arg1 forEar:(NSInteger)arg2 ;
-(void)keyboardDoneTapped;
-(void)keyboardNegationTapped;
-(void)keyboardNextTapped;
-(void)keyboardPreviousTapped;
-(void)scrollViewDidEndScrollingAnimation:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)timeCellDidPickDate:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif