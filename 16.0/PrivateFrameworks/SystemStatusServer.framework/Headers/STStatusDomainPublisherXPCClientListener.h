// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STSTATUSDOMAINPUBLISHERXPCCLIENTLISTENER_H
#define STSTATUSDOMAINPUBLISHERXPCCLIENTLISTENER_H

@class NSXPCListener, NSString;
@protocol NSXPCListenerDelegate, STStatusDomainPublisherServerHandle;

#import <Foundation/Foundation.h>


@interface STStatusDomainPublisherXPCClientListener : NSObject <NSXPCListenerDelegate>

 {
    id<STStatusDomainPublisherServerHandle> *_serverHandle;
    NSXPCListener *_xpcListener;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)initWithServerHandle:(id)arg0 ;
-(void)dealloc;


@end


#endif