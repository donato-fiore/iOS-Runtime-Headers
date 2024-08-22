// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRSHAREOPERATION_H
#define BRSHAREOPERATION_H

@class NSFileProviderService, NSString, NSURL;
@protocol OS_dispatch_group, BRShareOperationProtocol><NSXPCProxyCreating;


#import "BROperation.h"

@interface BRShareOperation : BROperation {
    NSObject<OS_dispatch_group> *_serviceGroup;
    NSFileProviderService *_sharingService;
    id<BRShareOperationProtocol><NSXPCProxyCreating> *_remoteObject;
}


@property (retain, nonatomic) NSString *itemID; // ivar: _itemID
@property (retain, nonatomic) NSURL *url; // ivar: _url


-(BOOL)shouldUseDirectConnection;
-(id)directConnectionFPFSObject;
-(id)init;
-(id)initWithDirectConnection;
-(id)initWithItemIdentifier:(id)arg0 ;
-(id)initWithShare:(id)arg0 ;
-(id)initWithURL:(id)arg0 ;
-(id)remoteFPFSObject;
-(id)remoteLegacyObject;
-(id)remoteObject;


@end


#endif