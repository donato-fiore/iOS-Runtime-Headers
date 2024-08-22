// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ENXMLWRITER_H
#define ENXMLWRITER_H

@class NSString;
@protocol ENXMLWriterDelegate;

#import <Foundation/Foundation.h>

#import "ENXMLDTD.h"

@interface ENXMLWriter : NSObject {
    *_xmlTextWriter _xmlWriter;
    *_xmlOutputBuffer _xmlOutputBuffer;
}


@property (readonly, nonatomic) NSString *contents; // ivar: _contents
@property (retain, nonatomic) NSString *currentElementName; // ivar: _currentElementName
@property (weak, nonatomic) NSObject<ENXMLWriterDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) ENXMLDTD *dtd; // ivar: _dtd
@property (nonatomic) NSUInteger openElementCount; // ivar: _openElementCount


-(BOOL)startElement:(id)arg0 ;
-(BOOL)startElement:(id)arg0 attributes:(id)arg1 ;
-(BOOL)startElement:(id)arg0 withAttributes:(id)arg1 ;
-(BOOL)writeAttributeName:(id)arg0 value:(id)arg1 ;
-(BOOL)writeElement:(id)arg0 attributes:(id)arg1 content:(id)arg2 ;
-(BOOL)writeElement:(id)arg0 withAttributes:(id)arg1 content:(id)arg2 ;
-(id)init;
-(id)initWithDelegate:(id)arg0 ;
-(void)dealloc;
-(void)endCDATA;
-(void)endDocument;
-(void)endElement;
-(void)startCDATA;
-(void)startDocument;
-(void)writeCDATA:(id)arg0 ;
-(void)writeRawString:(id)arg0 ;
-(void)writeString:(id)arg0 ;
-(void)writeString:(id)arg0 raw:(BOOL)arg1 ;


@end


#endif