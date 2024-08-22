// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKTEXTINPUTDEBUGRADARVIEWCONTROLLER_H
#define PKTEXTINPUTDEBUGRADARVIEWCONTROLLER_H

@class UIViewController, UISegmentedControl, UICollectionView, NSMutableIndexSet, NSMutableArray, UIBarButtonItem, NSString;
@protocol UICollectionViewDataSource, PKTextInputDebugRadarEntryCellDelegate, PKTextInputDebugRadarViewControllerDelegate;


#import "PKTextInputDebugSharpenerLog.h"

@interface PKTextInputDebugRadarViewController : UIViewController <UICollectionViewDataSource, PKTextInputDebugRadarEntryCellDelegate>



@property (retain, nonatomic) UISegmentedControl *_contextDetailControl; // ivar: __contextDetailControl
@property (retain, nonatomic) UICollectionView *_entriesCollectionView; // ivar: __entriesCollectionView
@property (retain, nonatomic) NSMutableIndexSet *_includedEntryIndexes; // ivar: __includedEntryIndexes
@property (retain, nonatomic) NSMutableArray *_intendedTexts; // ivar: __intendedTexts
@property (nonatomic, setter=_setKeyboardVerticalOverlap:) CGFloat _keyboardVerticalOverlap; // ivar: __keyboardVerticalOverlap
@property (retain, nonatomic) UIBarButtonItem *_submitButton; // ivar: __submitButton
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKTextInputDebugRadarViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PKTextInputDebugSharpenerLog *sharpenerLog; // ivar: _sharpenerLog
@property (readonly) Class superclass;


-(BOOL)_canShowWhileLocked;
-(NSInteger)_selectedContentLevel;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(id)_accumulatedLogEntryTextsForRadar;
-(id)_buildString;
-(id)_deviceString;
-(id)_generateLaunchURLWithLogFilename:(id)arg0 ;
-(id)_logEntryTextForRadarTitle;
-(id)_loggedMainLocaleDescription;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)initWithSharpenerLog:(id)arg0 ;
-(void)_configureCell:(id)arg0 atIndexPath:(id)arg1 ;
-(void)_dismiss;
-(void)_handleCancelButton:(id)arg0 ;
-(void)_handleDetailControlChanged:(id)arg0 ;
-(void)_handleKeyboardWillHide:(id)arg0 ;
-(void)_handleKeyboardWillShow:(id)arg0 ;
-(void)_handleSubmitRadarButton:(id)arg0 ;
-(void)_launchTTRAndDismiss;
-(void)_loadIntendedTexts;
-(void)_setupViews;
-(void)_updateScrollView;
-(void)_updateSubmitButton;
-(void)entryCellIncludedEntryDidChange:(id)arg0 ;
-(void)entryCellIntendedTextDidChange:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif