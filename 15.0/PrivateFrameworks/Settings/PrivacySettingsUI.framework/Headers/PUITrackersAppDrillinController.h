// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUITRACKERSAPPDRILLINCONTROLLER_H
#define PUITRACKERSAPPDRILLINCONTROLLER_H

@class PSListController, NSString;


#import "PUITrackingReportManager.h"

@interface PUITrackersAppDrillinController : PSListController

@property (retain, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (retain, nonatomic) PUITrackingReportManager *manager; // ivar: _manager


-(id)init;
-(id)ownersFromTrackingData:(id)arg0 ;
-(id)specifiers;
-(id)timeStringForDate:(id)arg0 ;
-(id)valueForSpecifier:(id)arg0 ;
-(void)dataDidChange;


@end


#endif