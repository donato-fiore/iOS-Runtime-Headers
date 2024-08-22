// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDFETCHREGISTEREDBUNDLEIDSOPERATION_H
#define CKDFETCHREGISTEREDBUNDLEIDSOPERATION_H

@class NSArray;
@protocol CKFetchRegisteredBundleIDsOperationCallbacks;


#import "CKDOperation.h"

@interface CKDFetchRegisteredBundleIDsOperation : CKDOperation

@property (copy, nonatomic) NSArray *bundleIDs; // ivar: _bundleIDs
@property (retain, nonatomic) NSObject<CKFetchRegisteredBundleIDsOperationCallbacks> *clientOperationCallbackProxy;


-(id)activityCreate;
-(id)initWithOperationInfo:(id)arg0 container:(id)arg1 ;
-(int)operationType;
-(void)main;


@end


#endif