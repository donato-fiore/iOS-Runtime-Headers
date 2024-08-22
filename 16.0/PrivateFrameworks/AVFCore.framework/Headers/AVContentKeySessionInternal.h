// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVCONTENTKEYSESSIONINTERNAL_H
#define AVCONTENTKEYSESSIONINTERNAL_H

@class NSURL, NSData, NSHashTable, NSString, NSMutableDictionary, NSMutableArray, NSMapTable;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AVWeakReferencingDelegateStorage.h"
#import "AVWeakReference.h"
#import "AVContentKeyReportGroup.h"

@interface AVContentKeySessionInternal : NSObject {
    AVWeakReferencingDelegateStorage *_delegateStorage;
    AVWeakReference *_weakReference;
    NSURL *_storageURL;
    NSData *_appIdentifier;
    BOOL _isExpired;
    BOOL _internal;
    AVContentKeyReportGroup *_defaultContentKeyGroup;
    NSObject<OS_dispatch_queue> *_threadSafetyQ;
    NSHashTable *_contentKeyRecipients;
    NSString *_keySystem;
    NSMutableDictionary *keyRequestsByRequestID;
    NSMutableArray *_contentKeyGroups;
    NSMapTable *cryptorUUIDToContentKeyRequestMap;
    NSMutableDictionary *keyRequestParamsByRequestID;
    NSMutableDictionary *keyRequestTrackerByRequestID;
    NSMutableDictionary *cryptorsByIdentifer;
    NSMapTable *contentKeyRequestByKeySpecifierMap;
    NSObject<OS_dispatch_queue> *_delegateReadWriteQueue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    *CMBaseObject _contentKeyBoss;
}






@end


#endif