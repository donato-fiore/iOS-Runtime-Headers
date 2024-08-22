// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WKINSPECTORHIGHLIGHTVIEW_H
#define WKINSPECTORHIGHLIGHTVIEW_H

@class UIView;



@interface WKInspectorHighlightView : UIView {
    RetainPtr<NSMutableArray<CAShapeLayer *>> _layers;
    optional<WebCore::InspectorOverlay::Highlight> _highlight;
}




-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_createLayers:(NSUInteger)arg0 ;
-(void)_layoutForNodeHighlight:(*void)arg0 offset:(unsigned int)arg1 ;
-(void)_layoutForNodeListHighlight:(*void)arg0 ;
-(void)_layoutForRectsHighlight:(*void)arg0 ;
-(void)_removeAllLayers;
-(void)dealloc;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)update:(*void)arg0 scale:(CGFloat)arg1 frame:(struct FloatRect *)arg2 ;


@end


#endif