// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVMESSAGEPARSER_H
#define AVMESSAGEPARSER_H

@class NSString, NSData;

#import <Foundation/Foundation.h>


@interface AVMessageParser : NSObject

@property (copy, nonatomic) NSString *bodyLengthKey; // ivar: _bodyLengthKey
@property (copy, nonatomic) NSString *compressionMethodKey; // ivar: _compressionMethodKey
@property (copy, nonatomic) NSString *headerBodySeparator; // ivar: _headerBodySeparator
@property (retain, nonatomic) NSData *headerBodySeparatorData; // ivar: _headerBodySeparatorData
@property (copy, nonatomic) NSString *lineSeparator; // ivar: _lineSeparator
@property (retain, nonatomic) NSData *lineSeparatorData; // ivar: _lineSeparatorData


+(id)airMessageParser;
-(id)init;
-(id)initWithLineSeparator:(id)arg0 headerBodySeparator:(id)arg1 bodyLengthKey:(id)arg2 compressionMethodKey:(id)arg3 ;
-(id)partsWithData:(id)arg0 ;


@end


#endif