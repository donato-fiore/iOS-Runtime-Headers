// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CADTESTINGOPERATIONGROUP_H
#define CADTESTINGOPERATIONGROUP_H

@protocol CADTestingInterface;


#import "CADOperationGroup.h"

@interface CADTestingOperationGroup : CADOperationGroup <CADTestingInterface>





+(BOOL)requiresEventAccess;
+(BOOL)requiresEventOrReminderAccess;
+(BOOL)requiresReminderAccess;
-(BOOL)accessGrantedToPerformSelector:(SEL)arg0 ;
-(void)CADTestingCloseDatabase:(id)arg0 ;
-(void)CADTestingSimulateDaemonCrash;


@end


#endif