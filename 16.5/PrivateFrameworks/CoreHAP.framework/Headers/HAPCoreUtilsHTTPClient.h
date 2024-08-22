// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HAPCOREUTILSHTTPCLIENT_H
#define HAPCOREUTILSHTTPCLIENT_H

@protocol HAPCoreUtilsHTTPClient;

#import <Foundation/Foundation.h>


@interface HAPCoreUtilsHTTPClient : NSObject <HAPCoreUtilsHTTPClient>

 {
    *HTTPClientPrivate _httpClient;
}




-(id)initWithQueue:(id)arg0 ;
-(int)getPeerAddress:(*void)arg0 maxLength:(NSUInteger)arg1 outLength:(*NSUInteger)arg2 ;
-(int)sendMessage:(struct HTTPMessagePrivate *)arg0 ;
-(int)setDestination:(char *)arg0 port:(int)arg1 ;
-(int)setProperty:(struct __CFString *)arg0 value:(*void)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(void)setDebugDelegate:(struct ? *)arg0 ;
-(void)setDelegate:(struct ? *)arg0 ;
-(void)setDispatchQueue:(id)arg0 ;
-(void)setFlags:(unsigned int)arg0 mask:(unsigned int)arg1 ;
-(void)setTimeoutInSeconds:(int)arg0 ;
-(void)setTransportDelegate:(struct ? *)arg0 ;


@end


#endif