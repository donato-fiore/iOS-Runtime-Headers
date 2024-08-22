// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBINSERTIONDODGINGMODIFIEREVENT_H
#define SBINSERTIONDODGINGMODIFIEREVENT_H

@class NSString;


#import "SBDodgingModifierEvent.h"

@interface SBInsertionDodgingModifierEvent : SBDodgingModifierEvent

@property (readonly, nonatomic) CGPoint center; // ivar: _center
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) CGSize size; // ivar: _size


-(NSUInteger)type;
-(id)initWithIdentifier:(id)arg0 center:(struct CGPoint )arg1 size:(struct CGSize )arg2 ;


@end


#endif