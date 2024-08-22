// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMCHIPECOSYSTEMREQUEST_H
#define HMCHIPECOSYSTEMREQUEST_H

@protocol NSSecureCoding;


#import "HMCHIPEcosystemMessage.h"

@interface HMCHIPEcosystemRequest : HMCHIPEcosystemMessage <NSSecureCoding>





+(BOOL)supportsSecureCoding;
+(id)requestFromExtensionItem:(id)arg0 error:(*id)arg1 ;
+(id)unknownRequestError;
-(id)extensionItemRepresentation;
-(id)init;
-(id)initWithCoder:(id)arg0 ;


@end


#endif