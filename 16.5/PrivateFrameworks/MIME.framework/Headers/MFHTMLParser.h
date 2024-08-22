// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFHTMLPARSER_H
#define MFHTMLPARSER_H


#import <Foundation/Foundation.h>


@interface MFHTMLParser : NSObject



+(id)plainTextFromHTML:(id)arg0 ;
+(id)plainTextFromHTML:(id)arg0 limit:(NSUInteger)arg1 ;
+(id)plainTextFromHTML:(id)arg0 limit:(NSUInteger)arg1 preserveNewlines:(BOOL)arg2 ;
+(id)plainTextFromHTMLSnippet:(id)arg0 ;


@end


#endif