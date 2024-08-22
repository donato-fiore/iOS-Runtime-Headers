// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef XPCNSSERVICECONNECTION_H
#define XPCNSSERVICECONNECTION_H

@class NSString;
@protocol XPCServiceConnectionDelegate, NSObject, XPCNSServiceConnectionDelegate;

#import <Foundation/Foundation.h>

#import "XPCServiceConnection.h"

@interface XPCNSServiceConnection : NSObject <XPCServiceConnectionDelegate>

 {
    XPCServiceConnection *_serviceConnection;
}


@property (retain, nonatomic) NSObject<NSObject> *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<XPCNSServiceConnectionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, retain, nonatomic) NSString *serviceName;
@property (readonly) Class superclass;


-(id)initWithXPCServiceConnection:(id)arg0 ;
-(void)XPCServiceConnection:(id)arg0 didReceiveRequest:(id)arg1 sequenceNumber:(NSUInteger)arg2 ;
-(void)XPCServiceConnectionDidDisconnect:(id)arg0 ;
-(void)sendMessage:(id)arg0 withHandler:(id)arg1 ;
-(void)shutDownCompletionBlock:(id)arg0 ;


@end


#endif