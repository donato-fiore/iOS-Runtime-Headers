// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSCLOUDKITMIRRORINGDELEGATESERIALIZATIONREQUESTRESULT_H
#define NSCLOUDKITMIRRORINGDELEGATESERIALIZATIONREQUESTRESULT_H

@class NSDictionary;


#import "NSCloudKitMirroringResult.h"

@interface NSCloudKitMirroringDelegateSerializationRequestResult : NSCloudKitMirroringResult

@property (readonly, nonatomic) NSDictionary *serializedObjects; // ivar: _serializedObjects


-(id)initWithRequest:(id)arg0 storeIdentifier:(id)arg1 serializedObjects:(id)arg2 error:(id)arg3 ;
-(void)dealloc;


@end


#endif