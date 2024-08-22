// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSCOLLECTIONLAYOUTDIMENSION_H
#define NSCOLLECTIONLAYOUTDIMENSION_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface NSCollectionLayoutDimension : NSObject <NSCopying>



@property (nonatomic) CGFloat dimension; // ivar: _dimension
@property (readonly, nonatomic) BOOL isAbsolute;
@property (readonly, nonatomic) BOOL isEstimated;
@property (readonly, nonatomic) BOOL isFractionalHeight;
@property (readonly, nonatomic) BOOL isFractionalWidth;
@property (nonatomic) NSInteger semantic; // ivar: _semantic


+(id)_dimensionWithDimension:(CGFloat)arg0 semantic:(NSInteger)arg1 ;
+(id)absoluteDimension:(CGFloat)arg0 ;
+(id)estimatedDimension:(CGFloat)arg0 ;
+(id)fractionalHeightDimension:(CGFloat)arg0 ;
+(id)fractionalWidthDimension:(CGFloat)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithDimension:(CGFloat)arg0 semantic:(NSInteger)arg1 ;


@end


#endif