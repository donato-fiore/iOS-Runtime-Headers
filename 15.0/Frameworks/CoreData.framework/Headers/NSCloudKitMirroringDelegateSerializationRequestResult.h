// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSCLOUDKITMIRRORINGDELEGATESERIALIZATIONREQUESTRESULT_H
#define NSCLOUDKITMIRRORINGDELEGATESERIALIZATIONREQUESTRESULT_H

@class NSDictionary;


#import "NSCloudKitMirroringResult.h"

@interface NSCloudKitMirroringDelegateSerializationRequestResult : NSCloudKitMirroringResult

@property (readonly, nonatomic) NSDictionary *serializedObjects; // ivar: _serializedObjects


-(id)initWithRequest:(id)arg0 serializedObjects:(id)arg1 error:(id)arg2 ;
-(void)dealloc;


@end


#endif