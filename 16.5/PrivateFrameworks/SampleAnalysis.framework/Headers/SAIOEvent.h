// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAIOEVENT_H
#define SAIOEVENT_H

@class NSString;
@protocol SASerializable;

#import <Foundation/Foundation.h>

#import "SATimestamp.h"

@interface SAIOEvent : NSObject <SASerializable>

 {
    unsigned int _rawType;
    NSUInteger _blockNumber;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) SATimestamp *endTimestamp; // ivar: _endTimestamp
@property (readonly) NSUInteger hash;
@property (readonly) BOOL isRead;
@property (readonly) NSUInteger size; // ivar: _size
@property (readonly) SATimestamp *startTimestamp; // ivar: _startTimestamp
@property (readonly) Class superclass;
@property (readonly) NSUInteger threadID; // ivar: _threadID
@property (readonly) unsigned int tier; // ivar: _tier
@property (readonly) NSString *type;


+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromSerializedBuffer:(*void)arg0 bufferLength:(NSUInteger)arg1 ;
+(id)typeString:(unsigned int)arg0 ;
-(BOOL)addSelfToBuffer:(struct ? *)arg0 bufferLength:(NSUInteger)arg1 withCompletedSerializationDictionary:(id)arg2 ;
-(id)initWithStartTime:(id)arg0 threadID:(NSUInteger)arg1 blockNumber:(NSUInteger)arg2 size:(NSUInteger)arg3 type:(NSUInteger)arg4 tier:(unsigned int)arg5 ;
-(void)addSelfToSerializationDictionary:(id)arg0 ;
-(void)populateReferencesUsingBuffer:(*void)arg0 bufferLength:(NSUInteger)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3 ;
-(void)writeJSONDictionaryEntriesToStream:(id)arg0 ;


@end


#endif