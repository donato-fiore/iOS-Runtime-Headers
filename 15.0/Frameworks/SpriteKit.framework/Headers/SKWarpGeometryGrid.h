// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKWARPGEOMETRYGRID_H
#define SKWARPGEOMETRYGRID_H

@protocol NSSecureCoding;


#import "SKWarpGeometry.h"

@interface SKWarpGeometryGrid : SKWarpGeometry <NSSecureCoding>

 {
    vector<float __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>> _sourcePositions;
    vector<float __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>> _destPositions;
    ? _dimensions;
    int _vertexCount;
    BOOL _isIdentityWarp;
}


@property ? destPositions;
@property (readonly, nonatomic) NSInteger numberOfColumns;
@property (readonly, nonatomic) NSInteger numberOfRows;
@property ? sourcePositions;
@property (readonly, nonatomic) NSInteger vertexCount;


+(id)gridWithColumns:(NSInteger)arg0 rows:(NSInteger)arg1 ;
+(id)gridWithColumns:(NSInteger)arg0 rows:(NSInteger)arg1 sourcePositionsdestPositions;
-(BOOL)isEqualToGrid:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)destPositionAtIndex;
-(id)gridByReplacingDestPositions;
-(id)gridByReplacingSourcePositions;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithColumns:(NSInteger)arg0 rows:(NSInteger)arg1 sourcePositionsdestPositions;
-(id)sourcePositionAtIndex;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif