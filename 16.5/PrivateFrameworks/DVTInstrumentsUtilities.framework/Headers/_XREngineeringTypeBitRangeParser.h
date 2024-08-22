// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _XRENGINEERINGTYPEBITRANGEPARSER_H
#define _XRENGINEERINGTYPEBITRANGEPARSER_H

@class NSString;


#import "XRXMLElementParser.h"

@interface _XREngineeringTypeBitRangeParser : XRXMLElementParser

@property (nonatomic) NSInteger end; // ivar: _end
@property (nonatomic) NSInteger start; // ivar: _start
@property (copy, nonatomic) NSString *type; // ivar: _type


+(id)_elementNameToClassMap;
-(void)_handleCompletion;


@end


#endif