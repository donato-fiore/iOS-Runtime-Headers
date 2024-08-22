// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDOPERATIONINFOMETADATA_H
#define CKDOPERATIONINFOMETADATA_H

@class NSDate, CKOperationInfo, NSNumber;

#import <Foundation/Foundation.h>


@interface CKDOperationInfoMetadata : NSObject

@property (retain, nonatomic) NSDate *lastAttemptDate; // ivar: _lastAttemptDate
@property (retain, nonatomic) CKOperationInfo *operationInfo; // ivar: _operationInfo
@property (retain, nonatomic) NSNumber *retryNumber; // ivar: _retryNumber




@end


#endif