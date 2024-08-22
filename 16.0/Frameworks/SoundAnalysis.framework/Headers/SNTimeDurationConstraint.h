// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SNTIMEDURATIONCONSTRAINT_H
#define SNTIMEDURATIONCONSTRAINT_H

@class NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SNTimeDurationConstraint : NSObject <NSCopying, NSSecureCoding>



@property (readonly) ? durationRange; // ivar: _durationRange
@property (readonly) NSArray *enumeratedDurations; // ivar: _enumeratedDurations
@property (readonly) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDurationRange:(struct ? )arg0 ;
-(id)initWithEnumeratedDurations:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif