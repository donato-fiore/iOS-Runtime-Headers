// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSNDARRAYRANDOMSTATEDESCRIPTOR_H
#define MPSNDARRAYRANDOMSTATEDESCRIPTOR_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MPSNDArrayRandomStateDescriptor : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) unsigned int algorithm; // ivar: _algorithm
@property (readonly, nonatomic) *unsigned int state; // ivar: _state
@property (readonly, nonatomic) NSUInteger stateLength;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)exportStateToNDArray:(id)arg0 ;
-(id)init;
-(id)initPhiloxStateDescriptorWithCounterLow:(NSUInteger)arg0 counterHigh:(NSUInteger)arg1 key:(NSUInteger)arg2 ;
-(id)initPhiloxStateDescriptorWithSeed:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif