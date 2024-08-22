// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUITRACKERSLISTCONTROLLER_H
#define PUITRACKERSLISTCONTROLLER_H

@class PSListController, NSString;


#import "PUITrackingReportManager.h"

@interface PUITrackersListController : PSListController

@property (retain, nonatomic) NSString *appID; // ivar: _appID
@property (retain, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (nonatomic) BOOL listOnlyOther; // ivar: _listOnlyOther
@property (retain, nonatomic) PUITrackingReportManager *manager; // ivar: _manager
@property (retain, nonatomic) NSString *website; // ivar: _website


-(id)init;
-(id)specifiers;
-(id)timeStringForDate:(id)arg0 ;
-(id)valueForSpecifier:(id)arg0 ;
-(void)dataDidChange;


@end


#endif