// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSCOLLECTIONLAYOUTEDGESPACING_H
#define NSCOLLECTIONLAYOUTEDGESPACING_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "NSCollectionLayoutSpacing.h"

@interface NSCollectionLayoutEdgeSpacing : NSObject <NSCopying>

 {
    NSCollectionLayoutSpacing *_leading;
    NSCollectionLayoutSpacing *_top;
    NSCollectionLayoutSpacing *_trailing;
    NSCollectionLayoutSpacing *_bottom;
}


@property (readonly, nonatomic) NSCollectionLayoutSpacing *bottom;
@property (readonly, nonatomic) NSCollectionLayoutSpacing *leading;
@property (readonly, nonatomic) NSCollectionLayoutSpacing *top;
@property (readonly, nonatomic) NSCollectionLayoutSpacing *trailing;


+(id)defaultSpacing;
+(id)fixedSpacing:(CGFloat)arg0 ;
+(id)flexibleSpacing:(CGFloat)arg0 ;
+(id)spacingForLeading:(id)arg0 top:(id)arg1 trailing:(id)arg2 bottom:(id)arg3 ;
-(BOOL)_hasSpacing;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isSpacingFixedForEdge:(NSUInteger)arg0 ;
-(BOOL)isSpacingFlexibleForEdge:(NSUInteger)arg0 ;
-(CGFloat)spacingForEdge:(NSUInteger)arg0 ;
-(id)_externalDescription;
-(id)_spacingForEdge:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithLeading:(id)arg0 top:(id)arg1 trailing:(id)arg2 bottom:(id)arg3 ;
-(struct NSDirectionalEdgeInsets )edgeOutsets;


@end


#endif