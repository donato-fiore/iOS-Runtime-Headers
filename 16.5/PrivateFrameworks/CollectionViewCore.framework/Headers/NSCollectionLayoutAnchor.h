// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSCOLLECTIONLAYOUTANCHOR_H
#define NSCOLLECTIONLAYOUTANCHOR_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface NSCollectionLayoutAnchor : NSObject <NSCopying>



@property (nonatomic) CGPoint anchorPoint; // ivar: _anchorPoint
@property (nonatomic) NSUInteger edges; // ivar: _edges
@property (readonly, nonatomic) BOOL isAbsoluteOffset;
@property (readonly, nonatomic) BOOL isFractionalOffset;
@property (nonatomic) CGPoint offset; // ivar: _offset
@property (nonatomic) BOOL offsetIsUnitOffset; // ivar: _offsetIsUnitOffset


+(id)layoutAnchorWithAnchorPoint:(struct CGPoint )arg0 ;
+(id)layoutAnchorWithAnchorPoint:(struct CGPoint )arg0 offset:(struct CGPoint )arg1 ;
+(id)layoutAnchorWithAnchorPoint:(struct CGPoint )arg0 unitOffset:(struct CGPoint )arg1 ;
+(id)layoutAnchorWithEdges:(NSUInteger)arg0 ;
+(id)layoutAnchorWithEdges:(NSUInteger)arg0 absoluteOffset:(struct CGPoint )arg1 ;
+(id)layoutAnchorWithEdges:(NSUInteger)arg0 fractionalOffset:(struct CGPoint )arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithEdges:(NSUInteger)arg0 offset:(struct CGPoint )arg1 anchorPoint:(struct CGPoint )arg2 offsetIsUnitOffset:(BOOL)arg3 ;
-(struct CGRect )_itemFrameForContainerRect:(struct CGRect )arg0 itemSize:(struct CGSize )arg1 itemLayoutAnchor:(id)arg2 ;


@end


#endif