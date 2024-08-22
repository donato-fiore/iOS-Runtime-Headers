// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUPHOTODECORATION_H
#define PUPHOTODECORATION_H

@class UIColor;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PUPhotoDecoration : NSObject <NSCopying>



@property (copy, nonatomic) UIColor *borderColor; // ivar: _borderColor
@property (nonatomic) CGFloat borderWidth; // ivar: _borderWidth
@property (copy, nonatomic) UIColor *foregroundColor; // ivar: _foregroundColor


+(id)defaultDecoration;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)photoDecorationVariantsWithIncreasingAlpha:(NSInteger)arg0 ;
-(id)photoDecorationVariantsWithIncreasingBorderBrightness:(NSInteger)arg0 ;


@end


#endif