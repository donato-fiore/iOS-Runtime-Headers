// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KSXMLWRITER_H
#define KSXMLWRITER_H

@class NSMutableArray, NSArray;


#import "KSForwardingWriter.h"
#import "KSXMLAttributes.h"
#import "KSXMLElementContentsProxy.h"

@interface KSXMLWriter : KSForwardingWriter {
    KSXMLAttributes *_attributes;
    NSMutableArray *_openElements;
    BOOL _elementIsEmpty;
    NSUInteger _inlineWritingLevel;
    KSXMLElementContentsProxy *_contentsProxy;
}


@property (nonatomic) NSUInteger encoding; // ivar: _encoding
@property (nonatomic) NSInteger indentationLevel; // ivar: _indentation
@property (readonly, weak, nonatomic) NSArray *openElements;


+(id)stringFromAttributeValue:(id)arg0 ;
+(id)stringFromCharacters:(id)arg0 ;
+(void)initialize;
-(BOOL)canWriteElementInline:(id)arg0 ;
-(BOOL)elementCanBeEmpty:(id)arg0 ;
-(BOOL)hasCurrentAttributes;
-(BOOL)hasOpenElement:(id)arg0 ;
-(BOOL)isWritingInline;
-(BOOL)validateElement:(id)arg0 ;
-(id)currentAttributes;
-(id)initWithOutputWriter:(id)arg0 ;
-(id)initWithOutputWriter:(id)arg0 encoding:(NSUInteger)arg1 ;
-(id)topElement;
-(id)validateAttribute:(id)arg0 value:(id)arg1 ofElement:(id)arg2 ;
-(id)writeElement:(id)arg0 contentsInvocationTarget:(id)arg1 ;
-(void)close;
-(void)closeComment;
-(void)closeEmptyElementTag;
-(void)closeStartTag;
-(void)decreaseIndentationLevel;
-(void)didStartElement;
-(void)endCDATA;
-(void)endElement;
-(void)flush;
-(void)increaseIndentationLevel;
-(void)openComment;
-(void)popElement;
-(void)pushAttribute:(id)arg0 value:(id)arg1 ;
-(void)pushElement:(id)arg0 ;
-(void)startCDATA;
-(void)startDocumentWithDocType:(id)arg0 encoding:(NSUInteger)arg1 ;
-(void)startElement:(id)arg0 ;
-(void)startElement:(id)arg0 attributes:(id)arg1 ;
-(void)startElement:(id)arg0 writeInline:(BOOL)arg1 ;
-(void)startNewline;
-(void)startWritingInline;
-(void)stopWritingInline;
-(void)willStartElement:(id)arg0 ;
-(void)writeAttribute:(id)arg0 value:(id)arg1 ;
-(void)writeAttributeValue:(id)arg0 ;
-(void)writeCharacters:(id)arg0 ;
-(void)writeComment:(id)arg0 ;
-(void)writeElement:(id)arg0 text:(id)arg1 ;
-(void)writeEndTag:(id)arg0 ;
-(void)writeString:(id)arg0 ;
-(void)writeStringByEscapingXMLEntities:(id)arg0 escapeQuot:(BOOL)arg1 ;


@end


#endif