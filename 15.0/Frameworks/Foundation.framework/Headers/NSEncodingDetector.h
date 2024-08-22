// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSENCODINGDETECTOR_H
#define NSENCODINGDETECTOR_H


#import <Foundation/Foundation.h>


@interface NSEncodingDetector : NSObject {
    NSUInteger _givenNumBytes;
    NSUInteger _numChars;
    NSUInteger _numMultiByteChars;
    NSUInteger _numSingleBytechars;
    NSUInteger _skipBytes;
    NSUInteger _numZeroBytes;
    NSUInteger _mostFrqChars;
    NSUInteger _numBigrams;
    NSUInteger _numRep;
    NSUInteger _numDirect;
    NSUInteger _numBase64;
    NSUInteger _numSeq;
    NSUInteger _numTrigram;
    NSUInteger _numLower;
    NSUInteger _numHigher;
    CGFloat _weight;
    BOOL _hasBase64;
    BOOL _isBigEndian;
    BOOL _hasBOM;
    unsigned int _tag;
}


@property (readonly) unsigned int cfEncoding; // ivar: _cfEncoding
@property (readonly) NSUInteger nsEncoding; // ivar: _nsEncoding


+(Class)classForCFStringEncoding:(unsigned int)arg0 ;
+(id)detectorForCFStringEncoding:(unsigned int)arg0 allowBackupDetectors:(BOOL)arg1 ;
-(CGFloat)bytesRatio;
-(CGFloat)confidence;
-(CGFloat)confidenceWith2Chars;
-(CGFloat)multiBytesRatio;
-(NSUInteger)maxSkipBytes;
-(NSUInteger)recognizeString:(char *)arg0 withDataLength:(NSUInteger)arg1 intoBuffer:(id)arg2 ;
-(id)initWithNSStringEncoding:(NSUInteger)arg0 CFStringEncoding:(unsigned int)arg1 ;
-(void)reset;
-(void)softReset;


@end


#endif