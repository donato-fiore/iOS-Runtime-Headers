// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RMSTOREXPCCONNECTION_H
#define RMSTOREXPCCONNECTION_H

@class NSXPCConnection;

#import <Foundation/Foundation.h>


@interface RMStoreXPCConnection : NSObject

@property (readonly) NSXPCConnection *connection; // ivar: _connection


+(id)storeXPCConnection:(id)arg0 ;
-(id)initWithXPCConnection:(id)arg0 ;
-(void)dealloc;


@end


#endif