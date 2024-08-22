// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ENMLWRITER_H
#define ENMLWRITER_H



#import "ENXMLWriter.h"

@interface ENMLWriter : ENXMLWriter



+(BOOL)validateURLComponents:(id)arg0 ;
+(id)emptyNote;
-(BOOL)startElement:(id)arg0 attributes:(id)arg1 ;
-(id)init;
-(id)validateURLAttribute:(id)arg0 inAttributes:(id)arg1 ;
-(void)endDocument;
-(void)startDocument;
-(void)startDocumentWithAttributes:(id)arg0 ;
-(void)writeEncryptedInfo:(id)arg0 ;
-(void)writeResource:(id)arg0 ;
-(void)writeResourceWithDataHash:(id)arg0 mime:(id)arg1 attributes:(id)arg2 ;
-(void)writeTodoWithCheckedState:(BOOL)arg0 ;


@end


#endif