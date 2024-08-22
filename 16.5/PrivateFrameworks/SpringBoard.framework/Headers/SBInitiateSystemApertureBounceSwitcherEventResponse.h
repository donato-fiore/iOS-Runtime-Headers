// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBINITIATESYSTEMAPERTUREBOUNCESWITCHEREVENTRESPONSE_H
#define SBINITIATESYSTEMAPERTUREBOUNCESWITCHEREVENTRESPONSE_H

@class NSUUID;


#import "SBSwitcherModifierEventResponse.h"
#import "SBAppLayout.h"

@interface SBInitiateSystemApertureBounceSwitcherEventResponse : SBSwitcherModifierEventResponse

@property (readonly, nonatomic) SBAppLayout *appLayout; // ivar: _appLayout
@property (readonly, nonatomic) NSUUID *suppressionIdentifierToInvalidate; // ivar: _suppressionIdentifierToInvalidate


-(NSInteger)type;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)initWithAppLayout:(id)arg0 suppressionIdentifierToInvalidate:(id)arg1 ;


@end


#endif