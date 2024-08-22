// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNKEYBOARDSETTINGS_H
#define CNKEYBOARDSETTINGS_H


#import <Foundation/Foundation.h>


@interface CNKeyboardSettings : NSObject



+(BOOL)contentsIsSingleValue:(id)arg0 ;
+(BOOL)usesTextSuggestionDelegate:(id)arg0 ;
+(NSInteger)autocapitalizationTypeFromDictionary:(id)arg0 ;
+(NSInteger)autocorrectionTypeFromDictionary:(id)arg0 ;
+(NSInteger)keyboardTypeFromDictionary:(id)arg0 ;
+(id)newKeyboardSettingsForProperty:(id)arg0 ;


@end


#endif