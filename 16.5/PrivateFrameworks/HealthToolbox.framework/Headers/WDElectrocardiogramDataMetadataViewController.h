// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WDELECTROCARDIOGRAMDATAMETADATAVIEWCONTROLLER_H
#define WDELECTROCARDIOGRAMDATAMETADATAVIEWCONTROLLER_H

@class HKTableViewController, HRElectrocardiogramReportGenerator, HKElectrocardiogram, NSMutableArray;
@protocol HKDataMetadataDeletionSectionDelegate, HKElectrocardiogramMetadataViewDelegate, HKDataMetadataViewControllerDelegate;


#import "WDElectrocardiogramReportDataSource.h"

@interface WDElectrocardiogramDataMetadataViewController : HKTableViewController <HKDataMetadataDeletionSectionDelegate, HKElectrocardiogramMetadataViewDelegate>



@property (nonatomic) BOOL actionsEnabled; // ivar: _actionsEnabled
@property (readonly, nonatomic) NSInteger activeAlgorithmVersion; // ivar: _activeAlgorithmVersion
@property (weak, nonatomic) NSObject<HKDataMetadataViewControllerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL firstViewDidLayoutSubviews; // ivar: _firstViewDidLayoutSubviews
@property (nonatomic) NSInteger mode; // ivar: _mode
@property (retain, nonatomic) WDElectrocardiogramReportDataSource *reportDataSource; // ivar: _reportDataSource
@property (retain, nonatomic) HRElectrocardiogramReportGenerator *reportGenerator; // ivar: _reportGenerator
@property (retain, nonatomic) HKElectrocardiogram *sample; // ivar: _sample
@property (retain, nonatomic) NSMutableArray *sections; // ivar: _sections


-(BOOL)_addSectionIfNonNull:(id)arg0 ;
-(BOOL)electrocardiogramMetadataViewShouldShowShareRow:(id)arg0 ;
-(NSInteger)_fetchActiveAlgorithmVersionWithHealthStore:(id)arg0 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_electrocardiogramMetadataContainerView;
-(id)electrocardiogramMetadataView:(id)arg0 regulatedBodyTextForSample:(id)arg1 ;
-(id)featureVersionFromUpdateVersion:(id)arg0 ;
-(id)initWithSample:(id)arg0 delegate:(id)arg1 mode:(NSInteger)arg2 activeAlgorithmVersion:(id)arg3 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)_loadSections;
-(void)_localeOrDisplayTypeChange:(id)arg0 ;
-(void)_reloadElectrocardiogramMetadataTableHeaderView;
-(void)dealloc;
-(void)deleteSampleTriggeredBySection:(id)arg0 ;
-(void)deletionSectionDidSelectRow:(id)arg0 ;
-(void)electrocardiogramMetadataViewDidSelectShareRow:(id)arg0 ;
-(void)electrocardiogramMetadataViewDidTapDetailButton:(id)arg0 ;
-(void)presentPDFViewController;
-(void)shareButtonTapped:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif