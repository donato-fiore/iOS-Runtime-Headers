// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DNDSTATEUPDATE_H
#define DNDSTATEUPDATE_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "DNDState.h"

@interface DNDStateUpdate : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSInteger options; // ivar: _options
@property (readonly, copy, nonatomic) DNDState *previousState; // ivar: _previousState
@property (readonly, nonatomic) NSUInteger reason; // ivar: _reason
@property (readonly, nonatomic) NSInteger source; // ivar: _source
@property (readonly, copy, nonatomic) DNDState *state; // ivar: _state


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPreviousState:(id)arg0 state:(id)arg1 reason:(NSUInteger)arg2 source:(NSInteger)arg3 options:(NSInteger)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif