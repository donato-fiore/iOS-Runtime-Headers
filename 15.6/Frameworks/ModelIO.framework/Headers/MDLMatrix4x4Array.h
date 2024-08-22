// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MDLMATRIX4X4ARRAY_H
#define MDLMATRIX4X4ARRAY_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MDLMatrix4x4Array : NSObject <NSCopying>

 {
    VtValue _data;
}


@property (readonly, nonatomic) NSUInteger elementCount; // ivar: _elementCount
@property (readonly, nonatomic) NSUInteger precision;


-(NSUInteger)getDouble4x4Array:(struct ? *)arg0 maxCount:(NSUInteger)arg1 ;
-(NSUInteger)getFloat4x4Array:(struct ? *)arg0 maxCount:(NSUInteger)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithElementCount:(NSUInteger)arg0 ;
-(struct VtValue )defaultVtValue;
-(void)clear;
-(void)resetWithUsdAttribute:(*void)arg0 ;
-(void)resetWithUsdAttribute:(*void)arg0 time:(CGFloat)arg1 ;
-(void)setDouble4x4Array:(struct ? *)arg0 count:(NSUInteger)arg1 ;
-(void)setFloat4x4Array:(struct ? *)arg0 count:(NSUInteger)arg1 ;


@end


#endif