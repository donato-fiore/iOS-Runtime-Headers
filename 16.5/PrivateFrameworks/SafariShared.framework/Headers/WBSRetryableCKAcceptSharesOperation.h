// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSRETRYABLECKACCEPTSHARESOPERATION_H
#define WBSRETRYABLECKACCEPTSHARESOPERATION_H

@class NSArray;


#import "WBSRetryableCKOperation.h"

@interface WBSRetryableCKAcceptSharesOperation : WBSRetryableCKOperation

@property (copy, nonatomic) id *acceptSharesCompletionBlock; // ivar: _acceptSharesCompletionBlock
@property (copy, nonatomic) id *perShareCompletionBlock; // ivar: _perShareCompletionBlock
@property (copy, nonatomic) NSArray *shareMetadatas; // ivar: _shareMetadatas


-(id)_makeOperation;
-(void)_setUpOperation:(id)arg0 ;


@end


#endif