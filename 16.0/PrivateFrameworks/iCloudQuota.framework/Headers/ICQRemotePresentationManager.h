// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICQREMOTEPRESENTATIONMANAGER_H
#define ICQREMOTEPRESENTATIONMANAGER_H

@class NSString;
@protocol SBSRemoteAlertHandleObserver;

#import <Foundation/Foundation.h>

#import "ICQRemoteContext.h"

@interface ICQRemotePresentationManager : NSObject <SBSRemoteAlertHandleObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *presentationWasInvalidated; // ivar: _presentationWasInvalidated
@property (readonly, nonatomic) ICQRemoteContext *remoteContext; // ivar: _remoteContext
@property (readonly) Class superclass;


-(id)initWithRemoteContext:(id)arg0 ;
-(void)presentHiddenFreshmintFlowWithEndpoint:(id)arg0 ;
-(void)remoteAlertHandle:(id)arg0 didInvalidateWithError:(id)arg1 ;


@end


#endif