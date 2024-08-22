// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TPNUMBERPADDYNAMICBUTTON_H
#define TPNUMBERPADDYNAMICBUTTON_H



#import "TPNumberPadButton.h"

@interface TPNumberPadDynamicButton : TPNumberPadButton



+(BOOL)usesTelephonyGlyphsWhereAvailable;
+(CGFloat)highlightedCircleViewAlpha;
+(CGFloat)unhighlightedCircleViewAlpha;
+(NSInteger)currentStyle;
+(id)imageForCharacter:(NSInteger)arg0 ;
+(id)imageForCharacter:(NSInteger)arg0 highlighted:(BOOL)arg1 ;
-(id)buttonColor;
-(id)initForCharacter:(NSInteger)arg0 style:(NSInteger)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateCurrentStyleIfNecessaryFromStyle:(NSInteger)arg0 ;


@end


#endif