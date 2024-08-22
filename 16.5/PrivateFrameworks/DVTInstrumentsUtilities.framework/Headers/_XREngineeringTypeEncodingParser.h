// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _XRENGINEERINGTYPEENCODINGPARSER_H
#define _XRENGINEERINGTYPEENCODINGPARSER_H

@class NSString;


#import "XRXMLElementParser.h"

@interface _XREngineeringTypeEncodingParser : XRXMLElementParser

@property (nonatomic) NSInteger bitWidth; // ivar: _bitWidth
@property (retain, nonatomic) NSString *sentinel; // ivar: _sentinel


+(id)_elementNameToClassMap;
+(id)_elementNameToKVCMap;
-(void)_handleCompletion;
-(void)_handleStart;


@end


#endif