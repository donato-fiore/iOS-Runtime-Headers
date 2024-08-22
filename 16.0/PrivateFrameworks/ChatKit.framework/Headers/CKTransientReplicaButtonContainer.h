// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKTRANSIENTREPLICABUTTONCONTAINER_H
#define CKTRANSIENTREPLICABUTTONCONTAINER_H

@class UIView, CALayer;



@interface CKTransientReplicaButtonContainer : UIView

@property (readonly, nonatomic) UIView *cancelButtonCircle; // ivar: _cancelButtonCircle
@property (readonly, nonatomic) CALayer *cancelButtonGlyphLayer; // ivar: _cancelButtonGlyphLayer
@property (readonly, nonatomic) UIView *sendButtonCircle; // ivar: _sendButtonCircle
@property (readonly, nonatomic) CALayer *sendButtonGlyphLayer; // ivar: _sendButtonGlyphLayer


-(id)_glyphLayerForButtonAnimationWithImage:(id)arg0 ;
-(id)_invertedCircularFillGlyph:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 hasDarkVibrancy:(BOOL)arg1 isInDarkMode:(BOOL)arg2 color:(id)arg3 sendColor:(char)arg4 ;


@end


#endif