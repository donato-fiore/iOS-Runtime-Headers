// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRXPCAUTOMATICERRORPROXY_H
#define BRXPCAUTOMATICERRORPROXY_H

@class FPXPCAutomaticErrorProxy, NSXPCConnection, NSFileProviderService;
@protocol BRXPCAutomaticErrorProxy;



@interface BRXPCAutomaticErrorProxy : FPXPCAutomaticErrorProxy <BRXPCAutomaticErrorProxy>

 {
    NSXPCConnection *_connection;
    NSFileProviderService *_service;
}


@property NSUInteger timeoutState;


+(BOOL)sanitizeErrors;
+(void)decrementConnectionRefCount:(id)arg0 ;
+(void)incrementConnectionRefCount:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithConnection:(id)arg0 service:(id)arg1 interface:(id)arg2 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif