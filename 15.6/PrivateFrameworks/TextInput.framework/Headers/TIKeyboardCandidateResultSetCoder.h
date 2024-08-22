// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TIKEYBOARDCANDIDATERESULTSETCODER_H
#define TIKEYBOARDCANDIDATERESULTSETCODER_H

@class NSData, NSMutableData;

#import <Foundation/Foundation.h>


@interface TIKeyboardCandidateResultSetCoder : NSObject

@property (readonly, nonatomic) char * bytes;
@property (readonly, nonatomic) char * currentPosition;
@property (retain, nonatomic) NSData *data; // ivar: _data
@property (retain, nonatomic) NSMutableData *mutableData; // ivar: _mutableData
@property (nonatomic) NSUInteger offset; // ivar: _offset
@property (nonatomic) BOOL offsetHasPassedEndOfData; // ivar: _offsetHasPassedEndOfData


+(Class)classFromCandidateType:(int)arg0 ;
+(id)candidateTypeToClassNameMap;
+(id)decodeWithData:(id)arg0 ;
+(id)encodeWithCandidateResultSet:(id)arg0 ;
-(BOOL)decodeBool;
-(BOOL)isDecoding;
-(CGFloat)decodeDouble;
-(NSUInteger)decodeUInt64;
-(id)candidateResultSet;
-(id)dataFromCandidateResultSet:(id)arg0 ;
-(id)decodeCandidate;
-(id)decodePointerValueArray;
-(id)decodeString;
-(id)decodeStringArray;
-(id)initForDecodingWithData:(id)arg0 ;
-(id)initForEncoding;
-(id)initWithData:(id)arg0 mutableData:(id)arg1 ;
-(unsigned char)decodeByte;
-(unsigned int)decodeUInt32;
-(unsigned short)decodeShort;
-(void)encodeBool:(BOOL)arg0 ;
-(void)encodeByte:(unsigned char)arg0 ;
-(void)encodeDouble:(CGFloat)arg0 ;
-(void)encodePointerValueArray:(id)arg0 ;
-(void)encodeShort:(unsigned short)arg0 ;
-(void)encodeString:(id)arg0 ;
-(void)encodeStringArray:(id)arg0 ;
-(void)encodeUInt32:(unsigned int)arg0 ;
-(void)encodeUInt64:(NSUInteger)arg0 ;
-(void)readNumberOfBytes:(NSUInteger)arg0 into:(*void)arg1 ;


@end


#endif