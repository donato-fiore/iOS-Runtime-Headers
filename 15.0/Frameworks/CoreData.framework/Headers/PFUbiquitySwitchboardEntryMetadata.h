// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFUBIQUITYSWITCHBOARDENTRYMETADATA_H
#define PFUBIQUITYSWITCHBOARDENTRYMETADATA_H

@class NSString, NSMutableSet;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PFUbiquityLocation.h"
#import "NSPersistentStoreCoordinator.h"
#import "NSSQLCore.h"
#import "_PFUbiquityRecordsImporter.h"
#import "_PFUbiquityRecordsExporter.h"
#import "PFUbiquitySwitchboardCacheWrapper.h"
#import "PFUbiquityRecordsImporterSchedulingContext.h"
#import "PFUbiquityBaselineHeuristics.h"

@interface PFUbiquitySwitchboardEntryMetadata : NSObject {
    NSString *_localPeerID;
    NSString *_storeName;
    PFUbiquityLocation *_ubiquityRootLocation;
    PFUbiquityLocation *_localRootLocation;
    NSString *_activeModelVersionHash;
    NSMutableSet *_stores;
    NSPersistentStoreCoordinator *_privatePSC;
    NSSQLCore *_privateStore;
    _PFUbiquityRecordsImporter *_importer;
    _PFUbiquityRecordsExporter *_exporter;
    PFUbiquitySwitchboardCacheWrapper *_cacheWrapper;
    PFUbiquityRecordsImporterSchedulingContext *_schedulingContext;
    BOOL _useLocalStorage;
    BOOL _useLocaAccount;
    NSObject<OS_dispatch_queue> *_privateQueue;
    PFUbiquityBaselineHeuristics *_baselineHeuristics;
}




-(id)initWithLocalPeerID:(id)arg0 ubiquityRootLocation:(id)arg1 localRootLocation:(id)arg2 storeName:(id)arg3 andPrivateQueue:(id)arg4 ;
-(void)dealloc;


@end


#endif