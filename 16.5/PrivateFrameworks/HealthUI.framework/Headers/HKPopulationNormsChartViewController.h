// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKPOPULATIONNORMSCHARTVIEWCONTROLLER_H
#define HKPOPULATIONNORMSCHARTVIEWCONTROLLER_H

@class UIViewController, UILabel, NSString, UISegmentedControl, UIView;
@protocol UICollectionViewDataSource, UICollectionViewDelegate, HKPopulationNormsViewModelDataSource;


#import "HKPopulationNormsClassificationCollectionView.h"
#import "HKPopulationNormsDescriptionView.h"
#import "HKPopulationNormsGraphView.h"

@interface HKPopulationNormsChartViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate>



@property (retain, nonatomic) UILabel *attributionLabel; // ivar: _attributionLabel
@property (copy, nonatomic) NSString *baseIdentifier; // ivar: _baseIdentifier
@property (retain, nonatomic) UISegmentedControl *biologicalSexSegmentedControl; // ivar: _biologicalSexSegmentedControl
@property (retain, nonatomic) UILabel *chartTitleLabel; // ivar: _chartTitleLabel
@property (retain, nonatomic) HKPopulationNormsClassificationCollectionView *classificationCollectionView; // ivar: _classificationCollectionView
@property (retain, nonatomic) HKPopulationNormsDescriptionView *classificationDescriptionView; // ivar: _classificationDescriptionView
@property (retain, nonatomic) UILabel *classificationLevelsTitleLabel; // ivar: _classificationLevelsTitleLabel
@property (readonly, nonatomic) UIView *contentView; // ivar: _contentView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HKPopulationNormsGraphView *populationNormsGraphView; // ivar: _populationNormsGraphView
@property (readonly, nonatomic) BOOL shouldEmbedInScrollView; // ivar: _shouldEmbedInScrollView
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<HKPopulationNormsViewModelDataSource> *viewModel; // ivar: _viewModel


-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(id)_viewModelForDisplayType:(id)arg0 healthStore:(id)arg1 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)initWithDisplayType:(id)arg0 healthStore:(id)arg1 ;
-(id)initWithDisplayType:(id)arg0 healthStore:(id)arg1 shouldEmbedInScrollView:(BOOL)arg2 ;
-(void)_deselectClassificationCellAtIndexPath:(id)arg0 ;
-(void)_refreshViewModelIfNecessary;
-(void)_selectClassificationCellAtIndexPath:(id)arg0 ;
-(void)_setupFonts;
-(void)collectionView:(id)arg0 didHighlightItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 didUnhighlightItemAtIndexPath:(id)arg1 ;
-(void)loadView;
-(void)segmentedControlDidChange:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif