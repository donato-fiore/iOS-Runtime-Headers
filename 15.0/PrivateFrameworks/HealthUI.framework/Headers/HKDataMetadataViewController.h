// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKDATAMETADATAVIEWCONTROLLER_H
#define HKDATAMETADATAVIEWCONTROLLER_H

@class HKSample, NSMutableArray, NSArray;
@protocol HKDataMetadataSubsampleDelegate, HKDataMetadataReportAccessDelegate, HKDataMetadataViewControllerDelegate, HKDataMetadataDeviceSectionRegulatedFeatureInfoProvider;


#import "HKTableViewController.h"
#import "HKLocationFetcher.h"
#import "HKLocationReadings.h"
#import "HKDataMetadataWorkoutRouteSection.h"

@interface HKDataMetadataViewController : HKTableViewController <HKDataMetadataSubsampleDelegate, HKDataMetadataReportAccessDelegate>



@property (readonly, nonatomic) NSObject<HKDataMetadataViewControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) HKLocationFetcher *locationFetcher; // ivar: _locationFetcher
@property (retain, nonatomic) HKLocationReadings *locationReadings; // ivar: _locationReadings
@property (retain, nonatomic) NSObject<HKDataMetadataDeviceSectionRegulatedFeatureInfoProvider> *regulatedFeatureInfoProvider; // ivar: _regulatedFeatureInfoProvider
@property (retain, nonatomic) HKSample *sample; // ivar: _sample
@property (retain, nonatomic) NSMutableArray *sections; // ivar: _sections
@property (readonly, nonatomic) NSArray *subSampleTypes; // ivar: _subSampleTypes
@property (retain, nonatomic) HKDataMetadataWorkoutRouteSection *workoutRouteSection; // ivar: _workoutRouteSection


-(BOOL)_addSectionIfNonNull:(id)arg0 ;
-(CGFloat)tableView:(id)arg0 estimatedHeightForRowAtIndexPath:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)accessViewControllerForSample:(id)arg0 healthStore:(id)arg1 ;
-(id)defaultPredicateForSampleType:(id)arg0 ;
-(id)initWithSample:(id)arg0 usingInsetStyling:(BOOL)arg1 profileName:(id)arg2 delegate:(id)arg3 ;
-(id)initWithSample:(id)arg0 usingInsetStyling:(BOOL)arg1 profileName:(id)arg2 regulatedFeatureInfoProvider:(id)arg3 delegate:(id)arg4 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(id)viewControllerForSampleType:(id)arg0 subSamplePredicate:(id)arg1 title:(id)arg2 ;
-(void)_addWorkoutRouteSection;
-(void)_exportButtonAction:(id)arg0 ;
-(void)_fetchRoutesWithSamplesHandler:(id)arg0 ;
-(void)_fetchSubSampleTypes;
-(void)_fetchWorkoutRouteLocations;
-(void)_loadSections;
-(void)_localeOrDisplayTypeChange:(id)arg0 ;
-(void)_updateSubSampleTypes:(id)arg0 error:(id)arg1 ;
-(void)dealloc;
-(void)finishedAggregateQuery;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif