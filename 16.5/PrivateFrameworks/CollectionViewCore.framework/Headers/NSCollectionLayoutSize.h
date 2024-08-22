// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSCOLLECTIONLAYOUTSIZE_H
#define NSCOLLECTIONLAYOUTSIZE_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "NSCollectionLayoutDimension.h"

@interface NSCollectionLayoutSize : NSObject <NSCopying>



@property (retain, nonatomic) NSCollectionLayoutDimension *heightDimension; // ivar: _heightDimension
@property (nonatomic) NSInteger heightSemantic; // ivar: _heightSemantic
@property (nonatomic) CGSize size; // ivar: _size
@property (retain, nonatomic) NSCollectionLayoutDimension *widthDimension; // ivar: _widthDimension
@property (nonatomic) NSInteger widthSemantic; // ivar: _widthSemantic


+(id)sizeWithAbsoluteSize:(struct CGSize )arg0 ;
+(id)sizeWithContainerWidthFactor:(CGFloat)arg0 containerHeightFactor:(CGFloat)arg1 ;
+(id)sizeWithSize:(struct CGSize )arg0 widthSemantic:(NSInteger)arg1 heightSemantic:(NSInteger)arg2 ;
+(id)sizeWithWidth:(CGFloat)arg0 widthSemantic:(NSInteger)arg1 height:(CGFloat)arg2 heightSemantic:(NSInteger)arg3 ;
+(id)sizeWithWidthDimension:(id)arg0 heightDimension:(id)arg1 ;
-(BOOL)_isEstimatedForAxis:(NSUInteger)arg0 ;
-(BOOL)isContainerSize;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEstimated;
-(NSUInteger)_containerSizeDependentAxes;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithSize:(struct CGSize )arg0 widthSemantic:(NSInteger)arg1 heightSemantic:(NSInteger)arg2 width:(id)arg3 height:(id)arg4 ;
-(struct CGSize )_effectiveSizeForContainer:(id)arg0 ;
-(struct CGSize )_effectiveSizeForContainer:(id)arg0 displayScale:(CGFloat)arg1 ignoringInsets:(BOOL)arg2 ;
-(struct CGSize )_effectiveSizeForContainer:(id)arg0 ignoringInsets:(BOOL)arg1 ;


@end


#endif