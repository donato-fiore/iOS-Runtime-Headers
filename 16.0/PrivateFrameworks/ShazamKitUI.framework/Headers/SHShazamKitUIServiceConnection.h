// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SHSHAZAMKITUISERVICECONNECTION_H
#define SHSHAZAMKITUISERVICECONNECTION_H

@class NSXPCConnection, NSString;
@protocol SHShazamKitUIService;

#import <Foundation/Foundation.h>

#import "SHShazamKitUIServiceConnectionProvider.h"

@interface SHShazamKitUIServiceConnection : NSObject <SHShazamKitUIService>



@property (readonly, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (nonatomic) os_unfair_lock_s connectionLock; // ivar: _connectionLock
@property (readonly, nonatomic) SHShazamKitUIServiceConnectionProvider *connectionProvider; // ivar: _connectionProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithConnectionProvider:(id)arg0 ;
-(void)attachDefaultConnectionHandlers;
-(void)dealloc;
-(void)presentMediaItem:(id)arg0 completionHandler:(id)arg1 ;
-(void)tearDownConnection;


@end


#endif