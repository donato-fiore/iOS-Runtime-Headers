// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMSUPERTOSUPERSANITIZERCONTEXT_H
#define IMSUPERTOSUPERSANITIZERCONTEXT_H

@class NSString, NSArray, NSAttributedString;


#import "IMFromSuperParserContext.h"

@interface IMSuperToSuperSanitizerContext : IMFromSuperParserContext {
    NSString *_backgroundColor;
    NSString *_foregroundColor;
    NSUInteger _offset;
    NSInteger _baseWritingDirection;
    BOOL _extractAttachments;
    BOOL _hadBaseWritingDirectionAttribute;
}


@property (readonly, retain) NSArray *attachments; // ivar: _attachments
@property (readonly, retain) NSAttributedString *sanitizedContent; // ivar: _content


-(id)initWithAttributedString:(id)arg0 extractAttachments:(BOOL)arg1 ;
-(id)name;
-(id)resultsForLogging;
-(void)dealloc;
-(void)parser:(id)arg0 foundAttributes:(id)arg1 inRange:(struct _NSRange )arg2 characters:(id)arg3 ;
-(void)parser:(id)arg0 foundAttributes:(id)arg1 inRange:(struct _NSRange )arg2 fileTransferGUID:(id)arg3 filename:(id)arg4 bookmark:(id)arg5 width:(id)arg6 height:(id)arg7 emoji:(id)arg8 ;
-(void)parserDidEnd:(id)arg0 ;
-(void)parserDidStart:(id)arg0 bodyAttributes:(id)arg1 ;


@end


#endif