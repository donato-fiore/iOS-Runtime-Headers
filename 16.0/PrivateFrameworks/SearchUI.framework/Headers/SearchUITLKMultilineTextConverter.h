// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SEARCHUITLKMULTILINETEXTCONVERTER_H
#define SEARCHUITLKMULTILINETEXTCONVERTER_H


#import <Foundation/Foundation.h>


@interface SearchUITLKMultilineTextConverter : NSObject



+(BOOL)richTextOverridesAsyncLoader:(id)arg0 ;
+(id)formattedTextForSearchUIText:(id)arg0 ;
+(id)richTextForSearchUIText:(id)arg0 ;
+(id)richTextForSearchUIText:(id)arg0 withCompletionHandler:(id)arg1 ;
+(id)textForSearchUIString:(id)arg0 ;
+(id)textForSearchUIText:(id)arg0 ;
+(void)applyRichText:(id)arg0 toTLKRichText:(id)arg1 isAsync:(BOOL)arg2 ;


@end


#endif