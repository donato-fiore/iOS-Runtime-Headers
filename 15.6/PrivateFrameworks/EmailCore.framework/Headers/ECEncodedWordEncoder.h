// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ECENCODEDWORDENCODER_H
#define ECENCODEDWORDENCODER_H

@class NSString, NSData;

#import <Foundation/Foundation.h>


@interface ECEncodedWordEncoder : NSObject

@property (copy, nonatomic) NSString *characterSet; // ivar: _characterSet
@property (copy, nonatomic) NSData *decodedText; // ivar: _decodedText
@property (nonatomic) NSInteger encodedWordEncoding; // ivar: _encodedWordEncoding
@property (readonly, copy, nonatomic) NSString *language; // ivar: _language
@property (readonly, nonatomic) NSUInteger minimumLengthOfEncodedWord;
@property (nonatomic) NSUInteger singleEncodedWordLength; // ivar: _singleEncodedWordLength
@property (readonly, copy, nonatomic) NSString *string; // ivar: _string
@property (readonly, nonatomic) NSUInteger stringEncoding; // ivar: _stringEncoding


-(BOOL)_getBytesWithoutSplittingComposedCharacters:(*void)arg0 targetQEncodedTextLength:(NSUInteger)arg1 usedLength:(*NSUInteger)arg2 splitComposedCharacterSequence:(*BOOL)arg3 usedQEncodedTextLength:(*NSUInteger)arg4 extraLength:(*NSUInteger)arg5 extraQEncodedTextLength:(*NSUInteger)arg6 fromString:(id)arg7 stringEncoding:(NSUInteger)arg8 range:(struct _NSRange )arg9 remainingRange:(struct _NSRange *)arg10 ;
-(NSUInteger)_bEncodeToHeaderData:(id)arg0 currentLineLength:(NSUInteger)arg1 ;
-(NSUInteger)_lengthOfQEncodedTextForBytes:(char *)arg0 length:(NSUInteger)arg1 ;
-(NSUInteger)_qEncodeToHeaderData:(id)arg0 currentLineLength:(NSUInteger)arg1 ;
-(NSUInteger)_writeEncodedWordPreambleToBuffer:(char *)arg0 length:(NSUInteger)arg1 ;
-(NSUInteger)encodeToHeaderData:(id)arg0 currentLineLength:(NSUInteger)arg1 ;
-(char *)_findNextByteThatNeedsQEncodingBetweenStartByte:(char *)arg0 endByte:(char *)arg1 ;
-(id)description;
-(id)init;
-(id)initWithString:(id)arg0 stringEncoding:(NSUInteger)arg1 language:(id)arg2 ;
-(void)_prepareForEncoding;
-(void)_writeQEncodedTextAndEndSequenceToHeaderBytes:(char *)arg0 fromDecodedBytes:(char *)arg1 length:(NSUInteger)arg2 ;


@end


#endif