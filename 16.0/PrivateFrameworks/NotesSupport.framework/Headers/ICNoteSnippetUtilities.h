// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICNOTESNIPPETUTILITIES_H
#define ICNOTESNIPPETUTILITIES_H


#import <Foundation/Foundation.h>


@interface ICNoteSnippetUtilities : NSObject



+(id)snippetAndTitleTrimCharacterSet;
+(id)snippetForContent:(id)arg0 ;
+(id)stringByRemovingTitle:(id)arg0 fromString:(id)arg1 ;
+(id)titleForContent:(id)arg0 truncated:(*BOOL)arg1 ;
+(struct _NSRange )rangeForTitleInContent:(id)arg0 truncated:(*BOOL)arg1 ;


@end


#endif