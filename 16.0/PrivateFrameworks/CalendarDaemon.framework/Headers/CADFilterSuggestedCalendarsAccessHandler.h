// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CADFILTERSUGGESTEDCALENDARSACCESSHANDLER_H
#define CADFILTERSUGGESTEDCALENDARSACCESSHANDLER_H

@protocol CADPermissionValidator;


#import "CADAccountAccessHandler.h"

@interface CADFilterSuggestedCalendarsAccessHandler : CADAccountAccessHandler

@property (readonly, nonatomic) NSObject<CADPermissionValidator> *permissionValidator; // ivar: _permissionValidator


-(?)gatherRestrictedCalendarRowIDs:(?)arg0 forActioninDatabase;
-(id)initWithDatabaseDataProvider:(id)arg0 permissionValidator:(id)arg1 ;


@end


#endif