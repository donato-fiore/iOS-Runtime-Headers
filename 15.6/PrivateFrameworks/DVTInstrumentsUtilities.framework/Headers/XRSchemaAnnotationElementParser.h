// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef XRSCHEMAANNOTATIONELEMENTPARSER_H
#define XRSCHEMAANNOTATIONELEMENTPARSER_H

@protocol XRSchemaAnnotationTextValuesDelegate;


#import "XRXMLElementParser.h"

@interface XRSchemaAnnotationElementParser : XRXMLElementParser

@property (weak, nonatomic) NSObject<XRSchemaAnnotationTextValuesDelegate> *delegate; // ivar: _delegate


+(id)_elementNameToClassMap;
-(void)textParserCompletedParsing:(id)arg0 elementName:(id)arg1 ;


@end


#endif