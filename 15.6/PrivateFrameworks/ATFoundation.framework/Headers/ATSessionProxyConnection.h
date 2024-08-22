// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATSESSIONPROXYCONNECTION_H
#define ATSESSIONPROXYCONNECTION_H

@class ATSession, NSXPCConnection, NSString;
@protocol ATSessionProxy, ATSessionObserver;

#import <Foundation/Foundation.h>


@interface ATSessionProxyConnection : NSObject <ATSessionProxy, ATSessionObserver>

 {
    ATSession *_session;
    NSXPCConnection *_connection;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithSession:(id)arg0 connection:(id)arg1 ;
-(void)connect;
-(void)session:(id)arg0 didFinishSessionTask:(id)arg1 ;
-(void)session:(id)arg0 didUpdateSessionTask:(id)arg1 ;
-(void)session:(id)arg0 willBeginSessionTask:(id)arg1 ;
-(void)start;
-(void)stop;


@end


#endif