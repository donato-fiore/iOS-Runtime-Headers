// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef XRSCHEMAPATTERNRESTRICTIONELEMENTPARSER_H
#define XRSCHEMAPATTERNRESTRICTIONELEMENTPARSER_H

@protocol XRSchemaRegexPatternDetectionDelegate;


#import "XRXMLElementParser.h"

@interface XRSchemaPatternRestrictionElementParser : XRXMLElementParser

@property (weak, nonatomic) NSObject<XRSchemaRegexPatternDetectionDelegate> *delegate; // ivar: _delegate


+(id)_elementNameToClassMap;
-(void)setValue:(id)arg0 forKey:(id)arg1 ;


@end


#endif