// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _DUIPREVIEW_H
#define _DUIPREVIEW_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "UIColor.h"
#import "UIBezierPath.h"
#import "UIDragPreviewParameters.h"

@interface _DUIPreview : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) BOOL avoidAnimation; // ivar: _avoidAnimation
@property (readonly, nonatomic) CGFloat backAlpha;
@property (copy, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (readonly, nonatomic) CGSize boundingSize;
@property (readonly, nonatomic) CGPoint contentOffset; // ivar: _contentOffset
@property (readonly, nonatomic) CGSize contentSize; // ivar: _contentSize
@property (nonatomic) unsigned int coordinateSpaceSourceContextID; // ivar: _coordinateSpaceSourceContextID
@property (nonatomic) NSUInteger coordinateSpaceSourceLayerRenderID; // ivar: _coordinateSpaceSourceLayerRenderID
@property (readonly, nonatomic) CGPoint croppedScaledAnchorPoint;
@property (readonly, nonatomic) CGSize croppedScaledSize;
@property (readonly, nonatomic) UIBezierPath *effectiveShadowPath;
@property (nonatomic) BOOL fadesHorizontally; // ivar: _fadesHorizontally
@property (nonatomic) BOOL fadesVertically; // ivar: _fadesVertically
@property (nonatomic) BOOL hidesSourceView; // ivar: _hidesSourceView
@property (readonly, nonatomic) CGFloat liftAlpha;
@property (nonatomic) CGPoint liftAnchorPoint; // ivar: _liftAnchorPoint
@property (readonly, nonatomic) CGAffineTransform liftTransform;
@property (nonatomic) CGPoint originalCenter; // ivar: _originalCenter
@property (nonatomic) CGPoint originalCenterInCoordinateSpace; // ivar: _originalCenterInCoordinateSpace
@property (nonatomic) CGFloat originalRotation; // ivar: _originalRotation
@property (copy, nonatomic) UIBezierPath *outline; // ivar: _outline
@property (readonly, nonatomic, getter=isOversized) BOOL oversized;
@property (readonly, nonatomic) UIDragPreviewParameters *parameters;
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
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithBounds:(struct CGRect )arg0 outline:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithView:(id)arg0 container:(id)arg1 parameters:(id)arg2 ;
-(id)initWithView:(id)arg0 container:(id)arg1 parameters:(id)arg2 center:(struct CGPoint )arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif