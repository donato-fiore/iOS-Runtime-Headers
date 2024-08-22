// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAMEMORYPRESSUREEVENT_H
#define SAMEMORYPRESSUREEVENT_H

@class NSString;
@protocol SASerializable;

#import <Foundation/Foundation.h>

#import "SATimestamp.h"

@interface SAMemoryPressureEvent : NSObject <SASerializable>

 {
    unsigned char _memoryStatusLevel;
    SATimestamp *_timestamp;
    NSUInteger _availableBytes;
}


@property (readonly) NSUInteger availableBytes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) unsigned char memoryStatusLevel;
@property (readonly) Class superclass;
@property (readonly) SATimestamp *timestamp;


+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromSerializedBuffer:(*void)arg0 bufferLength:(NSUInteger)arg1 ;
-(BOOL)addSelfToBuffer:(struct ? *)arg0 bufferLength:(NSUInteger)arg1 withCompletedSerializationDictionary:(id)arg2 ;
-(NSUInteger)sizeInBytesForSerializedVersion;
-(void)addSelfToSerializationDictionary:(id)arg0 ;
-(void)populateReferencesUsingBuffer:(*void)arg0 bufferLength:(NSUInteger)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3 ;


@end


#endif