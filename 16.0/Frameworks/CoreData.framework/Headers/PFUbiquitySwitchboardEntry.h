// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PFUBIQUITYSWITCHBOARDENTRY_H
#define PFUBIQUITYSWITCHBOARDENTRY_H

@class NSString, NSURL, NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PFUbiquityLocation.h"
#import "PFUbiquityFilePresenter.h"
#import "PFUbiquityContainerMonitor.h"
#import "PFUbiquitySwitchboardEntryMetadata.h"
#import "PFUbiquitySetupAssistant.h"

@interface PFUbiquitySwitchboardEntry : NSObject {
    NSString *_localPeerID;
    NSString *_storeName;
    NSURL *_storeURL;
    PFUbiquityLocation *_ubiquityRootLocation;
    PFUbiquityLocation *_localRootLocation;
    PFUbiquityFilePresenter *_fp;
    PFUbiquityFilePresenter *_localFP;
    PFUbiquityContainerMonitor *_monitor;
    NSUInteger _activeStoreCount;
    NSMutableDictionary *_registeredCoordinators;
    PFUbiquitySwitchboardEntryMetadata *_metadata;
    BOOL _finishedSetupForStore;
    BOOL _hasScheduledFinishBlock;
    BOOL _finishedInitializingForStore;
    int _finishLock;
    PFUbiquitySetupAssistant *_finishingSetupAssistant;
    NSObject<OS_dispatch_queue> *_privateQueue;
}




-(id)description;
-(id)init;
-(id)initWithLocalPeerID:(id)arg0 storeName:(id)arg1 withURL:(id)arg2 ubiquityRootLocation:(id)arg3 andLocalRootLocation:(id)arg4 ;
-(void)containerIdentifierChanged:(id)arg0 ;
-(void)dealloc;
-(void)filePresenterNoticedBaselineFileChange:(id)arg0 ;
-(void)filePresenterWasNotifiedTransactionLogs:(id)arg0 ;


@end


#endif