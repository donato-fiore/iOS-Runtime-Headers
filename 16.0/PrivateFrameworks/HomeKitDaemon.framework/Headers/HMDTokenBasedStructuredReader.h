// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDTOKENBASEDSTRUCTUREDREADER_H
#define HMDTOKENBASEDSTRUCTUREDREADER_H



#import "HMDStructuredReader.h"

@interface HMDTokenBasedStructuredReader : HMDStructuredReader {
    _HMDStructuredDataToken _token;
}




-(BOOL)readBoolean;
-(NSInteger)tokenType;
-(NSUInteger)beginArray;
-(NSUInteger)beginDictionary;
-(id)error;
-(id)readData;
-(id)readDate;
-(id)readDictionaryKey;
-(id)readNumber;
-(id)readString;
-(id)readUUID;
-(struct _HMDStructuredDataToken )nextTokenAfterToken:(struct _HMDStructuredDataToken *)arg0 ;
-(struct _HMDStructuredDataToken )readToken;
-(void)endArray;
-(void)endDictionary;
-(void)failWithError:(id)arg0 ;
-(void)readNull;
-(void)skipToken;


@end


#endif