// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UITARGETEDPREVIEW_H
#define UITARGETEDPREVIEW_H

@class NSArray;
@protocol NSCopying, _UIPreviewProvider, NSCopying><NSObject;

#import <Foundation/Foundation.h>

#import "_UIShape.h"
#import "UIView.h"
#import "UIPreviewParameters.h"
#import "UIPreviewTarget.h"

@interface UITargetedPreview : NSObject <NSCopying>



@property (readonly, nonatomic) NSObject<_UIPreviewProvider> *_PreviewProvider; // ivar: __PreviewProvider
@property (retain, nonatomic, getter=_accessoryViews, setter=_setAccessoryViews:) NSArray *_accessoryViews; // ivar: __accessoryViews
@property (nonatomic) BOOL _captureHierarchyBelowSourceView; // ivar: __captureHierarchyBelowSourceView
@property (readonly, nonatomic) CGRect _frame;
@property (retain, nonatomic) NSObject<NSCopying><NSObject> *_internalIdentifier; // ivar: __internalIdentifier
@property (readonly, nonatomic, getter=_isLikelyOpaque) BOOL _isLikelyOpaque;
@property (readonly, nonatomic) _UIShape *_outlineShape;
@property (nonatomic, getter=_prefersUnmaskedPlatterStyle, setter=_setPrefersUnmaskedPlatterStyle:) BOOL _prefersUnmaskedPlatterStyle;
@property (nonatomic) BOOL _springboardPlatterStyle;
@property (readonly, nonatomic, getter=_isVisible) BOOL _visible;
@property (nonatomic, getter=_isDefaultPreview, setter=_setDefaultPreview:) BOOL defaultPreview; // ivar: _defaultPreview
@property (readonly, nonatomic) BOOL hasCustomTarget; // ivar: _hasCustomTarget
@property (retain, nonatomic, setter=_setOverridePositionTrackingView:) UIView *overridePositionTrackingView; // ivar: _overridePositionTrackingView
@property (readonly, copy, nonatomic) UIPreviewParameters *parameters; // ivar: _parameters
@property (nonatomic, getter=_previewMode, setter=_setPreviewMode:) NSInteger previewMode;
@property (readonly, nonatomic) CGSize size;
@property (readonly, nonatomic) BOOL sourceViewIsInViewHierarchy; // ivar: _sourceViewIsInViewHierarchy
@property (readonly, nonatomic) UIPreviewTarget *target; // ivar: _target
@property (retain, nonatomic) NSArray *transferrableAnimationKeys; // ivar: _transferrableAnimationKeys
@property (readonly, nonatomic) UIView *view; // ivar: _view
@property (weak, nonatomic, getter=_viewToSnapshot, setter=_setViewToSnapshot:) UIView *viewToSnapshot; // ivar: _viewToSnapshot


+(id)new;
-(BOOL)_isRoughlyEqualToPreview:(id)arg0 ;
-(BOOL)_mayInferCornerRadiusFromVisiblePath;
-(BOOL)containsPoint:(struct CGPoint )arg0 fromView:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_defaultTargetForView:(id)arg0 withCenter:(struct CGPoint )arg1 version:(unsigned int)arg2 ;
-(id)_trueSourceViewIfPortal;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithView:(id)arg0 ;
-(id)initWithView:(id)arg0 parameters:(id)arg1 ;
-(id)initWithView:(id)arg0 parameters:(id)arg1 target:(id)arg2 ;
-(id)retargetedPreviewWithTarget:(id)arg0 ;
-(void)dealloc;


@end


#endif