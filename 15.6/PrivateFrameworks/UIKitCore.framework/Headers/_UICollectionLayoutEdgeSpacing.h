// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UICOLLECTIONLAYOUTEDGESPACING_H
#define _UICOLLECTIONLAYOUTEDGESPACING_H

@protocol NSCopying, _UICollectionLayoutAPIRespresenting;

#import <Foundation/Foundation.h>

#import "_UICollectionLayoutSpacing.h"

@interface _UICollectionLayoutEdgeSpacing : NSObject <NSCopying, _UICollectionLayoutAPIRespresenting>

 {
    _UICollectionLayoutSpacing *_leading;
    _UICollectionLayoutSpacing *_top;
    _UICollectionLayoutSpacing *_trailing;
    _UICollectionLayoutSpacing *_bottom;
}


@property (readonly, nonatomic) _UICollectionLayoutSpacing *bottom;
@property (readonly, nonatomic) _UICollectionLayoutSpacing *leading;
@property (readonly, nonatomic) _UICollectionLayoutSpacing *top;
@property (readonly, nonatomic) _UICollectionLayoutSpacing *trailing;


+(id)defaultSpacing;
+(id)fixedSpacing:(CGFloat)arg0 ;
+(id)flexibleSpacing:(CGFloat)arg0 ;
+(id)spacingForLeading:(id)arg0 top:(id)arg1 trailing:(id)arg2 bottom:(id)arg3 ;
-(id)_apiRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithLeading:(id)arg0 top:(id)arg1 trailing:(id)arg2 bottom:(id)arg3 ;


@end


#endif