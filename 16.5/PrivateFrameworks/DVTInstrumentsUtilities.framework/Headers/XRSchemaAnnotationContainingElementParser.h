// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef XRSCHEMAANNOTATIONCONTAININGELEMENTPARSER_H
#define XRSCHEMAANNOTATIONCONTAININGELEMENTPARSER_H

@class NSString;
@protocol XRSchemaAnnotationTextValuesDelegate, XRSchemaAnnotationPropertyReportingDelegate;


#import "XRXMLElementParser.h"

@interface XRSchemaAnnotationContainingElementParser : XRXMLElementParser <XRSchemaAnnotationTextValuesDelegate>



@property (weak, nonatomic) NSObject<XRSchemaAnnotationPropertyReportingDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) NSString *key; // ivar: _key


+(id)_elementNameToClassMap;
-(id)startElementWithName:(id)arg0 attributes:(id)arg1 line:(NSInteger)arg2 col:(NSInteger)arg3 ;
-(void)textParserCompletedParsing:(id)arg0 elementName:(id)arg1 ;


@end


#endif