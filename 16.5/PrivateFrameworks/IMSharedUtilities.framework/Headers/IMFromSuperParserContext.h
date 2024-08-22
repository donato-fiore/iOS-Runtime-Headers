// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMFROMSUPERPARSERCONTEXT_H
#define IMFROMSUPERPARSERCONTEXT_H

@class NSArray;


#import "IMAttributedStringParserContext.h"

@interface IMFromSuperParserContext : IMAttributedStringParserContext

@property (readonly, nonatomic) BOOL foundBreadcrumbText; // ivar: _foundBreadcrumbText
@property (readonly, retain, nonatomic) NSArray *inlinedFileTransferGUIDs; // ivar: _inlinedFileTransferGUIDs
@property (readonly, retain, nonatomic) NSArray *standaloneFileTransferGUIDs; // ivar: _standaloneFileTransferGUIDs


-(id)initWithAttributedString:(id)arg0 ;
-(id)name;
-(id)resultsForLogging;
-(void)dealloc;
-(void)parser:(id)arg0 foundAttributes:(id)arg1 inRange:(struct _NSRange )arg2 ;
-(void)parser:(id)arg0 foundAttributes:(id)arg1 inRange:(struct _NSRange )arg2 characters:(id)arg3 ;
-(void)parser:(id)arg0 foundAttributes:(id)arg1 inRange:(struct _NSRange )arg2 fileTransferGUID:(id)arg3 filename:(id)arg4 bookmark:(id)arg5 width:(id)arg6 height:(id)arg7 ;
-(void)parser:(id)arg0 foundAttributes:(id)arg1 inRange:(struct _NSRange )arg2 fileTransferGUID:(id)arg3 filename:(id)arg4 bookmark:(id)arg5 width:(id)arg6 height:(id)arg7 emoji:(id)arg8 ;
-(void)parser:(id)arg0 foundBreadcrumbText:(id)arg1 withOptions:(unsigned int)arg2 ;
-(void)parserDidStart:(id)arg0 ;
-(void)parserDidStart:(id)arg0 bodyAttributes:(id)arg1 ;


@end


#endif