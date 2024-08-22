// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _DUIPREVIEW_H
#define _DUIPREVIEW_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "UIColor.h"
#import "UIBezierPath.h"
#import "UIDragPreviewParameters.h"

@interface _DUIPreview : NSObject <NSSecureCoding, NSCopying>

 {
    CGSize _contentSize;
    CAPoint3D _originalCenterInCoordinateSpace;
}


@property (nonatomic) BOOL avoidAnimation; // ivar: _avoidAnimation
@property (copy, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (readonly, nonatomic) CGSize boundingSize;
@property (readonly, nonatomic) CGPoint contentOffset; // ivar: _contentOffset
@property (readonly, nonatomic) CGSize contentSize;
@property (nonatomic) unsigned int coordinateSpaceSourceContextID; // ivar: _coordinateSpaceSourceContextID
@property (nonatomic) NSUInteger coordinateSpaceSourceLayerRenderID; // ivar: _coordinateSpaceSourceLayerRenderID
@property (readonly, nonatomic) CGSize croppedScaledSize;
@property (readonly, nonatomic) UIBezierPath *effectiveShadowPath;
@property (nonatomic) BOOL hidesSourceView; // ivar: _hidesSourceView
@property (nonatomic) CGPoint initialBadgeLocation; // ivar: _initialBadgeLocation
@property (readonly, nonatomic) CGFloat liftAlpha;
@property (nonatomic) CGPoint liftAnchorPoint; // ivar: _liftAnchorPoint
@property (readonly, nonatomic) CGAffineTransform liftTransform;
@property (nonatomic) CGPoint originalCenter; // ivar: _originalCenter
@property (nonatomic) CGPoint originalCenterInCoordinateSpace;
@property (nonatomic) CGFloat originalRotation; // ivar: _originalRotation
@property (copy, nonatomic) UIBezierPath *outline; // ivar: _outline
@property (nonatomic) CGAffineTransform overrideStackTransform; // ivar: _overrideStackTransform
@property (readonly, nonatomic, getter=isOversized) BOOL oversized;
@property (readonly, nonatomic) UIDragPreviewParameters *parameters;
@property (nonatomic) NSInteger preferredStackOrder; // ivar: _preferredStackOrder
@property (nonatomic) NSInteger previewMode; // ivar: _previewMode
@property (readonly, nonatomic) CGFloat scaleFactor;
@property (readonly, nonatomic) CGSize scaledSize;
@property (copy, nonatomic) UIBezierPath *shadowPath; // ivar: _shadowPath
@property (readonly, nonatomic) CGFloat stackAlpha;
@property (nonatomic) BOOL textMode;
@property (readonly, nonatomic) CGFloat topAlpha;
@property (readonly, nonatomic) CGPoint unscaledAnchorPoint;
@property (readonly, nonatomic) CGSize unscaledSize;
@property (readonly, nonatomic) CGSize viewScaleFactor; // ivar: _viewScaleFactor
@property (nonatomic) BOOL wantsSuppressedMask; // ivar: _wantsSuppressedMask


+(BOOL)supportsSecureCoding;
+(CGFloat)defaultStackAlpha;
+(id)defaultPreviewWithFrame:(struct CGRect )arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)_topOffset;
-(CGFloat)backAlpha;
-(id)_initWithView:(id)arg0 container:(id)arg1 parameters:(id)arg2 platformCenter:(struct CAPoint3D )arg3 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithBounds:(struct CGRect )arg0 outline:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithView:(id)arg0 container:(id)arg1 parameters:(id)arg2 ;
-(id)initWithView:(id)arg0 container:(id)arg1 parameters:(id)arg2 center:(struct CGPoint )arg3 ;
-(void)_applyPropertiesFromPreviewParameters:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif