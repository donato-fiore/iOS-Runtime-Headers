// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATSTOREDOWNLOADOPERATION_H
#define ATSTOREDOWNLOADOPERATION_H

@class ICRequestOperation, ATAsset;


#import "ATStoreDownloadOperationResult.h"

@interface ATStoreDownloadOperation : ICRequestOperation

@property (nonatomic) ATStoreDownloadOperationResult *_operationResult; // ivar: __operationResult
@property (readonly, nonatomic) ATAsset *asset; // ivar: _asset


-(id)description;
-(id)initWithAsset:(id)arg0 ;
-(void)finishWithError:(id)arg0 operationResult:(id)arg1 ;
-(void)performOnOperationQueue:(id)arg0 completion:(id)arg1 ;


@end


#endif