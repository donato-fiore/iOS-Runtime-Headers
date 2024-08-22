// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBPREFERENCECHANGEDODGINGMODIFIEREVENT_H
#define SBPREFERENCECHANGEDODGINGMODIFIEREVENT_H

@class NSString;


#import "SBDodgingModifierEvent.h"

@interface SBPreferenceChangeDodgingModifierEvent : SBDodgingModifierEvent

@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSUInteger phase; // ivar: _phase
@property (readonly, nonatomic) NSUInteger style; // ivar: _style


-(NSUInteger)type;
-(id)initWithIdentifier:(id)arg0 phase:(NSUInteger)arg1 style:(NSUInteger)arg2 ;


@end


#endif