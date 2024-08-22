// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _XRENGINEERINGTYPEARRAYENCODINGPARSER_H
#define _XRENGINEERINGTYPEARRAYENCODINGPARSER_H

@class NSMutableArray, NSString;


#import "XRXMLElementParser.h"

@interface _XREngineeringTypeArrayEncodingParser : XRXMLElementParser {
    NSMutableArray *_fixedTypes;
    NSString *_remainderType;
}




+(id)_elementNameToClassMap;
-(void)_handleCompletion;
-(void)_handleStart;
-(void)setRemainder:(id)arg0 ;
-(void)setSlot:(id)arg0 ;


@end


#endif