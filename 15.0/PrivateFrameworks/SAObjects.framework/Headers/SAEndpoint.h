// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAENDPOINT_H
#define SAENDPOINT_H

@class NSString, NSDictionary;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SAEndpoint : AceObject <SAAceSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSDictionary *operations;
@property (copy, nonatomic) NSString *providerId;
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsAuthentication;


+(id)endpoint;
+(id)endpointWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif