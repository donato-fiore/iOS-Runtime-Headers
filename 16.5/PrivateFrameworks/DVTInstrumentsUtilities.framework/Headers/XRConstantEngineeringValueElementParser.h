// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef XRCONSTANTENGINEERINGVALUEELEMENTPARSER_H
#define XRCONSTANTENGINEERINGVALUEELEMENTPARSER_H

@class NSMutableArray;


#import "XRXMLSimpleStringElementParser.h"
#import "XRConstantEngineeringValue.h"

@interface XRConstantEngineeringValueElementParser : XRXMLSimpleStringElementParser {
    NSMutableArray *_fields;
}


@property (readonly, nonatomic) XRConstantEngineeringValue *parsedValue; // ivar: _parsedValue


+(id)_elementNameToClassMap;
-(void)_handleCompletion;
-(void)setValue:(id)arg0 forElementName:(id)arg1 ;


@end


#endif