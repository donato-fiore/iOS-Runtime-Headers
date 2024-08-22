// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBDISPLAYITEMLAYOUTATTRIBUTES_H
#define SBDISPLAYITEMLAYOUTATTRIBUTES_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SBDisplayItemLayoutAttributes : NSObject <NSCopying>

 {
    CGSize _size;
    CGPoint _center;
    CGSize _userConfiguredSizeBeforeOverlapping;
    NSUInteger _hash;
}


@property (readonly, nonatomic) NSInteger contentOrientation; // ivar: _contentOrientation
@property (readonly, nonatomic) CGPoint fullyOccludedPeekingCenter; // ivar: _fullyOccludedPeekingCenter
@property (readonly, nonatomic) NSInteger lastInteractionTime; // ivar: _lastInteractionTime
@property (readonly, nonatomic) NSInteger occlusionState; // ivar: _occlusionState
@property (readonly, nonatomic) NSInteger sizingPolicy; // ivar: _sizingPolicy


+(id)layoutAttributesWithProtobufRepresentation:(id)arg0 ;
+(struct CGPoint )normalizedPointForPoint:(struct CGPoint )arg0 inBounds:(struct CGRect )arg1 ;
+(struct CGSize )normalizedSizeForSize:(struct CGSize )arg0 inBounds:(struct CGRect )arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)attributesByModifyingCenter:(struct CGPoint )arg0 ;
-(id)attributesByModifyingContentOrientation:(NSInteger)arg0 ;
-(id)attributesByModifyingFullyOccludedPeekingCenter:(struct CGPoint )arg0 ;
-(id)attributesByModifyingLastInteractionTime:(NSInteger)arg0 ;
-(id)attributesByModifyingOcclusionState:(NSInteger)arg0 ;
-(id)attributesByModifyingSize:(struct CGSize )arg0 ;
-(id)attributesByModifyingSize:(struct CGSize )arg0 center:(struct CGPoint )arg1 ;
-(id)attributesByModifyingSizingPolicy:(NSInteger)arg0 ;
-(id)attributesByModifyingUserConfiguredSizeBeforeOverlapping:(struct CGSize )arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)initWithContentOrientation:(NSInteger)arg0 lastInteractionTime:(NSInteger)arg1 sizingPolicy:(NSInteger)arg2 size:(struct CGSize )arg3 center:(struct CGPoint )arg4 ;
-(id)initWithContentOrientation:(NSInteger)arg0 lastInteractionTime:(NSInteger)arg1 sizingPolicy:(NSInteger)arg2 size:(struct CGSize )arg3 center:(struct CGPoint )arg4 occlusionState:(NSInteger)arg5 userConfiguredSizeBeforeOverlapping:(struct CGSize )arg6 fullyOccludedPeekingCenter:(struct CGPoint )arg7 ;
-(id)initWithPlistRepresentation:(id)arg0 ;
-(id)plistRepresentation;
-(id)protobufRepresentation;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(struct CGPoint )centerInBounds:(struct CGRect )arg0 ;
-(struct CGSize )sizeInBounds:(struct CGRect )arg0 ;
-(struct CGSize )userConfiguredSizeBeforeOverlappingInBounds:(struct CGRect )arg0 ;


@end


#endif