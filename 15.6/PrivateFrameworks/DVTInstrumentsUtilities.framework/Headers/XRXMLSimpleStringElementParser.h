// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef XRXMLSIMPLESTRINGELEMENTPARSER_H
#define XRXMLSIMPLESTRINGELEMENTPARSER_H

@class NSMutableString, NSString;


#import "XRXMLElementParser.h"

@interface XRXMLSimpleStringElementParser : XRXMLElementParser {
    NSMutableString *accumulator;
}


@property (readonly, nonatomic) NSString *stringValue;


-(id)collapsedStringValue;
-(void)_handleCharacters:(id)arg0 ;
-(void)_handleCompletion;


@end


#endif