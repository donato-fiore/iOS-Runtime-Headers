// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _DPBSSFPWITHOHERANDOMIZER_H
#define _DPBSSFPWITHOHERANDOMIZER_H

@class NSString;
@protocol _DPStringRandomizer;

#import <Foundation/Foundation.h>

#import "_DPBSFPWithOHE.h"
#import "_DPHuffmanEncoder.h"

@interface _DPBSSFPWithOHERandomizer : NSObject <_DPStringRandomizer>



@property (readonly, nonatomic) _DPBSFPWithOHE *bssfpWOHE; // ivar: _bssfpWOHE
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasHuffmanTable; // ivar: _hasHuffmanTable
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) _DPHuffmanEncoder *huffmanEncoder; // ivar: _huffmanEncoder
@property (readonly, nonatomic) NSString *huffmanTableClassNamePattern; // ivar: _huffmanTableClassNamePattern
@property (readonly, nonatomic) BOOL isLocalizable; // ivar: _isLocalizable
@property (readonly, nonatomic) NSUInteger maxRecordBitLength; // ivar: _maxRecordBitLength
@property (readonly) Class superclass;


+(id)extractLocaleFromKey:(id)arg0 ;
+(id)extractSortedTokensFromWordsArray:(id)arg0 ;
+(id)randomizerWithEpsilon:(CGFloat)arg0 maxRecordBitLength:(NSUInteger)arg1 segmentBitLength:(NSUInteger)arg2 probabilityOfVerification:(CGFloat)arg3 hashSeed:(NSUInteger)arg4 hashSeedInVerification:(NSUInteger)arg5 signatureBitLength:(NSUInteger)arg6 signatureBitLengthInVerification:(NSUInteger)arg7 huffmanTableClassName:(id)arg8 ;
-(id)bitStringFromEncodedTokens:(id)arg0 ;
-(id)init;
-(id)initWithEpsilon:(CGFloat)arg0 maxRecordBitLength:(NSUInteger)arg1 segmentBitLength:(NSUInteger)arg2 probabilityOfVerification:(CGFloat)arg3 hashSeed:(NSUInteger)arg4 hashSeedInVerification:(NSUInteger)arg5 signatureBitLength:(NSUInteger)arg6 signatureBitLengthInVerification:(NSUInteger)arg7 huffmanTableClassName:(id)arg8 ;
-(id)randomize:(id)arg0 forKey:(id)arg1 ;
-(id)randomizeBitString:(id)arg0 huffmanVersion:(id)arg1 forKey:(id)arg2 ;
-(id)randomizeBitValues:(id)arg0 forKey:(id)arg1 ;
-(id)randomizeEncodedTokens:(id)arg0 huffmanVersion:(id)arg1 forKey:(id)arg2 ;
-(id)randomizeNumbers:(id)arg0 metadata:(id)arg1 forKey:(id)arg2 ;
-(id)randomizeNumbersVectors:(id)arg0 metadata:(id)arg1 forKey:(id)arg2 ;
-(id)randomizeStrings:(id)arg0 forKey:(id)arg1 ;
-(id)randomizeWords:(id)arg0 fragmentWidth:(NSUInteger)arg1 forKey:(id)arg2 ;
-(void)instantiateLocalizedHuffmanTable:(id)arg0 ;


@end


#endif