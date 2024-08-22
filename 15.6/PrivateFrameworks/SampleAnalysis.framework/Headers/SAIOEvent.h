// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAIOEVENT_H
#define SAIOEVENT_H

@class NSString;
@protocol SASerializable;

#import <Foundation/Foundation.h>

#import "SATimestamp.h"

@interface SAIOEvent : NSObject <SASerializable>

 {
    unsigned int _tier;
    unsigned int _rawType;
    SATimestamp *_startTimestamp;
    SATimestamp *_endTimestamp;
    NSUInteger _size;
    NSUInteger _blockPointer;
    NSUInteger _blockNumber;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) SATimestamp *endTimestamp;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger size;
@property (readonly) SATimestamp *startTimestamp;
@property (readonly) Class superclass;
@property (readonly) unsigned int tier;
@property (readonly) NSString *type;


+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromSerializedBuffer:(*void)arg0 bufferLength:(NSUInteger)arg1 ;
+(id)typeString:(unsigned int)arg0 ;
-(BOOL)addSelfToBuffer:(struct ? *)arg0 bufferLength:(NSUInteger)arg1 withCompletedSerializationDictionary:(id)arg2 ;
-(void)addSelfToSerializationDictionary:(id)arg0 ;
-(void)populateReferencesUsingBuffer:(*void)arg0 bufferLength:(NSUInteger)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3 ;


@end


#endif