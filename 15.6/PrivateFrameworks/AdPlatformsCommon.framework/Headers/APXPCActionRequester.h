// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef APXPCACTIONREQUESTER_H
#define APXPCACTIONREQUESTER_H

@class NSString, NSUUID, Protocol;
@protocol APXPCActionRequesterProtocol;

#import <Foundation/Foundation.h>

#import "APXPCRemoteConnection.h"

@interface APXPCActionRequester : NSObject <APXPCActionRequesterProtocol>



@property (retain, nonatomic) APXPCRemoteConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSUUID *delegateID; // ivar: _delegateID
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) Protocol *exportedInterface; // ivar: _exportedInterface
@property (readonly, nonatomic) id *exportedObject; // ivar: _exportedObject
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) id *remoteObjectProxy; // ivar: _remoteObjectProxy
@property (readonly) Class superclass;


+(BOOL)canShareConnection;
+(id)machService;
+(id)unfairLock;
-(BOOL)isEqual:(id)arg0 ;
-(id)init;
-(id)remoteObjectInterface;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)xpcConnection;
-(void)dealloc;
-(void)extendCollectionClassesForExportedInterface:(id)arg0 ;
-(void)extendCollectionClassesForRemoteInterface:(id)arg0 ;
-(void)finished;


@end


#endif