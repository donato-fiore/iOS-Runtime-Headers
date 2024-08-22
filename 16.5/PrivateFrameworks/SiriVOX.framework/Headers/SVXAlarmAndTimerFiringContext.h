// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SVXALARMANDTIMERFIRINGCONTEXT_H
#define SVXALARMANDTIMERFIRINGCONTEXT_H

@class NSOrderedSet;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SVXAlarmAndTimerFiringContext : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) BOOL hasOtherRunningTimers; // ivar: _hasOtherRunningTimers
@property (readonly, copy, nonatomic) NSOrderedSet *orderedFiringAlarms; // ivar: _orderedFiringAlarms
@property (readonly, copy, nonatomic) NSOrderedSet *orderedFiringTimers; // ivar: _orderedFiringTimers


+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_descriptionWithIndent:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOrderedFiringAlarms:(id)arg0 orderedFiringTimers:(id)arg1 hasOtherRunningTimers:(BOOL)arg2 ;
-(id)mutatedCopyWithMutator:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif