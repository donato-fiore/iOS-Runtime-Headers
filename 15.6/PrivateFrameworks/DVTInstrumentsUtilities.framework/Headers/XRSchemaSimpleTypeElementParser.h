// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef XRSCHEMASIMPLETYPEELEMENTPARSER_H
#define XRSCHEMASIMPLETYPEELEMENTPARSER_H

@class NSString;
@protocol XRSchemaAnnotationTextValuesDelegate, XRSchemaRegexPatternDetectionDelegate, XRSchemaAnnotationPropertyReportingDelegate;


#import "XRXMLElementParser.h"

@interface XRSchemaSimpleTypeElementParser : XRXMLElementParser <XRSchemaAnnotationTextValuesDelegate, XRSchemaRegexPatternDetectionDelegate>

 {
    XRXMLElementParser *_patternParser;
    NSString *_parsedRegex;
    NSString *_errorMessage;
}


@property (weak, nonatomic) NSObject<XRSchemaAnnotationPropertyReportingDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier


+(id)_elementNameToClassMap;
-(id)startElementWithName:(id)arg0 attributes:(id)arg1 line:(NSInteger)arg2 col:(NSInteger)arg3 ;
-(void)checkForAnnotationAndPatternAvailable;
-(void)finishedParsingPatternWithParser:(id)arg0 patternValue:(id)arg1 ;
-(void)textParserCompletedParsing:(id)arg0 elementName:(id)arg1 ;


@end


#endif