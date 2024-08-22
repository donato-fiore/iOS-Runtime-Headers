// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSCLOUDKITMIRRORINGDELEGATESERIALIZATIONREQUEST_H
#define NSCLOUDKITMIRRORINGDELEGATESERIALIZATIONREQUEST_H

@class NSSet;


#import "NSCloudKitMirroringRequest.h"

@interface NSCloudKitMirroringDelegateSerializationRequest : NSCloudKitMirroringRequest

@property (copy, nonatomic) NSSet *objectIDsToSerialize; // ivar: _objectIDsToSerialize
@property (nonatomic) NSUInteger resultType; // ivar: _resultType


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithOptions:(id)arg0 completionBlock:(id)arg1 ;
-(void)dealloc;


@end


#endif