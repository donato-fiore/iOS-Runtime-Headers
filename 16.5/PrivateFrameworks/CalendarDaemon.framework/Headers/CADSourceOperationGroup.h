// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CADSOURCEOPERATIONGROUP_H
#define CADSOURCEOPERATIONGROUP_H

@protocol CADSourceInterface;


#import "CADOperationGroup.h"

@interface CADSourceOperationGroup : CADOperationGroup <CADSourceInterface>





+(BOOL)requiresEventAccess;
-(int)_tryPerformBlockWithSourceID:(id)arg0 forAction:(NSUInteger)arg1 entityType:(int)arg2 withBlock:(id)arg3 ;
-(int)_tryPerformBlockWithSourceID:(id)arg0 forAction:(NSUInteger)arg1 withBlock:(id)arg2 ;
-(void)CADCountCalendarItemsOfType:(int)arg0 inSource:(id)arg1 reply:(id)arg2 ;
-(void)CADDatabaseGetLocalBirthdaySource:(id)arg0 ;
-(void)CADDatabaseGetLocalSourceWithEnableIfNeeded:(BOOL)arg0 reply:(id)arg1 ;
-(void)CADDatabaseGetSourcesWithFaultedProperties:(id)arg0 reply:(id)arg1 ;
-(void)CADRemoveCalendarItemsOlderThanDate:(id)arg0 ofType:(int)arg1 inSource:(id)arg2 reply:(id)arg3 ;
-(void)CADSourceAddExchangeDelegateWithName:(id)arg0 emailAddress:(id)arg1 toSourceWithID:(id)arg2 reply:(id)arg3 ;
-(void)CADSourceGetConstraints:(id)arg0 reply:(id)arg1 ;
-(void)CADSourceGetGrantedDelegatesList:(id)arg0 reply:(id)arg1 ;
-(void)CADSourceGetNotificationCollection:(id)arg0 reply:(id)arg1 ;
-(void)CADSourceRefresh:(id)arg0 isUserRequested:(BOOL)arg1 reply:(id)arg2 ;
-(void)CADSourceRemoveExchangeDelegateWithID:(id)arg0 reply:(id)arg1 ;
-(void)CADSourceUpdateGrantedDelegate:(id)arg0 action:(NSInteger)arg1 sourceID:(id)arg2 reply:(id)arg3 ;


@end


#endif