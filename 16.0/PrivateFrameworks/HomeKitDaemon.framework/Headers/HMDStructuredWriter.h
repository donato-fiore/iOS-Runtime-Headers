// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDSTRUCTUREDWRITER_H
#define HMDSTRUCTUREDWRITER_H

@class NSError;


#import "HMDStructuredDataStream.h"

@interface HMDStructuredWriter : HMDStructuredDataStream {
    NSError *_error;
}




+(id)extendedTypeWriterWithWriter:(id)arg0 options:(NSUInteger)arg1 ;
+(id)writerIntoOPACKData:(id)arg0 ;
+(id)writerIntoObject:(*id)arg0 ;
+(id)writerIntoObject:(*id)arg0 extendedTypeOptions:(NSUInteger)arg1 ;
-(id)error;
-(void)beginArrayOfSize:(NSUInteger)arg0 ;
-(void)beginDictionaryOfSize:(NSUInteger)arg0 ;
-(void)endArray;
-(void)endDictionary;
-(void)failWithError:(id)arg0 ;
-(void)writeBoolean:(BOOL)arg0 ;
-(void)writeData:(id)arg0 ;
-(void)writeDate:(id)arg0 ;
-(void)writeDictionaryKey:(id)arg0 ;
-(void)writeLogicalValue:(id)arg0 ;
-(void)writeNull;
-(void)writeNumber:(id)arg0 ;
-(void)writeString:(id)arg0 ;
-(void)writeToken:(struct _HMDStructuredDataToken )arg0 ;
-(void)writeUUID:(id)arg0 ;


@end


#endif