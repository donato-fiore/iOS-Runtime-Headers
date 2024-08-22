// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUIREPORTSENSORAPPCONTROLLER_H
#define PUIREPORTSENSORAPPCONTROLLER_H

@class PSListController, NSString;


#import "PUIReportSensorManager.h"

@interface PUIReportSensorAppController : PSListController

@property (retain, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (retain, nonatomic) PUIReportSensorManager *manager; // ivar: _manager


-(id)init;
-(id)specifiers;
-(id)valueForSpecifier:(id)arg0 ;
-(void)dataDidChange;


@end


#endif