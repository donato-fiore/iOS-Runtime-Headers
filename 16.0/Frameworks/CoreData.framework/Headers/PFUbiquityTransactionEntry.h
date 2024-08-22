// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PFUBIQUITYTRANSACTIONENTRY_H
#define PFUBIQUITYTRANSACTIONENTRY_H

@class NSString, NSDate, NSNumber;


#import "NSManagedObject.h"
#import "PFUbiquityPeer.h"
#import "PFUbiquityStoreMetadata.h"

@interface PFUbiquityTransactionEntry : NSManagedObject

@property (retain, nonatomic) PFUbiquityPeer *actingPeer;
@property (retain, nonatomic) NSString *globalIDStr;
@property (retain, nonatomic) NSString *knowledgeVectorString;
@property (retain, nonatomic) NSString *localIDStr;
@property (retain, nonatomic) PFUbiquityStoreMetadata *storeMetadata;
@property (retain, nonatomic) NSDate *transactionDate;
@property (retain, nonatomic) NSString *transactionLogFilename;
@property (retain, nonatomic) NSNumber *transactionNumber;
@property (retain, nonatomic) NSNumber *transactionTypeNum;


-(id)initAndInsertIntoManagedObjectContext:(id)arg0 ;


@end


#endif