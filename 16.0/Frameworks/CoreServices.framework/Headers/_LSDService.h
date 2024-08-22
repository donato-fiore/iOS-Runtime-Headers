// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _LSDSERVICE_H
#define _LSDSERVICE_H

@class NSXPCListener, NSMapTable, NSString;
@protocol NSXPCListenerDelegate;

#import <Foundation/Foundation.h>


@interface _LSDService : NSObject <NSXPCListenerDelegate>

 {
    NSXPCListener *_listener;
    unfair_lock_mutex _clientMapMutex;
    NSMapTable *_clientMap;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)XPCConnectionIsAlwaysPrivileged;
+(BOOL)isEnabled;
+(Class)clientClass;
+(id)XPCConnectionToService;
+(id)XPCInterface;
+(id)dispatchQueue;
+(id)replacementObjectForXPCConnection:(id)arg0 encoder:(id)arg1 object:(id)arg2 ;
+(unsigned short)connectionType;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)clientForConnection:(id)arg0 ;
-(id)initWithXPCListener:(id)arg0 ;
-(id)replacementObjectForXPCConnection:(id)arg0 encoder:(id)arg1 object:(id)arg2 ;
-(void)clientBorn:(id)arg0 forNewConnection:(id)arg1 ;
-(void)connection:(id)arg0 handleInvocation:(id)arg1 isReply:(BOOL)arg2 ;
-(void)connectionWasInvalidated:(id)arg0 ;


@end


#endif