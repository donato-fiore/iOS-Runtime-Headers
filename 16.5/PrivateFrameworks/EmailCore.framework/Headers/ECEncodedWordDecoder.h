// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ECENCODEDWORDDECODER_H
#define ECENCODEDWORDDECODER_H

@class NSData, NSString, NSNumber;

#import <Foundation/Foundation.h>


@interface ECEncodedWordDecoder : NSObject

@property (nonatomic) _NSRange encodedTextRange; // ivar: _encodedTextRange
@property (nonatomic) NSInteger encodedWordEncoding; // ivar: _encodedWordEncoding
@property (readonly, copy, nonatomic) NSData *headerData; // ivar: _headerData
@property (copy, nonatomic) NSString *language; // ivar: _language
@property (retain, nonatomic) NSNumber *stringEncoding; // ivar: _stringEncoding


-(BOOL)_decodeBEncodedTextToData:(id)arg0 ;
-(BOOL)_decodeQEncodedTextToData:(id)arg0 ;
-(BOOL)decodeEncodedTextToData:(id)arg0 ;
-(id)_encodedWordDelimiter;
-(id)_encodedWordEndSequence;
-(id)_encodedWordLanguageDelimiter;
-(id)_encodedWordStartSequence;
-(id)_lineSeparator;
-(id)init;
-(id)initWithHeaderData:(id)arg0 ;
-(struct _NSRange )identifyRangeOfEncodedWordAtIndex:(NSUInteger)arg0 ;
-(void)_enumerateQByteRangesUsingBlock:(id)arg0 ;


@end


#endif