// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBPREEMPTANIMATIONSWITCHEREVENTRESPONSE_H
#define SBPREEMPTANIMATIONSWITCHEREVENTRESPONSE_H



#import "SBSwitcherModifierEventResponse.h"

@interface SBPreemptAnimationSwitcherEventResponse : SBSwitcherModifierEventResponse

@property (readonly, nonatomic) NSUInteger options; // ivar: _options


-(NSInteger)type;
-(id)initWithOptions:(NSUInteger)arg0 ;


@end


#endif