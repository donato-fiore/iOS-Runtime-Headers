// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UICOLLECTIONLAYOUTDIMENSION_H
#define _UICOLLECTIONLAYOUTDIMENSION_H

@protocol NSCopying, _UICollectionLayoutAPIRespresenting;

#import <Foundation/Foundation.h>


@interface _UICollectionLayoutDimension : NSObject <NSCopying, _UICollectionLayoutAPIRespresenting>

 {
    NSInteger _semantic;
    CGFloat _dimension;
}


@property (readonly, nonatomic) CGFloat dimension;
@property (readonly, nonatomic) BOOL isAbsolute;
@property (readonly, nonatomic) BOOL isEstimated;
@property (readonly, nonatomic) BOOL isFractionalHeight;
@property (readonly, nonatomic) BOOL isFractionalWidth;


+(id)absolute:(CGFloat)arg0 ;
+(id)estimated:(CGFloat)arg0 ;
+(id)fractionalHeight:(CGFloat)arg0 ;
+(id)fractionalWidth:(CGFloat)arg0 ;
-(id)_apiRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithSemantic:(NSInteger)arg0 dimension:(CGFloat)arg1 ;


@end


#endif