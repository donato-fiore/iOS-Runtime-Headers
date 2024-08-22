// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDSTRUCTUREDREADER_H
#define HMDSTRUCTUREDREADER_H



#import "HMDStructuredDataStream.h"

@interface HMDStructuredReader : HMDStructuredDataStream

@property (readonly) NSInteger tokenType;


+(id)extendedTypeReaderWithReader:(id)arg0 ;
+(id)readerFromOPACKData:(id)arg0 ;
+(id)readerFromObject:(id)arg0 ;
+(id)readerFromObjectWithExtendedTypes:(id)arg0 ;
-(BOOL)readBoolean;
-(NSUInteger)beginArray;
-(NSUInteger)beginDictionary;
-(id)readData;
-(id)readDate;
-(id)readDictionaryKey;
-(id)readLogicalValueAsObject;
-(id)readNumber;
-(id)readString;
-(id)readUUID;
-(struct _HMDStructuredDataToken )readToken;
-(void)copyLogicalValueToWriter:(id)arg0 ;
-(void)endArray;
-(void)endDictionary;
-(void)readNull;
-(void)skipLogicalValue;
-(void)skipToken;


@end


#endif