// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAMAPPEDDOMAINENTITY_H
#define SAMAPPEDDOMAINENTITY_H

@class NSString, NSData;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SAMappedDomainEntity : AceObject <SAAceSerializable>



@property (copy, nonatomic) NSString *appBundleId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSData *usoGraphPayload;


-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif