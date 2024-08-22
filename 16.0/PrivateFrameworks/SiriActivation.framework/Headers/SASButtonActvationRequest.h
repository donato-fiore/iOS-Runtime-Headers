// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SASBUTTONACTVATIONREQUEST_H
#define SASBUTTONACTVATIONREQUEST_H



#import "SASActivationRequest.h"

@interface SASButtonActvationRequest : SASActivationRequest

@property (nonatomic) NSInteger buttonIdentifier; // ivar: _buttonIdentifier


-(BOOL)isButtonRequest;
-(BOOL)isDeviceButtonRequest;
-(BOOL)isHoldToTalkSource;
-(BOOL)isTestingRequest;
-(BOOL)isVoiceRequest;


@end


#endif