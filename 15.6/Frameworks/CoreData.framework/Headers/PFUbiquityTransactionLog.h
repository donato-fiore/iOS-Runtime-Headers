// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PFUBIQUITYTRANSACTIONLOG_H
#define PFUBIQUITYTRANSACTIONLOG_H

@class NSMutableDictionary, NSString, NSRecursiveLock;

#import <Foundation/Foundation.h>

#import "PFUbiquityLocation.h"
#import "PFUbiquityKnowledgeVector.h"
#import "PFUbiquitySaveSnapshot.h"

@interface PFUbiquityTransactionLog : NSObject {
    NSMutableDictionary *_contents;
    int _transactionLogType;
    BOOL _useTemporaryLogLocation;
    PFUbiquityLocation *_transactionLogLocation;
    PFUbiquityLocation *_temporaryTransactionLogLocation;
    PFUbiquityLocation *_stagingTransactionLogLocation;
    NSString *_fileProtectionOption;
    BOOL _inTemporaryLocation;
    BOOL _inStagingLocation;
    BOOL _inPermanentLocation;
    PFUbiquityKnowledgeVector *_knowledgeVector;
    PFUbiquitySaveSnapshot *_saveSnapshot;
    NSString *_localPeerID;
    BOOL _loadUsingRetry;
    BOOL _loadedComparisonMetadata;
    BOOL _loadedImportMetadata;
    BOOL _loadedInsertedObjectData;
    BOOL _loadedUpdatedObjectData;
    BOOL _loadedDeletedObjectData;
    BOOL _loadedContents;
    NSRecursiveLock *_contentsLock;
}




-(id)description;
-(id)init;
-(id)initWithStoreName:(id)arg0 andSaveSnapshot:(id)arg1 andRootLocation:(id)arg2 ;
-(id)initWithTransactionLogLocation:(id)arg0 andLocalPeerID:(id)arg1 ;
-(id)initWithTransactionLogURL:(id)arg0 ubiquityRootLocation:(id)arg1 andLocalPeerID:(id)arg2 ;
-(void)dealloc;


@end


#endif