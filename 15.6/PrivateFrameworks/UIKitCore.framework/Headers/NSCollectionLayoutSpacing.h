// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSCOLLECTIONLAYOUTSPACING_H
#define NSCOLLECTIONLAYOUTSPACING_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface NSCollectionLayoutSpacing : NSObject <NSCopying>

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
-(BOOL)_hasSpacing;
-(BOOL)isEqual:(id)arg0 ;
-(id)_externalDescription;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithSpacing:(CGFloat)arg0 isFlexible:(BOOL)arg1 ;


@end


#endif