// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCROCONNECTION_H
#define SCROCONNECTION_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SCROConnection : NSObject <NSSecureCoding>

 {
    unsigned int _pingPort;
    *__CFRunLoopSource _pingSource;
    *__CFRunLoopSource _invalidationSource;
    unsigned int _identifier;
    int _handlerType;
    id *_delegate;
    uint8_t _isConnectionStarted;
}




+(BOOL)inUnitTests;
+(BOOL)supportsSecureCoding;
+(void)_addConnectionToRunLoop:(id)arg0 ;
+(void)_configServer;
+(void)_configServerWithMachServiceName:(char *)arg0 ;
+(void)_createConnectionRunLoop;
+(void)_unconfigServerAndRetry:(BOOL)arg0 ;
+(void)initialize;
-(id)handlerArrayValueForKey:(int)arg0 ;
-(id)handlerValueForKey:(int)arg0 ;
-(id)handlerValueForKey:(int)arg0 withObject:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHandlerType:(int)arg0 delegate:(id)arg1 ;
-(int)performHandlerActionForKey:(int)arg0 ;
-(int)registerHandlerCallbackForKey:(int)arg0 ;
-(int)sendEvent:(id)arg0 ;
-(int)setHandlerValue:(id)arg0 forKey:(int)arg1 ;
-(void)_ping;
-(void)_startConnection;
-(void)_stopConnection;
-(void)encodeWithCoder:(id)arg0 ;
-(void)invalidate;


@end


#endif