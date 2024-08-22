// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PFUBIQUITYTRANSACTIONENTRYLIGHT_H
#define PFUBIQUITYTRANSACTIONENTRYLIGHT_H

@class NSString, NSDate, NSNumber;

#import <Foundation/Foundation.h>

#import "PFUbiquityGlobalObjectID.h"
#import "PFUbiquityLocation.h"
#import "PFUbiquityKnowledgeVector.h"

@interface PFUbiquityTransactionEntryLight : NSObject {
    PFUbiquityGlobalObjectID *_globalID;
    int _transactionType;
    NSString *_actingPeerID;
    NSString *_storeName;
    PFUbiquityLocation *_transactionLogLocation;
    PFUbiquityKnowledgeVector *_kv;
}


@property (retain, nonatomic) NSDate *transactionDate; // ivar: _transactionDate
@property (retain, nonatomic) NSNumber *transactionNumber; // ivar: _transactionNumber


-(id)description;
-(id)init;
-(id)initWithTransactionEntry:(id)arg0 ubiquityRootLocation:(id)arg1 andGlobalIDCache:(id)arg2 ;
-(void)dealloc;


@end


#endif