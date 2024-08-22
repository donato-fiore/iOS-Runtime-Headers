// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKWORKOUTROUTEVIEWCONTROLLER_H
#define HKWORKOUTROUTEVIEWCONTROLLER_H

@class UIViewController, HKWorkout, NSString, NSArray, HKHealthStore;
@protocol UIActivityItemSource;


#import "HKLocationReadings.h"
#import "HKRouteView.h"

@interface HKWorkoutRouteViewController : UIViewController <UIActivityItemSource>

 {
    HKLocationReadings *_locationReadings;
    HKWorkout *_workout;
    BOOL _showUnsmoothedRoute;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *excludedActivityTypes; // ivar: _excludedActivityTypes
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore
@property (retain, nonatomic) HKRouteView *routeView; // ivar: _routeView
@property (retain, nonatomic) NSString *shareText; // ivar: _shareText
@property (nonatomic) BOOL sharingEnabled; // ivar: _sharingEnabled
@property (readonly) Class superclass;
@property (retain, nonatomic) HKLocationReadings *unsmoothedLocationReadings; // ivar: _unsmoothedLocationReadings


-(NSUInteger)supportedInterfaceOrientations;
-(id)activityViewController:(id)arg0 itemForActivityType:(id)arg1 ;
-(id)activityViewControllerLinkPresentationMetadata:(id)arg0 ;
-(id)activityViewControllerPlaceholderItem:(id)arg0 ;
-(id)initWithLocationReadings:(id)arg0 title:(id)arg1 sharingEnabled:(BOOL)arg2 shareText:(id)arg3 excludedActivityTypes:(id)arg4 ;
-(void)_internalDebuggingOnly_fetchUnsmoothedRoutesFromDatabase;
-(void)_internalDebuggingOnly_toggleUnsmoothedLocations:(id)arg0 ;
-(void)_shareButtonPressed:(id)arg0 ;
-(void)_toggleRouteViewMapType:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif