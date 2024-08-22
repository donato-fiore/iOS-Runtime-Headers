// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVCAPTUREDEVICECONTROLREQUEST_H
#define AVCAPTUREDEVICECONTROLREQUEST_H


#import <Foundation/Foundation.h>


@interface AVCaptureDeviceControlRequest : NSObject

@property (readonly, copy, nonatomic) id *completionBlock; // ivar: _completionBlock
@property (nonatomic) int errorCode; // ivar: _errorCode
@property (readonly, nonatomic) int requestID; // ivar: _requestID


+(id)deviceControlRequestWithCompletionBlock:(id)arg0 ;
-(id)_initWithCompletionBlock:(id)arg0 ;
-(void)dealloc;


@end


#endif