// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKPLACECARDACTIONSVIEWCONTROLLER_H
#define MKPLACECARDACTIONSVIEWCONTROLLER_H

@class NSArray, NSString;
@protocol MKPlaceCardActionSectionViewDelegate, _MKStackViewDelegate, _MKInfoCardChildViewControllerAnalyticsDelegate, _MKPlaceViewControllerDelegate;


#import "MKPlaceSectionViewController.h"
#import "MKPlaceActionManager.h"

@interface MKPlaceCardActionsViewController : MKPlaceSectionViewController <MKPlaceCardActionSectionViewDelegate, _MKStackViewDelegate, _MKInfoCardChildViewControllerAnalyticsDelegate>



@property (copy, nonatomic) NSArray *actionItemArray; // ivar: _actionItemArray
@property (weak, nonatomic) MKPlaceActionManager *actionManager; // ivar: _actionManager
@property (nonatomic) BOOL allowRowSelection; // ivar: _allowRowSelection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL haveTwoColumns; // ivar: _haveTwoColumns
@property (weak, nonatomic) NSObject<_MKPlaceViewControllerDelegate> *placeViewControllerDelegate; // ivar: _placeViewControllerDelegate
@property (nonatomic) BOOL showTopButtonSeparator; // ivar: _showTopButtonSeparator
@property (nonatomic) BOOL showTopSeparator; // ivar: _showTopSeparator
@property (readonly) Class superclass;
@property (nonatomic) BOOL useMarginLayout; // ivar: _useMarginLayout
@property (nonatomic) BOOL useSmallFonts; // ivar: _useSmallFonts
@property (retain, nonatomic) NSArray *viewArray; // ivar: _viewArray


-(id)_makePlaceActionButton;
-(id)infoCardChildPossibleActions;
-(id)infoCardChildUnactionableUIElements;
-(id)init;
-(void)_setUpSectionViews;
-(void)placeCardActionSectionView:(id)arg0 buttonWithActionItemPressed:(id)arg1 ;
-(void)sectionView:(id)arg0 didSelectRow:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif