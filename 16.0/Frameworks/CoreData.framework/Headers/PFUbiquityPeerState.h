// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PFUBIQUITYPEERSTATE_H
#define PFUBIQUITYPEERSTATE_H

@class NSString, NSNumber;


#import "NSManagedObject.h"
#import "PFUbiquityPeer.h"
#import "PFUbiquityStoreMetadata.h"

@interface PFUbiquityPeerState : NSManagedObject

@property (retain, nonatomic) NSString *lastProcessedTransactionLogURL;
@property (retain, nonatomic) PFUbiquityPeer *peer;
@property (retain, nonatomic) PFUbiquityStoreMetadata *storeMetadata;
@property (retain, nonatomic) NSString *storeName;
@property (retain, nonatomic) NSNumber *transactionNumber;


-(id)initWithStoreName:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif