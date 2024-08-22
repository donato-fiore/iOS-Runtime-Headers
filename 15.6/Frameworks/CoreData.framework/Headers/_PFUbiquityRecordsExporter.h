// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PFUBIQUITYRECORDSEXPORTER_H
#define _PFUBIQUITYRECORDSEXPORTER_H

@class NSString, NSDate, NSLock, NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PFUbiquityLocation.h"

@interface _PFUbiquityRecordsExporter : NSObject {
    NSString *_localPeerID;
    NSDate *_lastTransactionDate;
    PFUbiquityLocation *_ubiquityRootLocation;
    PFUbiquityLocation *_localRootLocation;
    NSString *_storeName;
    NSLock *_transactionLock;
    NSMutableDictionary *_pendingTransactionsToStoreNameAndTransactionNumber;
    BOOL _pendingTempLogMove;
    BOOL _allowTempLogStorage;
    BOOL _useLocalStorage;
    NSObject<OS_dispatch_queue> *_processingQueue;
    BOOL _throwOptimisticLockingException;
}




-(id)description;
-(id)init;
-(void)dealloc;
-(void)managedObjectContextDidSave:(id)arg0 ;


@end


#endif