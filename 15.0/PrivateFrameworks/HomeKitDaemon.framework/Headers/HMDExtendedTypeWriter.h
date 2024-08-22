// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDEXTENDEDTYPEWRITER_H
#define HMDEXTENDEDTYPEWRITER_H



#import "HMDStructuredWriter.h"

@interface HMDExtendedTypeWriter : HMDStructuredWriter {
    HMDStructuredWriter *_writer;
    NSUInteger _options;
}




-(id)error;
-(id)initWithWriter:(id)arg0 options:(NSUInteger)arg1 ;
-(void)beginArrayOfSize:(NSUInteger)arg0 ;
-(void)beginDictionaryOfSize:(NSUInteger)arg0 ;
-(void)endArray;
-(void)endDictionary;
-(void)failWithError:(id)arg0 ;
-(void)writeBoolean:(BOOL)arg0 ;
-(void)writeData:(id)arg0 ;
-(void)writeDate:(id)arg0 ;
-(void)writeDictionaryKey:(id)arg0 ;
-(void)writeNull;
-(void)writeNumber:(id)arg0 ;
-(void)writeString:(id)arg0 ;
-(void)writeUUID:(id)arg0 ;


@end


#endif