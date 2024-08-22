// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CADSYNCOPERATIONGROUP_H
#define CADSYNCOPERATIONGROUP_H

@protocol CADSyncInterface;


#import "CADOperationGroup.h"

@interface CADSyncOperationGroup : CADOperationGroup <CADSyncInterface>





+(BOOL)requiresEventAccess;
-(BOOL)accessGranted;
-(void)CADDatabaseGetDeletableCalendars:(id)arg0 ;
-(void)CADDatabaseGetDeletableSources:(id)arg0 ;


@end


#endif