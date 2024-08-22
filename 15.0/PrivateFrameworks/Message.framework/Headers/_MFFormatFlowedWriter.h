// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MFFORMATFLOWEDWRITER_H
#define _MFFORMATFLOWEDWRITER_H

@class NSMutableString;

#import <Foundation/Foundation.h>

#import "MFPlainTextDocument.h"

@interface _MFFormatFlowedWriter : NSObject {
    MFPlainTextDocument *_inputDocument;
    unsigned int _encoding;
    NSMutableString *_outputString;
    NSMutableString *_quotedString;
    BOOL _addedTrailingSpaces;
    NSMutableString *_lineString;
}




+(id)newWithPlainTextDocument:(id)arg0 encoding:(unsigned int)arg1 ;
-(BOOL)addedTrailingSpaces;
-(NSUInteger)_findLineBreakInRange:(struct _NSRange )arg0 maxCharWidthCount:(NSUInteger)arg1 endIsURL:(BOOL)arg2 ;
-(id)outputString;
-(id)quotedString;
-(void)_outputQuotedParagraph:(id)arg0 range:(struct _NSRange )arg1 withQuoteLevel:(unsigned int)arg2 ;


@end


#endif