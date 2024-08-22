// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBNEWWINDOWREQUESTSWITCHEREVENTRESPONSE_H
#define SBNEWWINDOWREQUESTSWITCHEREVENTRESPONSE_H

@class NSString;


#import "SBSwitcherModifierEventResponse.h"

@interface SBNewWindowRequestSwitcherEventResponse : SBSwitcherModifierEventResponse

@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier


-(NSInteger)type;
-(id)initWithBundleIdentifier:(id)arg0 ;


@end


#endif