// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VSSUBSCRIPTIONSERVICECONNECTION_H
#define VSSUBSCRIPTIONSERVICECONNECTION_H

@class NSXPCConnection;

#import <Foundation/Foundation.h>


@interface VSSubscriptionServiceConnection : NSObject

@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection


-(id)init;
-(id)serviceWithErrorHandler:(id)arg0 ;
-(void)dealloc;


@end


#endif