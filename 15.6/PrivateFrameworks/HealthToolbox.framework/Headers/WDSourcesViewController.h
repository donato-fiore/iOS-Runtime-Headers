// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WDSOURCESVIEWCONTROLLER_H
#define WDSOURCESVIEWCONTROLLER_H

@class HKSourceListDataSource, NSString;
@protocol WDUserActivityResponder;


#import "WDHealthTableViewController.h"

@interface WDSourcesViewController : WDHealthTableViewController <WDUserActivityResponder>

 {
    HKSourceListDataSource *_appsDataSource;
    HKSourceListDataSource *_devicesDataSource;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *restorationSourceBundleIdentifier; // ivar: _restorationSourceBundleIdentifier
@property (readonly) Class superclass;


+(id)tableViewSectionClasses;
-(id)applyTransitionActivity:(id)arg0 ;
-(id)initWithProfile:(id)arg0 usingInsetStyling:(BOOL)arg1 ;
-(id)uniqueUserActivityType;
-(void)_updateActivityForViewDidAppear;
-(void)applicationWillEnterForeground;
-(void)applyChangeActivity:(id)arg0 ;
-(void)pushViewController:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif