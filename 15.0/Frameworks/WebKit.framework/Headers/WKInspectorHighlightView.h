// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WKINSPECTORHIGHLIGHTVIEW_H
#define WKINSPECTORHIGHLIGHTVIEW_H

@class UIView;



@interface WKInspectorHighlightView : UIView {
    RetainPtr<NSMutableArray<CAShapeLayer *>> _layers;
    RetainPtr<NSMutableArray<CALayer *>> _gridOverlayLayers;
}




-(id)_createGridOverlayLayer:(*void)arg0 scale:(CGFloat)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_createGridOverlayLayers:(*void)arg0 scale:(CGFloat)arg1 ;
-(void)_createLayers:(NSUInteger)arg0 ;
-(void)_layoutForNodeHighlight:(*void)arg0 offset:(unsigned int)arg1 ;
-(void)_layoutForNodeListHighlight:(*void)arg0 ;
-(void)_layoutForRectsHighlight:(*void)arg0 ;
-(void)_removeAllLayers;
-(void)dealloc;
-(void)update:(*void)arg0 scale:(CGFloat)arg1 ;


@end


#endif