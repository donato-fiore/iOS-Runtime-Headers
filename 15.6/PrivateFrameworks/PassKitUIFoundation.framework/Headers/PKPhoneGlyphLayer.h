// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPHONEGLYPHLAYER_H
#define PKPHONEGLYPHLAYER_H

@class PKMicaLayer, CALayer, CAFilter, NSString;



@interface PKPhoneGlyphLayer : PKMicaLayer {
    CALayer *_QRCodeLayer;
    CAFilter *_QRCodeColorFilter;
    CALayer *_highlightLayer;
    CGPoint _highlightOffscreenPosition;
    CGPoint _highlightOnscreenPosition;
    NSString *_phoneWiggleAnimationKey;
    *CGColor _primaryColor;
}


@property (nonatomic) BOOL showQRCode; // ivar: _showQRCode


-(id)init;
-(id)initWithFrame:(struct CGRect )arg0 package:(id)arg1 ;
-(void)_applyEffectivePrimaryColorToQRCodeAnimated:(BOOL)arg0 ;
-(void)_endPhoneWiggle;
-(void)_restartPhoneWiggleIfNecessary;
-(void)_startPhoneWiggle;
-(void)dealloc;
-(void)layerDidBecomeVisible:(BOOL)arg0 ;
-(void)layoutSublayers;
-(void)setHighlighted:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setPrimaryColor:(struct CGColor *)arg0 animated:(BOOL)arg1 ;


@end


#endif