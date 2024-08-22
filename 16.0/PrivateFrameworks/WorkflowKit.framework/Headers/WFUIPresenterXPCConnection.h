// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFUIPRESENTERXPCCONNECTION_H
#define WFUIPRESENTERXPCCONNECTION_H

@class NSXPCConnection, NSString;
@protocol WFUIPresenterConnection, WFUIPresenterHostInterface;

#import <Foundation/Foundation.h>


@interface WFUIPresenterXPCConnection : NSObject <WFUIPresenterConnection>



@property (nonatomic) BOOL connected; // ivar: _connected
@property (readonly, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSObject<WFUIPresenterHostInterface> *host;
@property (readonly, nonatomic) os_unfair_lock_s lock; // ivar: _lock
@property (readonly) Class superclass;


-(id)initWithConnection:(id)arg0 ;
-(id)initWithEndpoint:(id)arg0 ;
-(id)initWithMachServiceName:(id)arg0 ;
-(id)initWithServiceName:(id)arg0 ;
-(id)presenterWithErrorHandler:(id)arg0 ;
-(id)synchronousPresenterWithErrorHandler:(id)arg0 ;
-(void)resumeConnectionIfNecessary;


@end


#endif