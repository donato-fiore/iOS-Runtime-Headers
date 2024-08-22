// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIBOUNDINGPATH_H
#define _UIBOUNDINGPATH_H

@protocol NSSecureCoding, UICoordinateSpace;

#import <Foundation/Foundation.h>


@interface _UIBoundingPath : NSObject <NSSecureCoding>



@property (weak, nonatomic) NSObject<UICoordinateSpace> *coordinateSpace; // ivar: _coordinateSpace
@property (readonly, nonatomic) BOOL isNonRectangular;


+(BOOL)supportsSecureCoding;
-(BOOL)validateForCoordinateSpace;
-(id)_imageRepresentation;
-(id)boundingPathForCoordinateSpace:(id)arg0 ;
-(id)boundingPathForCoordinateSpace:(id)arg0 withCornerRadii:(struct UIRectCornerRadii )arg1 orientation:(NSInteger)arg2 scale:(CGFloat)arg3 ;
-(id)debugQuickLookObject;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCoordinateSpace:(id)arg0 ;
-(struct CGRect )_inscribedRectInBoundingPathAndRect:(struct CGRect )arg0 byInsettingRect:(struct CGRect )arg1 onEdges:(NSUInteger)arg2 withOptions:(NSUInteger)arg3 ;
-(struct CGRect )_inscribedRectInBoundingRect:(struct CGRect )arg0 byInsettingRect:(struct CGRect )arg1 onEdges:(NSUInteger)arg2 ;
-(struct CGRect )_largestInscribedRectInBoundingPathAndRect:(struct CGRect )arg0 withCenter:(struct CGPoint )arg1 aspectRatio:(CGFloat)arg2 ;
-(struct CGRect )_largestInscribedRectInBoundingRect:(struct CGRect )arg0 withCenter:(struct CGPoint )arg1 aspectRatio:(CGFloat)arg2 ;
-(struct CGRect )_rectTuckedAgainstEdge:(NSUInteger)arg0 ofBoundingPathAndRect:(struct CGRect )arg1 withSize:(CGFloat)arg2 cornerRadii:(struct UIRectCornerRadii )arg3 minimumPadding:(CGFloat)arg4 ;
-(struct CGRect )_rectTuckedAgainstEdge:(NSUInteger)arg0 ofBoundingRect:(struct CGRect )arg1 withSize:(CGFloat)arg2 minimumPadding:(CGFloat)arg3 ;
-(struct CGRect )_rectTuckedInCorner:(NSUInteger)arg0 ofBoundingPathAndRect:(struct CGRect )arg1 withSize:(struct CGSize )arg2 cornerRadii:(struct UIRectCornerRadii )arg3 minimumPadding:(CGFloat)arg4 ;
-(struct CGRect )_rectTuckedInCorner:(NSUInteger)arg0 ofBoundingRect:(struct CGRect )arg1 withSize:(struct CGSize )arg2 minimumPadding:(CGFloat)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif