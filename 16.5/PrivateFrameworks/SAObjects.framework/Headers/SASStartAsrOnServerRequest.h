// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SASSTARTASRONSERVERREQUEST_H
#define SASSTARTASRONSERVERREQUEST_H

@class NSNumber;


#import "SASStartSpeechRequest.h"

@interface SASStartAsrOnServerRequest : SASStartSpeechRequest

@property (copy, nonatomic) NSNumber *runCamFtm;


-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif