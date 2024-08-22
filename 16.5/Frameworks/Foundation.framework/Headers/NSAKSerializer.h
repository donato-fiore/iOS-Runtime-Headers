// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSAKSERIALIZER_H
#define NSAKSERIALIZER_H


#import <Foundation/Foundation.h>


@interface NSAKSerializer : NSObject {
    id *ss;
}




-(NSUInteger)serializeData:(id)arg0 ;
-(NSUInteger)serializeList:(id)arg0 ;
-(NSUInteger)serializeListItemIn:(id)arg0 at:(NSUInteger)arg1 ;
-(NSUInteger)serializeObject:(id)arg0 ;
-(NSUInteger)serializePListKeyIn:(id)arg0 key:(id)arg1 value:(id)arg2 ;
-(NSUInteger)serializePListValueIn:(id)arg0 key:(id)arg1 value:(id)arg2 ;
-(NSUInteger)serializePropertyList:(id)arg0 ;
-(NSUInteger)serializeString:(id)arg0 ;
-(id)initForSerializerStream:(id)arg0 ;
-(id)serializerStream;
-(void)dealloc;


@end


#endif