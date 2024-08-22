// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNVCARDACTIVITYALERTSCANNER_H
#define CNVCARDACTIVITYALERTSCANNER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CNVCardActivityAlertScanner : NSObject {
    NSString *_string;
    NSUInteger _position;
}




+(BOOL)characterIsStringValueCharacter:(unsigned short)arg0 ;
+(id)scanAlertValueFromString:(id)arg0 ;
+(id)scannerWithString:(id)arg0 ;
-(BOOL)atEnd;
-(BOOL)scanPastCharacter:(unsigned short)arg0 ;
-(BOOL)scanPastItemDelimiter;
-(BOOL)scanPastKeyValueSeparator;
-(NSUInteger)position;
-(id)initWithString:(id)arg0 ;
-(id)scanAlertValue;
-(id)scanKeyValuePair;
-(id)scanQuotedStringValue;
-(id)scanStringValue;
-(id)scanUnquotedStringValue;
-(unsigned short)nextCharacter;
-(unsigned short)nextUnescapedCharacter;
-(unsigned short)scanCharacter;
-(unsigned short)scanCharacterWithEscaping:(BOOL)arg0 ;
-(void)scanPastWhitespace;


@end


#endif