// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UITARGETEDDRAGPREVIEW_H
#define UITARGETEDDRAGPREVIEW_H

@class NSDictionary, NSString;
@protocol _UIDragPreviewProvider;


#import "UITargetedPreview.h"
#import "_DUIPreview.h"
#import "_UIDraggingImageComponent.h"
#import "UIView.h"

@interface UITargetedDragPreview : UITargetedPreview <_UIDragPreviewProvider>

 {
    BOOL _didSetLiftAnchorPoint;
    _DUIPreview *_duiPreview;
    _UIDraggingImageComponent *_imageComponent;
}


@property (nonatomic, getter=_applyTargetTransformToFlock, setter=_setApplyTargetTransformToFlock:) BOOL _applyTargetTransformToFlock; // ivar: __applyTargetTransformToFlock
@property (readonly, nonatomic) NSObject<_UIDragPreviewProvider> *_dragPreviewProvider;
@property (readonly, nonatomic) _DUIPreview *_duiPreview;
@property (nonatomic, setter=_setInitialBadgeLocation:) CGPoint _initialBadgeLocation; // ivar: __initialBadgeLocation
@property (nonatomic, setter=_setPreferredStackOrder:) NSInteger _preferredStackOrder; // ivar: __preferredStackOrder
@property (copy, nonatomic) NSDictionary *_springboardParameters; // ivar: __springboardParameters
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=_isDefaultPreview, setter=_setDefaultPreview:) BOOL defaultPreview;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGPoint liftAnchorPoint; // ivar: _liftAnchorPoint
@property (nonatomic, getter=_preventAfterScreenUpdatesSnapshot, setter=_setPreventAfterScreenUpdatesSnapshot:) BOOL preventAfterScreenUpdatesSnapshot; // ivar: _preventAfterScreenUpdatesSnapshot
@property (readonly) Class superclass;
@property (weak, nonatomic, getter=_viewToSnapshot, setter=_setViewToSnapshot:) UIView *viewToSnapshot;


+(id)previewForURL:(id)arg0 target:(id)arg1 ;
+(id)previewForURL:(id)arg0 title:(id)arg1 target:(id)arg2 ;
-(id)imageComponent;
-(id)initWithView:(id)arg0 parameters:(id)arg1 target:(id)arg2 ;
-(id)retargetedPreviewWithTarget:(id)arg0 ;
-(void)_resetPreview;
-(void)_setPreviewMode:(NSInteger)arg0 ;
-(void)takeLiftAnchorPoint:(struct CGPoint )arg0 fromView:(id)arg1 ;


@end


#endif