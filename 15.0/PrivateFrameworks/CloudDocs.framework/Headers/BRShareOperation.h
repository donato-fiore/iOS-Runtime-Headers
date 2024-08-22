// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BRSHAREOPERATION_H
#define BRSHAREOPERATION_H

@class NSFileProviderService, NSURL;
@protocol OS_dispatch_group, BRShareOperationProtocol><NSXPCProxyCreating;


#import "BROperation.h"

@interface BRShareOperation : BROperation {
    NSObject<OS_dispatch_group> *_serviceGroup;
    NSFileProviderService *_sharingService;
    id<BRShareOperationProtocol><NSXPCProxyCreating> *_remoteObject;
}


@property (retain, nonatomic) NSURL *url; // ivar: _url


-(id)init;
-(id)initWithDirectConnection;
-(id)initWithShare:(id)arg0 ;
-(id)initWithURL:(id)arg0 ;
-(id)remoteObject;


@end


#endif