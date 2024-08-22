// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKTEXTINPUTUTILITIES_H
#define PKTEXTINPUTUTILITIES_H


#import <Foundation/Foundation.h>


@interface PKTextInputUtilities : NSObject



+(BOOL)isResponderSupportedTextInput:(id)arg0 ;
+(BOOL)isResponderSupportedTextInput:(id)arg0 outTextInputTraits:(*id)arg1 ;
+(BOOL)textInputTraitsAreSecure:(id)arg0 ;
+(NSInteger)responderTextInputSource:(id)arg0 ;
+(id)_notesTextViewFromResponder:(id)arg0 ;
+(id)textInputTraitsFromTextInput:(id)arg0 ;
+(void)markAnalyticsForDeletionCount:(NSUInteger)arg0 rangeToReplace:(struct _NSRange )arg1 ;
+(void)markAnalyticsForInsertionWithTexts:(id)arg0 rangeToReplace:(struct _NSRange )arg1 ;
+(void)markAnalyticsForRedo;
+(void)markAnalyticsForSelectionChange:(struct _NSRange )arg0 relativeRangeBefore:(struct _NSRange )arg1 ;
+(void)markAnalyticsForUndo;


@end


#endif