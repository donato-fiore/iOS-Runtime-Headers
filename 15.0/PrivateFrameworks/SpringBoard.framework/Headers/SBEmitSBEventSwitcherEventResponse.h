// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBEMITSBEVENTSWITCHEREVENTRESPONSE_H
#define SBEMITSBEVENTSWITCHEREVENTRESPONSE_H

@class NSDictionary;


#import "SBSwitcherModifierEventResponse.h"

@interface SBEmitSBEventSwitcherEventResponse : SBSwitcherModifierEventResponse

@property (readonly, nonatomic) NSUInteger eventType; // ivar: _eventType
@property (readonly, nonatomic) NSDictionary *payload; // ivar: _payload


-(NSInteger)type;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)initWithSBEventWithEventType:(NSUInteger)arg0 payload:(id)arg1 ;
-(id)succinctDescriptionBuilder;


@end


#endif