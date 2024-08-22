// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef COREDAVUPDATEACLTASKGROUP_H
#define COREDAVUPDATEACLTASKGROUP_H

@class NSSet, NSString, NSURL;
@protocol CoreDAVPropFindTaskDelegate, CoreDAVACLTaskDelegate;


#import "CoreDAVTaskGroup.h"
#import "CoreDAVPropFindTask.h"

@interface CoreDAVUpdateACLTaskGroup : CoreDAVTaskGroup <CoreDAVPropFindTaskDelegate, CoreDAVACLTaskDelegate>



@property (retain, nonatomic) NSSet *aceItems; // ivar: _aceItems
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CoreDAVPropFindTask *fetchTask; // ivar: _fetchTask
@property (readonly) NSUInteger hash;
@property (nonatomic) int state; // ivar: _state
@property (readonly) Class superclass;
@property (retain, nonatomic) NSURL *url; // ivar: _url


-(id)initWithAccountInfoProvider:(id)arg0 aceItems:(id)arg1 url:(id)arg2 taskManager:(id)arg3 ;
-(void)_finishWithError:(id)arg0 state:(int)arg1 ;
-(void)_startGetACL;
-(void)_startSetACLWithAccessControlEntities:(id)arg0 ;
-(void)startTaskGroup;
-(void)task:(id)arg0 didFinishWithError:(id)arg1 ;
-(void)taskGroupWillCancelWithError:(id)arg0 ;


@end


#endif