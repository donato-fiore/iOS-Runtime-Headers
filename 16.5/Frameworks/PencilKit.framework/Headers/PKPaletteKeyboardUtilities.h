// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPALETTEKEYBOARDUTILITIES_H
#define PKPALETTEKEYBOARDUTILITIES_H


#import <Foundation/Foundation.h>


@interface PKPaletteKeyboardUtilities : NSObject



+(BOOL)isReturnKeyEnabled;
+(NSInteger)textInputReturnKeyTypeForEditing;
+(id)combinedMenuFromKeyboardMenu:(id)arg0 withLanguageMenu:(id)arg1 ;
+(id)textInputResponderForEditing;
+(id)textInputUndoManagerForEditing;
+(void)performReturn;


@end


#endif