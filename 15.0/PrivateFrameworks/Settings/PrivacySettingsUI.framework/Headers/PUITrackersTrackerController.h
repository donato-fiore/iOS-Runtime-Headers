// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUITRACKERSTRACKERCONTROLLER_H
#define PUITRACKERSTRACKERCONTROLLER_H

@class PSListController, NSString;


#import "PUITrackingReportManager.h"

@interface PUITrackersTrackerController : PSListController

@property (retain, nonatomic) PUITrackingReportManager *manager; // ivar: _manager
@property (retain, nonatomic) NSString *trackerID; // ivar: _trackerID


-(id)init;
-(id)nameForAppID:(id)arg0 ;
-(id)specifiers;
-(id)timeStringForDate:(id)arg0 ;
-(id)valueForSpecifier:(id)arg0 ;
-(void)dataDidChange;


@end


#endif