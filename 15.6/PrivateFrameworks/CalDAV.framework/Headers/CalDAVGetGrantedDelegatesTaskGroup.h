// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CALDAVGETGRANTEDDELEGATESTASKGROUP_H
#define CALDAVGETGRANTEDDELEGATESTASKGROUP_H



#import "CalDAVGetDelegatesBaseTaskGroup.h"

@interface CalDAVGetGrantedDelegatesTaskGroup : CalDAVGetDelegatesBaseTaskGroup

@property (nonatomic) BOOL fetchPrincipalDetails; // ivar: _fetchPrincipalDetails
@property (nonatomic) int state; // ivar: _state


-(id)_urlAppendingSegmentWithAllowWrite:(BOOL)arg0 ;
-(id)initWithAccountInfoProvider:(id)arg0 principalURL:(id)arg1 taskManager:(id)arg2 ;
-(void)_expandPropertiesWithAllowWrite:(BOOL)arg0 ;
-(void)_fetchOnlyHrefs;
-(void)_finishWithError:(id)arg0 state:(int)arg1 ;
-(void)_getChildProperties;
-(void)startTaskGroup;
-(void)task:(id)arg0 didFinishWithError:(id)arg1 ;
-(void)taskGroup:(id)arg0 didFinishWithError:(id)arg1 ;


@end


#endif