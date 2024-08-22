// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CMPEDOMETERBIN_H
#define CMPEDOMETERBIN_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CMPedometerBin : NSObject <NSSecureCoding>



@property (readonly, nonatomic) CGFloat begin; // ivar: _begin
@property (readonly, nonatomic) CGFloat center;
@property (readonly, nonatomic) CGFloat end; // ivar: _end
@property (readonly, nonatomic) CGFloat lowerQuartile;
@property (readonly, nonatomic) NSInteger state; // ivar: _state
@property (readonly, nonatomic) CGFloat upperQuartile;
@property (readonly, nonatomic) CGFloat valueOut; // ivar: _valueOut


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithValueOut:(CGFloat)arg0 begin:(CGFloat)arg1 end:(CGFloat)arg2 state:(NSInteger)arg3 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif