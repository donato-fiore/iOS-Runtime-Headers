// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TCXMLSTREAMWRITER_H
#define TCXMLSTREAMWRITER_H

@class NSMutableSet;

#import <Foundation/Foundation.h>

#import "TCXmlTextWriterProvider.h"

@interface TCXmlStreamWriter : NSObject {
    TCXmlTextWriterProvider *mTextWriterProvider;
    unsigned int mCurrentDepth;
    BOOL mContentAddedToTopElement;
    NSMutableSet *mAddedIds;
}




+(BOOL)endElementInStream:(struct _xmlTextWriter *)arg0 ;
+(BOOL)startElementInStream:(struct _xmlTextWriter *)arg0 name:(id)arg1 prefix:(id)arg2 ns:(char *)arg3 ;
+(BOOL)startPlainElementInStream:(struct _xmlTextWriter *)arg0 name:(id)arg1 ;
+(BOOL)writeAnchorTargetToStream:(struct _xmlTextWriter *)arg0 name:(id)arg1 ;
+(BOOL)writeAttributeToStream:(struct _xmlTextWriter *)arg0 name:(id)arg1 content:(id)arg2 prefix:(id)arg3 ns:(char *)arg4 ;
+(BOOL)writeDtdToStream:(struct _xmlTextWriter *)arg0 name:(id)arg1 pubid:(id)arg2 sysid:(id)arg3 subset:(id)arg4 ;
+(BOOL)writeNamespaceToStream:(struct _xmlTextWriter *)arg0 prefix:(id)arg1 uri:(char *)arg2 ;
+(BOOL)writePlainAttributeToStream:(struct _xmlTextWriter *)arg0 name:(id)arg1 content:(id)arg2 ;
+(BOOL)writeStringToStream:(struct _xmlTextWriter *)arg0 text:(id)arg1 ;
+(id)newXmlStreamWriterWithZipEntryName:(id)arg0 outputStream:(id)arg1 isCompressed:(BOOL)arg2 ;
+(void)resetElementIds;
-(BOOL)contentAddedToTopElement;
-(BOOL)endElement;
-(BOOL)endElementsToDepth:(unsigned int)arg0 ;
-(BOOL)isWriting;
-(BOOL)setUp;
-(BOOL)startElement:(id)arg0 prefix:(id)arg1 ns:(char *)arg2 ;
-(BOOL)startPlainElement:(id)arg0 ;
-(BOOL)tearDown;
-(BOOL)writeAnchorTarget:(id)arg0 ;
-(BOOL)writeAttribute:(id)arg0 boolContent:(BOOL)arg1 prefix:(id)arg2 ns:(char *)arg3 ;
-(BOOL)writeAttribute:(id)arg0 content:(id)arg1 prefix:(id)arg2 ns:(char *)arg3 ;
-(BOOL)writeAttribute:(id)arg0 doubleContent:(CGFloat)arg1 prefix:(id)arg2 ns:(char *)arg3 ;
-(BOOL)writeAttribute:(id)arg0 enumContent:(int)arg1 map:(id)arg2 prefix:(id)arg3 ns:(char *)arg4 ;
-(BOOL)writeAttribute:(id)arg0 intContent:(NSInteger)arg1 prefix:(id)arg2 ns:(char *)arg3 ;
-(BOOL)writeDtd:(id)arg0 pubid:(id)arg1 sysid:(id)arg2 subset:(id)arg3 ;
-(BOOL)writeElementId:(id)arg0 ;
-(BOOL)writeNamespace:(id)arg0 uri:(char *)arg1 ;
-(BOOL)writePlainAttribute:(id)arg0 boolContent:(BOOL)arg1 ;
-(BOOL)writePlainAttribute:(id)arg0 content:(id)arg1 ;
-(BOOL)writePlainAttribute:(id)arg0 doubleContent:(CGFloat)arg1 ;
-(BOOL)writePlainAttribute:(id)arg0 enumContent:(int)arg1 map:(id)arg2 ;
-(BOOL)writePlainAttribute:(id)arg0 intContent:(NSInteger)arg1 ;
-(BOOL)writeString:(id)arg0 ;
-(id)initWithTextWriterProvider:(id)arg0 ;
-(id)textWriterProvider;
-(struct _xmlTextWriter *)textWriter;
-(unsigned int)currentDepth;
-(void)dealloc;


@end


#endif