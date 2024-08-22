// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVFLOAT64RANGE_H
#define AVFLOAT64RANGE_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface AVFloat64Range : NSObject <NSCopying>



@property (readonly, nonatomic) CGFloat maximum; // ivar: _maximum
@property (readonly, nonatomic) CGFloat minimum; // ivar: _minimum


+(id)float64RangeWithAudioValueRange:(struct AudioValueRange )arg0 ;
+(id)float64RangeWithMinimum:(CGFloat)arg0 maximum:(CGFloat)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithAudioValueRange:(struct AudioValueRange )arg0 ;
-(id)initWithMinimum:(CGFloat)arg0 maximum:(CGFloat)arg1 ;


@end


#endif