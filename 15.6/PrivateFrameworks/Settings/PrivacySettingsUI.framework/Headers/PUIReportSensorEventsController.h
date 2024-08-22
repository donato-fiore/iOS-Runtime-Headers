// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUIREPORTSENSOREVENTSCONTROLLER_H
#define PUIREPORTSENSOREVENTSCONTROLLER_H

@class PSListController, NSString;


#import "PUIReportSensorManager.h"

@interface PUIReportSensorEventsController : PSListController

@property (retain, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (retain, nonatomic) NSString *category; // ivar: _category
@property (retain, nonatomic) PUIReportSensorManager *manager; // ivar: _manager


-(id)headerForCategory:(id)arg0 ;
-(id)init;
-(id)specifiers;
-(id)valueForSpecifier:(id)arg0 ;
-(void)dataDidChange;


@end


#endif