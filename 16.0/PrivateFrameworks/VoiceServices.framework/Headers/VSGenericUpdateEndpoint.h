// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VSGENERICUPDATEENDPOINT_H
#define VSGENERICUPDATEENDPOINT_H

@class NSString, NSXPCListenerEndpoint, NSXPCListener;
@protocol NSXPCListenerDelegate, NSSecureCoding, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface VSGenericUpdateEndpoint : NSObject <NSXPCListenerDelegate, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSXPCListenerEndpoint *endpoint; // ivar: _endpoint
@property (copy, nonatomic) id *handler; // ivar: _handler
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSXPCListener *listener; // ivar: _listener
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
// +(id)configuredEndpointWithUpdateHandler:(id)arg0 withConnection:(unk)arg1  ;
+(id)remoteUpdateHanderForEndpoint:(SEL)arg0 ;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)invalidate;


@end


#endif