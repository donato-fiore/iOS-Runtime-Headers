// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _NSCFSERVER_H
#define _NSCFSERVER_H

@class NSNumber, NSDictionary, NSString;
@protocol OS_tcp_listener;

#import <Foundation/Foundation.h>


@interface _NSCFServer : NSObject {
    NSNumber *_listenerID;
    NSObject<OS_tcp_listener> *_listener;
}


@property (retain) NSDictionary *configuration; // ivar: _configuration
@property (getter=isCoprocessorInterfaceEnabled) BOOL enableCoprocessorInterface; // ivar: _enableCoprocessorInterface
@property (retain) NSString *interface; // ivar: _interface
@property NSInteger listenerPort; // ivar: _listenerPort
@property NSInteger type; // ivar: _type


+(BOOL)startSocksServerWithPort:(NSInteger)arg0 ;
+(BOOL)stopAll;
+(id)adressesForInterface:(id)arg0 ;
-(BOOL)start;
-(BOOL)stop;
-(id)init;
-(id)initWithType:(NSInteger)arg0 ;
-(id)initWithType:(NSInteger)arg0 port:(NSInteger)arg1 ;
-(id)initWithType:(NSInteger)arg0 port:(NSInteger)arg1 interface:(id)arg2 ;
-(void)dealloc;


@end


#endif