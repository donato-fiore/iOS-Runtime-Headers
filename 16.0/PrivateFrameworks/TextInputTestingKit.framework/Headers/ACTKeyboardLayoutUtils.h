// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ACTKEYBOARDLAYOUTUTILS_H
#define ACTKEYBOARDLAYOUTUTILS_H

@class NSLocale, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface ACTKeyboardLayoutUtils : NSObject {
    NSLocale *_locale;
}


@property (readonly, nonatomic) NSMutableDictionary *keyOverrides; // ivar: _keyOverrides


-(id)alternativeKeyForString:(id)arg0 keyplane:(id)arg1 preferBaseKeyVariants:(BOOL)arg2 preferManualShift:(BOOL)arg3 substituteUpperCaseForLowerCase:(BOOL)arg4 ;
-(id)anyKeyForString:(id)arg0 keyplane:(id)arg1 wantSecondaryString:(BOOL)arg2 isRetyping:(BOOL)arg3 preferBaseKeyVariants:(BOOL)arg4 preferManualShift:(BOOL)arg5 substituteUpperCaseForLowerCase:(BOOL)arg6 ;
-(id)baseKeyForString:(id)arg0 ;
-(id)createTTKPlane:(id)arg0 ;
-(id)exactKeyForString:(id)arg0 keyplane:(id)arg1 ;
-(id)exactKeyForString:(id)arg0 keyplane:(id)arg1 includeSecondaryStrings:(BOOL)arg2 ;
-(id)initWithLocale:(id)arg0 ;
-(id)representedStringForKey:(id)arg0 shifted:(BOOL)arg1 ;
-(id)representedStringForKey:(id)arg0 shifted:(BOOL)arg1 includeSecondaryStrings:(BOOL)arg2 ;
-(id)substitutesForKey:(id)arg0 preferBaseKeyVariants:(BOOL)arg1 preferManualShift:(BOOL)arg2 substituteUpperCaseForLowerCase:(BOOL)arg3 ;
-(void)setLayoutKeyOverride:(id)arg0 forKey:(id)arg1 uiKeyboardStringNothing:(id)arg2 ;


@end


#endif