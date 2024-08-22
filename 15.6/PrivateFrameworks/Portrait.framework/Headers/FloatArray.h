// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FLOATARRAY_H
#define FLOATARRAY_H

@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface FloatArray : NSObject <NSCopying, NSMutableCopying>

 {
    *float _buffer;
}


@property (readonly, nonatomic) NSUInteger count; // ivar: _count
@property (readonly, nonatomic) *float floats;


-(BOOL)isEqualToFloatArray:(id)arg0 ;
-(BOOL)isEqualToFloatArray:(id)arg0 tolerance:(float)arg1 ;
-(NSUInteger)argMinimum;
-(float)floatAtIndex:(NSUInteger)arg0 ;
-(float)maximumDifferenceWithFloatArray:(id)arg0 ;
-(float)mean;
-(id)addingConstant:(float)arg0 ;
-(id)asArray;
-(id)asData;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithArray:(id)arg0 ;
-(id)initWithCount:(NSUInteger)arg0 ;
-(id)initWithData:(id)arg0 ;
-(id)initWithFloat:(float)arg0 repeatCount:(NSUInteger)arg1 ;
-(id)initWithFloatArray:(id)arg0 ;
-(id)initWithFloats:(*float)arg0 count:(NSUInteger)arg1 ;
-(id)initWithZeros:(NSUInteger)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)subtracting:(id)arg0 ;
-(void)dealloc;


@end


#endif