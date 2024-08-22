// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKXUNCOMPRESSEDREADER_H
#define CKXUNCOMPRESSEDREADER_H

@protocol CKXReaderProtocol;


#import "CKXReaderBase.h"

@interface CKXUncompressedReader : CKXReaderBase <CKXReaderProtocol>





-(BOOL)referenceIsNull:(NSUInteger)arg0 inStruct:(struct ? )arg1 ;
-(BOOL)setData:(id)arg0 error:(*id)arg1 ;
-(NSInteger)lengthForList:(struct ? )arg0 ;
-(NSUInteger)fixedSizeForStruct:(NSUInteger)arg0 ;
-(NSUInteger)offsetForField:(NSUInteger)arg0 inStruct:(NSUInteger)arg1 ;
-(struct ? )referencedListForReference:(NSUInteger)arg0 inStruct:(struct ? )arg1 ;
-(struct ? )referencedStructAtIndex:(NSInteger)arg0 inList:(struct ? )arg1 ;
-(struct ? )referencedStructForReference:(NSUInteger)arg0 inStruct:(struct ? )arg1 ;
-(struct ? )rootStructWithType:(NSUInteger)arg0 ;
-(void)copyData:(*void)arg0 forField:(NSUInteger)arg1 inStruct:(struct ? )arg2 ;
-(void)copyData:(*void)arg0 forList:(struct ? )arg1 ;


@end


#endif