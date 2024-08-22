// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXPEOPLEONBOARDINGVIEWCONTROLLER_H
#define PXPEOPLEONBOARDINGVIEWCONTROLLER_H

@class UIViewController, NSString;
@protocol PXPeopleStatusViewDelegate;


#import "PXPeopleSectionedDataSource.h"
#import "PXPeopleProgressManager.h"
#import "PXPeopleStatusViewController.h"

@interface PXPeopleOnboardingViewController : UIViewController <PXPeopleStatusViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger onboardStatus; // ivar: _onboardStatus
@property (retain, nonatomic) PXPeopleSectionedDataSource *peopleDataSource; // ivar: _peopleDataSource
@property (retain, nonatomic) PXPeopleProgressManager *progressManager; // ivar: _progressManager
@property (retain, nonatomic) PXPeopleStatusViewController *statusViewController; // ivar: _statusViewController
@property (readonly) Class superclass;


-(NSUInteger)routingOptionsForDestination:(id)arg0 ;
-(id)init;
-(id)initWithDataSource:(id)arg0 progressManager:(id)arg1 ;
-(id)peopleHomeController;
-(id)px_navigationDestination;
-(void)_progressChanged:(id)arg0 ;
-(void)_pushToPeopleHome:(id)arg0 ;
-(void)_transitionFromViewController:(id)arg0 toViewController:(id)arg1 ;
-(void)_updateStatusViewForStatus:(NSUInteger)arg0 progress:(CGFloat)arg1 ;
-(void)_updateWithStatus:(NSUInteger)arg0 progress:(CGFloat)arg1 ;
-(void)dealloc;
-(void)didReceiveMemoryWarning;
-(void)navigateToDestination:(id)arg0 options:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)statusViewControllerEnterButtonTapped:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif