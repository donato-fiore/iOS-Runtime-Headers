// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICNOTEEDITORTEXTFINDINGCONTROLLER_H
#define ICNOTEEDITORTEXTFINDINGCONTROLLER_H


#import <Foundation/Foundation.h>


@interface ICNoteEditorTextFindingController : NSObject



+(BOOL)isWholeWordInRange:(struct _NSRange )arg0 inString:(id)arg1 ;
+(id)textFindingQueue;
+(id)textFindingResultsForPattern:(id)arg0 textStorage:(id)arg1 ignoreCase:(BOOL)arg2 wholeWords:(BOOL)arg3 ;


@end


#endif