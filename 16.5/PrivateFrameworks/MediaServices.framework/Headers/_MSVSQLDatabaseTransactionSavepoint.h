// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MSVSQLDATABASETRANSACTIONSAVEPOINT_H
#define _MSVSQLDATABASETRANSACTIONSAVEPOINT_H

@class NSString;
@protocol MSVSQLDatabaseTransactionSavepoint;

#import <Foundation/Foundation.h>

#import "MSVSQLDatabaseTransaction.h"

@interface _MSVSQLDatabaseTransactionSavepoint : NSObject <MSVSQLDatabaseTransactionSavepoint>

 {
    MSVSQLDatabaseTransaction *_transaction;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly) Class superclass;


-(BOOL)commit;
-(void)dealloc;


@end


#endif