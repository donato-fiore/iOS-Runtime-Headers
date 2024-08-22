// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TCXMLPREFIXSTREAMWRITER_H
#define TCXMLPREFIXSTREAMWRITER_H

@class NSMutableArray;


#import "TCXmlStreamWriter.h"

@interface TCXmlPrefixStreamWriter : TCXmlStreamWriter {
    NSMutableArray *mStateStack;
}




-(BOOL)addElement:(id)arg0 ;
-(BOOL)startElement:(id)arg0 ;
-(BOOL)startOAElement:(id)arg0 ;
-(BOOL)writeAttribute:(id)arg0 boolContent:(BOOL)arg1 ;
-(BOOL)writeAttribute:(id)arg0 content:(id)arg1 ;
-(BOOL)writeAttribute:(id)arg0 doubleContent:(CGFloat)arg1 ;
-(BOOL)writeAttribute:(id)arg0 enumContent:(int)arg1 map:(id)arg2 ;
-(BOOL)writeAttribute:(id)arg0 intContent:(NSInteger)arg1 ;
-(BOOL)writeAttribute:(id)arg0 unsignedLongContent:(NSUInteger)arg1 ;
-(BOOL)writeIndexAttribute:(id)arg0 intContent:(NSUInteger)arg1 ;
-(BOOL)writeOAAttribute:(id)arg0 boolContent:(BOOL)arg1 ;
-(BOOL)writeOAAttribute:(id)arg0 content:(id)arg1 ;
-(BOOL)writeOAAttribute:(id)arg0 doubleContent:(CGFloat)arg1 ;
-(BOOL)writeOAAttribute:(id)arg0 enumContent:(int)arg1 map:(id)arg2 ;
-(BOOL)writeOAAttribute:(id)arg0 intContent:(NSInteger)arg1 ;
-(BOOL)writeOneAttributeElementWithName:(id)arg0 attributeName:(id)arg1 boolContent:(BOOL)arg2 ;
-(BOOL)writeOneAttributeElementWithName:(id)arg0 attributeName:(id)arg1 content:(id)arg2 ;
-(BOOL)writeOneAttributeElementWithName:(id)arg0 attributeName:(id)arg1 doubleContent:(CGFloat)arg2 ;
-(BOOL)writeOneAttributeElementWithName:(id)arg0 attributeName:(id)arg1 enumContent:(int)arg2 map:(id)arg3 ;
-(BOOL)writeOneAttributeElementWithName:(id)arg0 attributeName:(id)arg1 intContent:(NSInteger)arg2 ;
-(BOOL)writeValAttributeOnlyElementWithName:(id)arg0 boolContent:(BOOL)arg1 ;
-(BOOL)writeValAttributeOnlyElementWithName:(id)arg0 content:(id)arg1 ;
-(BOOL)writeValAttributeOnlyElementWithName:(id)arg0 doubleContent:(CGFloat)arg1 ;
-(BOOL)writeValAttributeOnlyElementWithName:(id)arg0 enumContent:(int)arg1 map:(id)arg2 ;
-(BOOL)writeValAttributeOnlyElementWithName:(id)arg0 intContent:(NSInteger)arg1 ;
-(id)currentAttributePrefix;
-(id)currentElementPrefix;
-(id)currentState;
-(id)initWithTextWriterProvider:(id)arg0 ;
-(id)pushState;
-(id)pushStateWithElementPrefix:(id)arg0 attributePrefix:(id)arg1 ;
-(id)pushStateWithSharedPrefix:(id)arg0 ;
-(void)dealloc;
-(void)popState;
-(void)pushElementPrefix:(id)arg0 attributePrefix:(id)arg1 ;
-(void)pushOAState;
-(void)writeTextString:(id)arg0 forElement:(id)arg1 ;


@end


#endif