// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSAKDESERIALIZER_H
#define NSAKDESERIALIZER_H


#import <Foundation/Foundation.h>


@interface NSAKDeserializer : NSObject {
    id *ds;
}




-(id)deserializeData:(id)arg0 ;
-(id)deserializeList:(id)arg0 ;
-(id)deserializeListItemIn:(id)arg0 at:(NSUInteger)arg1 length:(NSUInteger)arg2 ;
-(id)deserializeNewData;
-(id)deserializeNewKeyString;
-(id)deserializeNewList;
-(id)deserializeNewObject;
-(id)deserializeNewPList;
-(id)deserializeNewString;
-(id)deserializePList:(id)arg0 ;
-(id)deserializePListKeyIn:(id)arg0 ;
-(id)deserializePListValueIn:(id)arg0 key:(id)arg1 length:(NSUInteger)arg2 ;
-(id)deserializeString:(id)arg0 ;
-(id)deserializerStream;
-(id)initForDeserializerStream:(id)arg0 ;
-(void)dealloc;


@end


#endif