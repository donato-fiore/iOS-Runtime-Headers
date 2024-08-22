// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBRELINQUISHSYSTEMAPERTUREELEMENTSUPPRESSIONEVENTRESPONSE_H
#define SBRELINQUISHSYSTEMAPERTUREELEMENTSUPPRESSIONEVENTRESPONSE_H

@class NSUUID;


#import "SBSwitcherModifierEventResponse.h"

@interface SBRelinquishSystemApertureElementSuppressionEventResponse : SBSwitcherModifierEventResponse

@property (readonly, nonatomic) NSUUID *invalidationIdentifier; // ivar: _invalidationIdentifier


-(NSInteger)type;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)initWithInvalidationIdentifier:(id)arg0 ;


@end


#endif