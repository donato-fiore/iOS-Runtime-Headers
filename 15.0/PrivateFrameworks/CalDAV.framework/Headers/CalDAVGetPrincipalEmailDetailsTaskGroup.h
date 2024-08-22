// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CALDAVGETPRINCIPALEMAILDETAILSTASKGROUP_H
#define CALDAVGETPRINCIPALEMAILDETAILSTASKGROUP_H

@class CoreDAVTaskGroup, NSSet, NSString, NSURL;
@protocol CoreDAVTaskDelegate;


#import "CalDAVPrincipalEmailDetailsResult.h"

@interface CalDAVGetPrincipalEmailDetailsTaskGroup : CoreDAVTaskGroup <CoreDAVTaskDelegate>



@property (readonly, retain, nonatomic) NSSet *addresses;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, retain, nonatomic) NSString *displayName;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CalDAVPrincipalEmailDetailsResult *principalResult; // ivar: _principalResult
@property (retain, nonatomic) NSURL *principalURL; // ivar: _principalURL
@property (readonly) Class superclass;


-(id)initWithAccountInfoProvider:(id)arg0 principalURL:(id)arg1 taskManager:(id)arg2 ;
-(void)_finishWithError:(id)arg0 ;
-(void)_processPropFind:(id)arg0 ;
-(void)startTaskGroup;
-(void)task:(id)arg0 didFinishWithError:(id)arg1 ;


@end


#endif