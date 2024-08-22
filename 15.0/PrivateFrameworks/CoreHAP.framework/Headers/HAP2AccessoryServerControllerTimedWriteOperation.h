// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HAP2ACCESSORYSERVERCONTROLLERTIMEDWRITEOPERATION_H
#define HAP2ACCESSORYSERVERCONTROLLERTIMEDWRITEOPERATION_H

@protocol HAP2EncodedRequest;


#import "HAP2AccessoryServerControllerOperation.h"

@interface HAP2AccessoryServerControllerTimedWriteOperation : HAP2AccessoryServerControllerOperation

@property (readonly, nonatomic) NSObject<HAP2EncodedRequest> *executeRequest; // ivar: _executeRequest


-(id)initWithName:(id)arg0 controller:(id)arg1 encoding:(id)arg2 transport:(id)arg3 prepareRequest:(id)arg4 executeRequest:(id)arg5 endpoint:(id)arg6 mimeType:(id)arg7 timeout:(CGFloat)arg8 options:(NSUInteger)arg9 ;
-(void)_cleanUp;
-(void)_parseExecuteResponseData:(id)arg0 ;
-(void)_parsePrepareResponseData:(id)arg0 ;
-(void)_parseResponseData:(id)arg0 ;
-(void)_sendExecuteRequest;
-(void)_sendPrepareRequest;
-(void)_sendRequest;


@end


#endif