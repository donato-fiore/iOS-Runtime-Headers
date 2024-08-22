// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MSRESETSERVER_H
#define MSRESETSERVER_H

@class NSString;
@protocol MSResetServerProtocolDelegate;

#import <Foundation/Foundation.h>

#import "MSResetServerProtocol.h"
#import "MSMediaStreamDaemon.h"

@interface MSResetServer : NSObject <MSResetServerProtocolDelegate>

 {
    MSResetServerProtocol *_protocol;
    id *_selfReference;
}


@property (nonatomic) MSMediaStreamDaemon *daemon; // ivar: _daemon
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *personID; // ivar: _personID
@property (readonly) Class superclass;


+(id)resetServerObjectWithPersonID:(id)arg0 baseURL:(id)arg1 ;
-(id)initWithPersonID:(id)arg0 baseURL:(id)arg1 ;
-(void)resetServer;
-(void)resetServerProtocol:(id)arg0 didFinishWithError:(id)arg1 ;
-(void)resetServerProtocol:(id)arg0 didReceiveAuthenticationError:(id)arg1 ;


@end


#endif