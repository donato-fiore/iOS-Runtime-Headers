// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPSSERVICECONNECTION_H
#define TPSSERVICECONNECTION_H

@class NSString, NSXPCInterface;
@protocol _TPSXPCExportable;

#import <Foundation/Foundation.h>

#import "_TPSXPCConnection.h"

@interface TPSServiceConnection : NSObject <_TPSXPCExportable>

 {
    _TPSXPCConnection *_connection;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSXPCInterface *exportedInterfaceInstance; // ivar: _exportedInterfaceInstance
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSXPCInterface *remoteInterfaceInstance; // ivar: _remoteInterfaceInstance
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)connection;
-(id)exportedInterface;
-(id)remoteInterface;
-(void)connectionInterrupted;
-(void)connectionInvalidated;
-(void)invalidate;


@end


#endif