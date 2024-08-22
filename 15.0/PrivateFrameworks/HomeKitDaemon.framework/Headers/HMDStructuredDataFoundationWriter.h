// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDSTRUCTUREDDATAFOUNDATIONWRITER_H
#define HMDSTRUCTUREDDATAFOUNDATIONWRITER_H

@class NSString, NSMutableArray;


#import "HMDStructuredWriter.h"

@interface HMDStructuredDataFoundationWriter : HMDStructuredWriter {
    *id _output;
    id *_container;
    NSString *_currentKey;
    NSMutableArray *_stack;
}




-(id)error;
-(void)beginArrayOfSize:(NSUInteger)arg0 ;
-(void)beginDictionaryOfSize:(NSUInteger)arg0 ;
-(void)endArray;
-(void)endDictionary;
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