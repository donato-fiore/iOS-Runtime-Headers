// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSRETRYABLECKDATABASEOPERATION_H
#define WBSRETRYABLECKDATABASEOPERATION_H

@class CKDatabase;


#import "WBSRetryableCKOperation.h"

@interface WBSRetryableCKDatabaseOperation : WBSRetryableCKOperation

@property (retain, nonatomic) CKDatabase *database; // ivar: _database


-(void)_setUpOperation:(id)arg0 ;


@end


#endif