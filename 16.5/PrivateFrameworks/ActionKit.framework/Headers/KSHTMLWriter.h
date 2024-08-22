// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KSHTMLWRITER_H
#define KSHTMLWRITER_H

@class NSMutableSet, NSMutableArray, NSString;


#import "KSXMLWriter.h"

@interface KSHTMLWriter : KSXMLWriter {
    BOOL _isXHTML;
    NSMutableSet *_IDs;
    NSMutableArray *_classNames;
}


@property (copy, nonatomic) NSString *docType; // ivar: _docType


+(BOOL)isDocTypeXHTML:(id)arg0 ;
-(BOOL)canWriteElementInline:(id)arg0 ;
-(BOOL)elementCanBeEmpty:(id)arg0 ;
-(BOOL)hasCurrentAttributes;
-(BOOL)isIDValid:(id)arg0 ;
-(BOOL)isXHTML;
-(BOOL)topElementIsList;
-(BOOL)validateElement:(id)arg0 ;
-(id)currentAttributes;
-(id)currentElementClassName;
-(id)initWithOutputWriter:(id)arg0 ;
-(id)initWithOutputWriter:(id)arg0 docType:(id)arg1 encoding:(NSUInteger)arg2 ;
-(id)validateAttribute:(id)arg0 value:(id)arg1 ofElement:(id)arg2 ;
-(void)closeEmptyElementTag;
-(void)endJavascriptCDATA;
-(void)pushAttribute:(id)arg0 value:(id)arg1 ;
-(void)pushClassName:(id)arg0 ;
-(void)startAnchorElementWithHref:(id)arg0 title:(id)arg1 target:(id)arg2 rel:(id)arg3 ;
-(void)startDocumentWithDocType:(id)arg0 encoding:(NSUInteger)arg1 ;
-(void)startElement:(id)arg0 className:(id)arg1 ;
-(void)startElement:(id)arg0 idName:(id)arg1 className:(id)arg2 ;
-(void)startElement:(id)arg0 writeInline:(BOOL)arg1 ;
-(void)startJavascriptCDATA;
-(void)startJavascriptElementWithSrc:(id)arg0 ;
-(void)startStyleElementWithType:(id)arg0 ;
-(void)writeHTMLFormat:(id)arg0 ;
-(void)writeHTMLString:(id)arg0 ;
-(void)writeImageWithSrc:(id)arg0 alt:(id)arg1 width:(id)arg2 height:(id)arg3 ;
-(void)writeJavascript:(id)arg0 useCDATA:(BOOL)arg1 ;
-(void)writeJavascriptWithSrc:(id)arg0 charset:(id)arg1 ;
-(void)writeJavascriptWithSrc:(id)arg0 encoding:(NSUInteger)arg1 ;
-(void)writeLineBreak;
-(void)writeLinkToStylesheet:(id)arg0 title:(id)arg1 media:(id)arg2 ;
-(void)writeLinkWithHref:(id)arg0 type:(id)arg1 rel:(id)arg2 title:(id)arg3 media:(id)arg4 ;
-(void)writeParamElementWithName:(id)arg0 value:(id)arg1 ;
-(void)writeStyleElementWithCSSString:(id)arg0 ;


@end


#endif