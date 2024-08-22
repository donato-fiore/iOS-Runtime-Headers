// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GCHAPTICMOTOR_H
#define GCHAPTICMOTOR_H

@class NSString, NSMutableArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface GCHapticMotor : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) float amplitude; // ivar: _amplitude
@property (readonly, nonatomic) NSUInteger features; // ivar: _features
@property (nonatomic) float frequency; // ivar: _frequency
@property (readonly, nonatomic) int index; // ivar: _index
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSMutableArray *queuedTransients; // ivar: _queuedTransients


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIndex:(int)arg0 ;
-(id)initWithIndex:(int)arg0 name:(id)arg1 ;
-(id)initWithIndex:(int)arg0 name:(id)arg1 features:(NSUInteger)arg2 ;
-(id)initWithIndex:(int)arg0 name:(id)arg1 features:(NSUInteger)arg2 frequency:(float)arg3 amplitude:(float)arg4 ;
-(void)applyValuesFrom:(id)arg0 ;
-(void)drainQueuedTransients;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enqueueHapticTransientEvent:(id)arg0 ;


@end


#endif