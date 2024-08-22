// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBREMOVALDODGINGMODIFIEREVENT_H
#define SBREMOVALDODGINGMODIFIEREVENT_H

@class NSString;


#import "SBDodgingModifierEvent.h"

@interface SBRemovalDodgingModifierEvent : SBDodgingModifierEvent

@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier


-(NSUInteger)type;
-(id)initWithIdentifier:(id)arg0 ;


@end


#endif