// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TIKEYEVENTMAP_ZH_H
#define TIKEYEVENTMAP_ZH_H



#import "TIKeyEventMap.h"

@interface TIKeyEventMap_zh : TIKeyEventMap



+(BOOL)supportsSecureCoding;
+(id)punctuationMap_zh_Hans;
+(id)punctuationMap_zh_Hant;
+(id)sharedInstance;
-(BOOL)isURLOrEmailKeyboardInKeyboardState:(id)arg0 ;
-(id)punctuationMap;
-(id)remapKeyWithString:(id)arg0 stringWithoutModifiers:(id)arg1 modifierFlags:(NSUInteger)arg2 keyboardState:(id)arg3 ;


@end


#endif