// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DMTUNKNOWNPAYLOAD_H
#define DMTUNKNOWNPAYLOAD_H

@class NSString, NSDictionary;
@protocol DMTConfigurationPayload;


#import "DMTConfigurationPayloadBase.h"

@interface DMTUnknownPayload : DMTConfigurationPayloadBase <DMTConfigurationPayload>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSDictionary *rawDictionary;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) NSString *uuid;


+(id)supportedPayloadTypes;


@end


#endif