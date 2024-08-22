// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _XRENGINEERINGTYPEPACKEDENCODINGPARSER_H
#define _XRENGINEERINGTYPEPACKEDENCODINGPARSER_H



#import "XRXMLElementParser.h"
#import "XREngineeringTypeBitpackedEncodingConvention.h"

@interface _XREngineeringTypePackedEncodingParser : XRXMLElementParser

@property (retain, nonatomic) XREngineeringTypeBitpackedEncodingConvention *convention; // ivar: _convention


+(id)_elementNameToClassMap;
-(void)_handleCompletion;
-(void)_handleStart;


@end


#endif