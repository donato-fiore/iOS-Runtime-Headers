// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIKBCONTAINERKEYVIEW_H
#define UIKBCONTAINERKEYVIEW_H



#import "UIKBKeyView.h"

@interface UIKBContainerKeyView : UIKBKeyView {
    UIKBKeyView *_keyView;
}




-(BOOL)hasRendered;
-(BOOL)requiresSublayers;
-(NSInteger)imageOrientationForLayer:(id)arg0 ;
-(id)contentsKeyView;
-(id)factory;
-(id)initWithFrame:(struct CGRect )arg0 keyplane:(id)arg1 key:(id)arg2 ;
-(id)key;
-(id)keyplane;
-(id)layerForRenderFlags:(NSInteger)arg0 ;
-(id)renderConfig;
-(struct CGRect )drawFrame;
-(void)changeBackgroundToActiveIfNecessary;
-(void)changeBackgroundToEnabled;
-(void)dealloc;
-(void)dimKeys:(id)arg0 ;
-(void)displayLayer:(id)arg0 ;
-(void)prepareForDisplay;
-(void)setDrawFrame:(struct CGRect )arg0 ;
-(void)setFactory:(id)arg0 ;
-(void)setNeedsDisplay;
-(void)setRenderConfig:(id)arg0 ;
-(void)setScreenTraits:(id)arg0 ;
-(void)updateForKeyplane:(id)arg0 key:(id)arg1 ;


@end


#endif