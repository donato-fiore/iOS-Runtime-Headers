// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CACHEDELETELISTENER_H
#define CACHEDELETELISTENER_H

@class NSString, NSXPCListener, Protocol, NSMutableSet;
@protocol NSXPCListenerDelegate;

#import <Foundation/Foundation.h>


@interface CacheDeleteListener : NSObject <NSXPCListenerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isResumed; // ivar: _isResumed
@property (retain, nonatomic) NSXPCListener *listener; // ivar: _listener
@property (retain, nonatomic) Protocol *protocol; // ivar: _protocol
@property (retain, nonatomic) NSMutableSet *requiredEntitlements; // ivar: _requiredEntitlements
@property (retain, nonatomic) NSString *serviceName; // ivar: _serviceName
@property (readonly) Class superclass;
@property (retain, nonatomic) id *xObj; // ivar: _xObj


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)initWithName:(id)arg0 listener:(id)arg1 protocol:(id)arg2 exportedObj:(id)arg3 isExtension:(BOOL)arg4 ;
-(void)addRequiredEntitlement:(id)arg0 ;
-(void)resume;
-(void)suspend;


@end


#endif