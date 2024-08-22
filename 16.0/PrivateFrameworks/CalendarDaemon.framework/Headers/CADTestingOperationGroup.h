// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CADTESTINGOPERATIONGROUP_H
#define CADTESTINGOPERATIONGROUP_H

@protocol CADTestingInterface;


#import "CADOperationGroup.h"

@interface CADTestingOperationGroup : CADOperationGroup <CADTestingInterface>





+(BOOL)requiresEventAccess;
-(BOOL)accessGranted;
-(void)CADTestingCloseDatabase:(id)arg0 ;
-(void)CADTestingSimulateDaemonCrash;


@end


#endif