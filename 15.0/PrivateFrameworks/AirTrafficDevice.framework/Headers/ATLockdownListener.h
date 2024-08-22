// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATLOCKDOWNLISTENER_H
#define ATLOCKDOWNLISTENER_H

@class ATMessageLinkListener, NSString;
@protocol OS_xpc_object;



@interface ATLockdownListener : ATMessageLinkListener {
    NSObject<OS_xpc_object> *_connection;
}


@property (readonly, copy, nonatomic) NSString *serviceName; // ivar: _serviceName


-(BOOL)start;
-(id)initWithServiceName:(id)arg0 ;
-(void)_handleNewConnection:(id)arg0 ;
-(void)stop;


@end


#endif