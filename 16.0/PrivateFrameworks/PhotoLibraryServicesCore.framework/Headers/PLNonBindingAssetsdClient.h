// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLNONBINDINGASSETSDCLIENT_H
#define PLNONBINDINGASSETSDCLIENT_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PLAssetsdClientXPCConnection.h"
#import "PLAssetsdSystemLibraryURLReadOnlyClient.h"
#import "PLAssetsdLibraryManagementClient.h"
#import "PLAssetsdDemoClient.h"
#import "PLAssetsdPrivacySupportClient.h"

@interface PLNonBindingAssetsdClient : NSObject {
    PLAssetsdClientXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    PLAssetsdSystemLibraryURLReadOnlyClient *_systemLibraryURLReadOnlyClient;
    PLAssetsdLibraryManagementClient *_libraryManagementClient;
    PLAssetsdDemoClient *_demoClient;
    PLAssetsdPrivacySupportClient *_privacySupportClient;
}


@property (readonly) PLAssetsdDemoClient *demoClient;
@property (readonly) PLAssetsdLibraryManagementClient *libraryManagementClient;
@property (readonly) PLAssetsdPrivacySupportClient *privacySupportClient;
@property (readonly) PLAssetsdSystemLibraryURLReadOnlyClient *systemLibraryURLReadOnlyClient;


-(id)init;
-(void)_updateLibraryStateConnectionInterrupted:(id)arg0 ;


@end


#endif