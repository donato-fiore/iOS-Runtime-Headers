// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPNUMBERPADDARKSTYLEBUTTON_H
#define TPNUMBERPADDARKSTYLEBUTTON_H



#import "TPNumberPadButton.h"

@interface TPNumberPadDarkStyleButton : TPNumberPadButton



+(CGFloat)highlightedCircleViewAlpha;
+(CGFloat)unhighlightedCircleViewAlpha;
+(id)imageForCharacter:(NSInteger)arg0 ;
+(id)imageForCharacter:(NSInteger)arg0 highlighted:(BOOL)arg1 ;
-(id)buttonColor;
-(id)defaultColor;


@end


#endif