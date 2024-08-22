// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBDISPLAYITEMLAYOUTATTRIBUTES_H
#define SBDISPLAYITEMLAYOUTATTRIBUTES_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SBDisplayItemLayoutAttributes : NSObject <NSCopying>

 {
    NSUInteger _hash;
}


@property (readonly, nonatomic) SBDisplayItemAttributedSize attributedSize; // ivar: _attributedSize
@property (readonly, nonatomic) SBDisplayItemAttributedSize attributedUserSizeBeforeOverlapping; // ivar: _attributedUserSizeBeforeOverlapping
@property (readonly, nonatomic) NSInteger contentOrientation; // ivar: _contentOrientation
@property (readonly, nonatomic) NSInteger lastInteractionTime; // ivar: _lastInteractionTime
@property (readonly, nonatomic) CGPoint normalizedCenter; // ivar: _normalizedCenter
@property (readonly, nonatomic) NSInteger occlusionState; // ivar: _occlusionState
@property (readonly, nonatomic) NSInteger sizingPolicy; // ivar: _sizingPolicy
@property (readonly, nonatomic) CGPoint unoccludedPeekingCenter; // ivar: _unoccludedPeekingCenter


+(id)layoutAttributesWithProtobufRepresentation:(id)arg0 ;
+(struct CGPoint )normalizedPointForPoint:(struct CGPoint )arg0 inBounds:(struct CGRect )arg1 ;
+(struct CGSize )normalizedSizeForSize:(struct CGSize )arg0 inBounds:(struct CGRect )arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)attributesByModifyingAttributedSize:(struct SBDisplayItemAttributedSize )arg0 ;
-(id)attributesByModifyingAttributedUserSizeBeforeOverlapping:(struct SBDisplayItemAttributedSize )arg0 ;
-(id)attributesByModifyingContentOrientation:(NSInteger)arg0 ;
-(id)attributesByModifyingLastInteractionTime:(NSInteger)arg0 ;
-(id)attributesByModifyingNormalizedCenter:(struct CGPoint )arg0 ;
-(id)attributesByModifyingOcclusionState:(NSInteger)arg0 ;
-(id)attributesByModifyingSizingPolicy:(NSInteger)arg0 ;
-(id)attributesByModifyingUnoccludedPeekingCenter:(struct CGPoint )arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)initWithContentOrientation:(NSInteger)arg0 lastInteractionTime:(NSInteger)arg1 sizingPolicy:(NSInteger)arg2 attributedSize:(struct SBDisplayItemAttributedSize )arg3 normalizedCenter:(struct CGPoint )arg4 ;
-(id)initWithContentOrientation:(NSInteger)arg0 lastInteractionTime:(NSInteger)arg1 sizingPolicy:(NSInteger)arg2 attributedSize:(struct SBDisplayItemAttributedSize )arg3 normalizedCenter:(struct CGPoint )arg4 occlusionState:(NSInteger)arg5 attributedUserSizeBeforeOverlapping:(struct SBDisplayItemAttributedSize )arg6 unoccludedPeekingCenter:(struct CGPoint )arg7 ;
-(id)initWithPlistRepresentation:(id)arg0 ;
-(id)plistRepresentation;
-(id)protobufRepresentation;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(struct CGPoint )centerInBounds:(struct CGRect )arg0 ;
-(struct CGSize )_sizeForAttributedSize:(struct SBDisplayItemAttributedSize )arg0 inBounds:(struct CGRect )arg1 defaultSize:(struct CGSize )arg2 screenEdgePadding:(CGFloat)arg3 ;
-(struct CGSize )sizeInBounds:(struct CGRect )arg0 defaultSize:(struct CGSize )arg1 screenEdgePadding:(CGFloat)arg2 ;
-(struct CGSize )userSizeBeforeOverlappingInBounds:(struct CGRect )arg0 defaultSize:(struct CGSize )arg1 screenEdgePadding:(CGFloat)arg2 ;


@end


#endif