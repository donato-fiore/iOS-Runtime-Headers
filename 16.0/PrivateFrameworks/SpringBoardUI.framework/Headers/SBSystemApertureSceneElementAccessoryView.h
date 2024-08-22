// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSYSTEMAPERTURESCENEELEMENTACCESSORYVIEW_H
#define SBSYSTEMAPERTURESCENEELEMENTACCESSORYVIEW_H

@class UIView;


#import "SBSystemApertureSceneElementAccessoryPortalView.h"

@interface SBSystemApertureSceneElementAccessoryView : UIView

@property (nonatomic) NSUInteger layerRenderingId; // ivar: _layerRenderingId
@property (readonly, nonatomic) SBSystemApertureSceneElementAccessoryPortalView *portalView; // ivar: _portalView
@property (nonatomic) CGSize preferredSize; // ivar: _preferredSize
@property (nonatomic) unsigned int sourceContextId; // ivar: _sourceContextId


-(BOOL)allowsReparentingByLayoutHost;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_configurePortalView;
-(void)layoutSubviews;
-(void)setSourceLayerRenderingId:(NSUInteger)arg0 contextId:(unsigned int)arg1 ;


@end


#endif