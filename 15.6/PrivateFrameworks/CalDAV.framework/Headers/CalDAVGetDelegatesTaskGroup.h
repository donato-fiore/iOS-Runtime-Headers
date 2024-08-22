// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CALDAVGETDELEGATESTASKGROUP_H
#define CALDAVGETDELEGATESTASKGROUP_H

@class NSMutableArray;


#import "CalDAVGetDelegatesBaseTaskGroup.h"

@interface CalDAVGetDelegatesTaskGroup : CalDAVGetDelegatesBaseTaskGroup

@property (retain, nonatomic) NSMutableArray *nestedGroupPrincipalURLs; // ivar: _nestedGroupPrincipalURLs
@property (nonatomic) int state; // ivar: _state


-(id)initWithAccountInfoProvider:(id)arg0 principalURL:(id)arg1 taskManager:(id)arg2 ;
-(void)_expandProperties;
-(void)_finishWithError:(id)arg0 state:(int)arg1 ;
-(void)_getChildProperties;
-(void)_getGroupMembershipForURL:(id)arg0 state:(int)arg1 ;
-(void)startTaskGroup;
-(void)task:(id)arg0 didFinishWithError:(id)arg1 ;
-(void)taskGroup:(id)arg0 didFinishWithError:(id)arg1 ;


@end


#endif