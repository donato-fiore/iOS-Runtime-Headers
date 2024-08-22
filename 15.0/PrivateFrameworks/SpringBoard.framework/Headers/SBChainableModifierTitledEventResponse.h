// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBCHAINABLEMODIFIERTITLEDEVENTRESPONSE_H
#define SBCHAINABLEMODIFIERTITLEDEVENTRESPONSE_H

@class NSString;


#import "SBChainableModifierEventResponse.h"

@interface SBChainableModifierTitledEventResponse : SBChainableModifierEventResponse

@property (readonly, nonatomic) NSString *title; // ivar: _title


+(id)responseWithTitle:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;


@end


#endif