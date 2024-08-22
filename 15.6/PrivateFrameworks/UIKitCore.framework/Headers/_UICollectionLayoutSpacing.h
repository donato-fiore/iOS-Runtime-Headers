// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UICOLLECTIONLAYOUTSPACING_H
#define _UICOLLECTIONLAYOUTSPACING_H

@protocol NSCopying, _UICollectionLayoutAPIRespresenting;

#import <Foundation/Foundation.h>


@interface _UICollectionLayoutSpacing : NSObject <NSCopying, _UICollectionLayoutAPIRespresenting>

 {
    CGFloat _spacing;
    BOOL _isFlexible;
}


@property (readonly, nonatomic) BOOL isFixedSpacing;
@property (readonly, nonatomic) BOOL isFlexibleSpacing;
@property (readonly, nonatomic) CGFloat spacing;


+(id)defaultSpacing;
+(id)fixedSpacing:(CGFloat)arg0 ;
+(id)flexibleSpacing:(CGFloat)arg0 ;
-(id)_apiRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithSpacing:(CGFloat)arg0 flexible:(BOOL)arg1 ;


@end


#endif