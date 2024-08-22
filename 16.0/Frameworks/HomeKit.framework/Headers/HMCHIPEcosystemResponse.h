// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMCHIPECOSYSTEMRESPONSE_H
#define HMCHIPECOSYSTEMRESPONSE_H

@protocol NSSecureCoding;


#import "HMCHIPEcosystemMessage.h"

@interface HMCHIPEcosystemResponse : HMCHIPEcosystemMessage <NSSecureCoding>





+(BOOL)supportsSecureCoding;
+(id)responseFromExtensionItem:(id)arg0 error:(*id)arg1 ;
-(id)extensionItemRepresentation;
-(id)init;
-(id)initWithCoder:(id)arg0 ;


@end


#endif