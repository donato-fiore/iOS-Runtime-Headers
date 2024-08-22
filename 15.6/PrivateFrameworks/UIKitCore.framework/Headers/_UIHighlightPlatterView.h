// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIHIGHLIGHTPLATTERVIEW_H
#define _UIHIGHLIGHTPLATTERVIEW_H



#import "UIView.h"
#import "_UIPortalView.h"
#import "_UIPlatterSoftShadowView.h"
#import "UITargetedPreview.h"

@interface _UIHighlightPlatterView : UIView

@property (nonatomic) CGFloat backgroundAlpha; // ivar: _backgroundAlpha
@property (retain, nonatomic) UIView *backgroundView; // ivar: _backgroundView
@property (retain, nonatomic) _UIPortalView *portalView; // ivar: _portalView
@property (nonatomic) CGFloat shadowAlpha; // ivar: _shadowAlpha
@property (retain, nonatomic) _UIPlatterSoftShadowView *shadowView; // ivar: _shadowView
@property (retain, nonatomic) UITargetedPreview *targetedPreview; // ivar: _targetedPreview


-(BOOL)_isEligibleForFocusOcclusion;
-(id)initWithTargetedPreview:(id)arg0 ;


@end


#endif