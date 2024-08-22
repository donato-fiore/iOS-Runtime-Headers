// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HRELECTROCARDIOGRAMEDUCATIONSECTION_H
#define HRELECTROCARDIOGRAMEDUCATIONSECTION_H

@class HKDataMetadataSection, NSNumber, NSString, HKHealthStore, NSMutableDictionary;
@protocol HKOnboardingPageViewControllerDelegate;



@interface HRElectrocardiogramEducationSection : HKDataMetadataSection <HKOnboardingPageViewControllerDelegate>



@property (retain, nonatomic) NSNumber *activeAlgorithmVersion; // ivar: _activeAlgorithmVersion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL firstTimeOnboarding; // ivar: _firstTimeOnboarding
@property (readonly, nonatomic) BOOL forSinglePlayer; // ivar: _forSinglePlayer
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HKHealthStore *store; // ivar: _store
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMutableDictionary *userInfo; // ivar: _userInfo


-(BOOL)_hasOnboardedBefore;
-(NSUInteger)numberOfRowsInSection;
-(id)_cellTitleForEducationRow:(NSUInteger)arg0 ;
-(id)_viewControllerForEducationRow:(NSUInteger)arg0 ;
-(id)cellForIndex:(NSUInteger)arg0 tableView:(id)arg1 ;
-(id)dateCache;
-(id)fetchActiveECGAlgorithmVersion;
-(id)healthStore;
-(id)initWithHealthStore:(id)arg0 forSinglePlayer:(BOOL)arg1 activeAlgorithmVersion:(id)arg2 ;
-(id)sectionTitle;
-(void)selectCellForIndex:(NSUInteger)arg0 navigationController:(id)arg1 animated:(BOOL)arg2 ;
-(void)stepForward;
-(void)willDisplayCell:(id)arg0 forIndex:(NSUInteger)arg1 tableView:(id)arg2 ;


@end


#endif