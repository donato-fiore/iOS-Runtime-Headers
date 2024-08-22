// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FRRINGBUFFER_H
#define FRRINGBUFFER_H

@class NSDictionary, NSMutableArray;

#import <Foundation/Foundation.h>


@interface FRRingBuffer : NSObject

@property (nonatomic) NSUInteger capacity; // ivar: _capacity
@property (readonly, nonatomic) NSDictionary *dictionary;
@property (nonatomic) CGFloat max; // ivar: _max
@property (nonatomic) CGFloat min; // ivar: _min
@property (nonatomic) NSUInteger position; // ivar: _position
@property (retain, nonatomic) NSMutableArray *values; // ivar: _values


-(id)description;
-(id)initWithCapacity:(NSUInteger)arg0 ;
-(id)initWithCapacity:(NSUInteger)arg0 dictionary:(id)arg1 ;
-(void)insertValue:(CGFloat)arg0 ;


@end


#endif