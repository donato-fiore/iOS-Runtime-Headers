// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKXUNCOMPRESSEDWRITER_H
#define CKXUNCOMPRESSEDWRITER_H

@protocol CKXWriterProtocol;


#import "CKXWriterBase.h"

@interface CKXUncompressedWriter : CKXWriterBase <CKXWriterProtocol>

 {
    unordered_map<unsigned long, std::pair<CKXStructInstance, unsigned long>, std::hash<unsigned long>, std::equal_to<unsigned long>, std::allocator<std::pair<const unsigned long, std::pair<CKXStructInstance, unsigned long>>>> pendingPageToFieldInCKXStructInstance;
    unordered_map<unsigned long, CKXListInstance, std::hash<unsigned long>, std::equal_to<unsigned long>, std::allocator<std::pair<const unsigned long, CKXListInstance>>> pendingPageToListInstance;
}




-(NSUInteger)fixedSizeForStruct:(NSUInteger)arg0 ;
-(NSUInteger)offsetForField:(NSUInteger)arg0 inStruct:(NSUInteger)arg1 ;
-(id)flush;
-(id)initWithSchema:(id)arg0 ;
-(struct ? )beginAppendedListStructInList:(struct ? )arg0 ;
-(struct ? )beginReferencedListForReference:(NSUInteger)arg0 inStruct:(struct ? )arg1 ;
-(struct ? )beginReferencedStructForReference:(NSUInteger)arg0 inStruct:(struct ? )arg1 ;
-(struct ? )beginRootStructWithType:(NSUInteger)arg0 ;
-(void)commitStruct:(struct ? )arg0 ;
-(void)setData:(*void)arg0 withEncoding:(char *)arg1 forField:(NSUInteger)arg2 inStruct:(struct ? )arg3 ;
-(void)setData:(*void)arg0 withLength:(NSUInteger)arg1 forList:(struct ? )arg2 ;


@end


#endif