// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UICOLLECTIONLAYOUTANCHOR_H
#define _UICOLLECTIONLAYOUTANCHOR_H

@protocol NSCopying, _UICollectionLayoutAPIRespresenting;

#import <Foundation/Foundation.h>


@interface _UICollectionLayoutAnchor : NSObject <NSCopying, _UICollectionLayoutAPIRespresenting>

 {
    NSUInteger _edges;
    CGPoint _offset;
    CGPoint _anchorPoint;
    BOOL _offsetIsUnitOffset;
}


@property (readonly, nonatomic) CGPoint anchorPoint;
@property (readonly, nonatomic) NSUInteger edges;
@property (readonly, nonatomic) CGPoint offset;


+(id)layoutAnchorWithAnchorPoint:(struct CGPoint )arg0 ;
+(id)layoutAnchorWithAnchorPoint:(struct CGPoint )arg0 offset:(struct CGPoint )arg1 ;
+(id)layoutAnchorWithAnchorPoint:(struct CGPoint )arg0 unitOffset:(struct CGPoint )arg1 ;
+(id)layoutAnchorWithEdges:(NSUInteger)arg0 ;
+(id)layoutAnchorWithEdges:(NSUInteger)arg0 offset:(struct CGPoint )arg1 ;
+(id)layoutAnchorWithEdges:(NSUInteger)arg0 unitOffset:(struct CGPoint )arg1 ;
-(id)_apiRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithEdges:(NSUInteger)arg0 offset:(struct CGPoint )arg1 anchorPoint:(struct CGPoint )arg2 offsetIsUnitOffset:(BOOL)arg3 ;


@end


#endif