// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LIVEFSFPUNLOCKSERVICESOURCE_H
#define LIVEFSFPUNLOCKSERVICESOURCE_H

@class NSString, NSOperationQueue, NSHashTable;
@protocol NSXPCListenerDelegate, LiveFS_Unlock, NSFileProviderServiceSource;

#import <Foundation/Foundation.h>

#import "LiveFSFPExtensionHelper.h"

@interface LiveFSFPUnlockServiceSource : NSObject <NSXPCListenerDelegate, LiveFS_Unlock, NSFileProviderServiceSource>

 {
    LiveFSFPExtensionHelper *_fileProviderExtension;
    NSString *_itemIdentifier;
    NSOperationQueue *_operationQueue;
    NSHashTable *_listeners;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *serviceName;
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)initWithFileProviderExtension:(id)arg0 itemIdentifier:(id)arg1 ;
-(id)makeListenerEndpointAndReturnError:(*id)arg0 ;
-(void)unlockWithPassword:(id)arg0 saveToKeychain:(BOOL)arg1 completionHandler:(id)arg2 ;


@end


#endif