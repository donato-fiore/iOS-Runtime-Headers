// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHTEXTINPUTSCRIPTSPEC_H
#define CHTEXTINPUTSCRIPTSPEC_H


#import <Foundation/Foundation.h>


@interface CHTextInputScriptSpec : NSObject



+(BOOL)isCharacterEmoji:(id)arg0 ;
+(BOOL)isCharacterFullWidth:(id)arg0 ;
+(BOOL)isRightToLeftScriptForCharacter:(id)arg0 ;
+(BOOL)isSkippableScriptCode:(int)arg0 ;
+(BOOL)shouldCorrectionGesturesSnapToTokensForScriptCode:(int)arg0 ;
+(BOOL)shouldRelaxCharacterBoundsPercentageOverlapForScript:(int)arg0 ;
+(int)singleScriptCodeForString:(id)arg0 ;


@end


#endif