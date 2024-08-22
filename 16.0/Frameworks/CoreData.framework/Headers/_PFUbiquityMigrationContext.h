// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PFUBIQUITYMIGRATIONCONTEXT_H
#define _PFUBIQUITYMIGRATIONCONTEXT_H


#import <Foundation/Foundation.h>

#import "PFUbiquityTransactionLog.h"
#import "PFUbiquityStoreSaveSnapshot.h"

@interface _PFUbiquityMigrationContext : NSObject {
    PFUbiquityTransactionLog *_transactionLog;
    PFUbiquityStoreSaveSnapshot *_sourceStoreSaveSnapshot;
    PFUbiquityStoreSaveSnapshot *_destinationStoreSaveSnapshot;
}




-(void)dealloc;


@end


#endif