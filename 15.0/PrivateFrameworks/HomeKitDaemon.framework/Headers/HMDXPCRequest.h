// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDXPCREQUEST_H
#define HMDXPCREQUEST_H

@class HMFObject, NSString, NSDate;



@interface HMDXPCRequest : HMFObject

@property (readonly, nonatomic) NSString *messageName; // ivar: _messageName
@property (readonly) NSInteger qualityOfService; // ivar: _qualityOfService
@property (readonly, copy, nonatomic) id *responseHandler; // ivar: _responseHandler
@property (readonly, nonatomic) NSDate *startTime; // ivar: _startTime


-(id)initWithMessageName:(id)arg0 qualityOfService:(NSInteger)arg1 responseHandler:(id)arg2 ;


@end


#endif