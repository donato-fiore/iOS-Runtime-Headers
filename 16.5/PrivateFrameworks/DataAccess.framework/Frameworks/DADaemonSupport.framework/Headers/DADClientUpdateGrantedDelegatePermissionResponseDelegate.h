// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DADCLIENTUPDATEGRANTEDDELEGATEPERMISSIONRESPONSEDELEGATE_H
#define DADCLIENTUPDATEGRANTEDDELEGATEPERMISSIONRESPONSEDELEGATE_H

@class DAEGrantedDelegate, NSString;
@protocol DAEventsUpdateGrantedDelegatePermissionResponseConsumer;


#import "DADClientDelegate.h"

@interface DADClientUpdateGrantedDelegatePermissionResponseDelegate : DADClientDelegate <DAEventsUpdateGrantedDelegatePermissionResponseConsumer>

 {
    id *_requestID;
    DAEGrantedDelegate *_grantedDelegate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithAccountID:(id)arg0 client:(id)arg1 grantedDelegate:(id)arg2 ;
-(void)finishWithError:(id)arg0 ;
-(void)performRequest;
-(void)updateGrantedDelegatePermissionFinishedWithError:(id)arg0 ;


@end


#endif