// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PFUBIQUITYIMPORTOPERATION_H
#define PFUBIQUITYIMPORTOPERATION_H

@class NSOperation, NSString, NSLock;

#import <Foundation/Foundation.h>

#import "NSPersistentStore.h"
#import "PFUbiquityLocation.h"

@interface PFUbiquityImportOperation : NSOperation {
    NSString *_localPeerID;
    NSString *_storeName;
    NSPersistentStore *_store;
    PFUbiquityLocation *_ubiquityRootLocation;
    NSLock *_delegateLock;
    BOOL _lockedDelegateLock;
    NSObject *_delegate;
}


@property NSObject *delegate;


-(id)description;
-(id)init;
-(id)initWithPersistentStore:(id)arg0 localPeerID:(id)arg1 andUbiquityRootLocation:(id)arg2 ;
-(id)initWithStoreName:(id)arg0 localPeerID:(id)arg1 andUbiquityRootLocation:(id)arg2 ;
-(id)retainedDelegate;
-(void)cancel;
-(void)dealloc;
-(void)storeWillBeRemoved:(id)arg0 ;


@end


#endif