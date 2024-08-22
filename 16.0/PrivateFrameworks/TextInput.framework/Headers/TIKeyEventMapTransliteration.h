// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TIKEYEVENTMAPTRANSLITERATION_H
#define TIKEYEVENTMAPTRANSLITERATION_H



#import "TIKeyEventMap.h"

@interface TIKeyEventMapTransliteration : TIKeyEventMap



+(BOOL)supportsSecureCoding;
-(id)avagrahaString;
-(id)remapKeyWithString:(id)arg0 stringWithoutModifiers:(id)arg1 modifierFlags:(NSUInteger)arg2 keyboardState:(id)arg3 ;


@end


#endif