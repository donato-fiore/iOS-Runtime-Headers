// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRRENDERINGBACKDROPVIEW_H
#define PRRENDERINGBACKDROPVIEW_H



#import "PRRenderingView.h"

@interface PRRenderingBackdropView : PRRenderingView

@property (readonly, nonatomic) CGFloat backlightProgress; // ivar: _backlightProgress
@property (readonly, nonatomic) CGFloat linearBacklightProgress; // ivar: _linearBacklightProgress
@property (nonatomic) CGFloat targetBacklightProgress; // ivar: _targetBacklightProgress
@property (nonatomic) CGFloat targetLinearBacklightProgress; // ivar: _targetLinearBacklightProgress


+(Class)layerClass;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg0 ;
-(id)_renderingLayer;
-(id)initWithOwner:(id)arg0 scene:(id)arg1 ;
-(void)layoutSublayersOfLayer:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif