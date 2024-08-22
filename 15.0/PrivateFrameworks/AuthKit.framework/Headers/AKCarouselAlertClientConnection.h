// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AKCAROUSELALERTCLIENTCONNECTION_H
#define AKCAROUSELALERTCLIENTCONNECTION_H

@class NSXPCConnection;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AKCarouselAlertClientConnection : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // ivar: _internalQueue
@property (retain, nonatomic) NSXPCConnection *xpcConnection; // ivar: _xpcConnection


+(id)sharedConnection;
-(id)connection;
-(id)init;
-(void)dealloc;
-(void)dismissAlert:(id)arg0 ;
-(void)presentAlertWithDictionary:(id)arg0 completion:(id)arg1 ;
-(void)unsafe_invalidate;


@end


#endif