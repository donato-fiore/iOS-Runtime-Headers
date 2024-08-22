// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DADCLIENTGRANTEDDELEGATESLISTRESPONSEDELEGATE_H
#define DADCLIENTGRANTEDDELEGATESLISTRESPONSEDELEGATE_H

@class NSArray, NSString;
@protocol DAEventsGrantedDelegatesListResponseConsumer;


#import "DADClientDelegate.h"

@interface DADClientGrantedDelegatesListResponseDelegate : DADClientDelegate <DAEventsGrantedDelegatesListResponseConsumer>

 {
    id *_requestID;
    NSArray *_results;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)finishWithError:(id)arg0 ;
-(void)grantedDelegatesListRequestFinishedWithResults:(id)arg0 error:(id)arg1 ;
-(void)performRequest;


@end


#endif