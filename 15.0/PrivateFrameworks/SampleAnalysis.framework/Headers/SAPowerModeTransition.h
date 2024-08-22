// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAPOWERMODETRANSITION_H
#define SAPOWERMODETRANSITION_H

@class NSString;
@protocol SAJSONSerialization, SASerializable;

#import <Foundation/Foundation.h>

#import "SATimestamp.h"

@interface SAPowerModeTransition : NSObject <SAJSONSerialization, SASerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) BOOL lowPowerMode; // ivar: _lowPowerMode
@property (readonly) BOOL lowPowerModeChanged; // ivar: _lowPowerModeChanged
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) SATimestamp *timestamp; // ivar: _timestamp


+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromSerializedBuffer:(*void)arg0 bufferLength:(NSUInteger)arg1 ;
-(BOOL)addSelfToBuffer:(struct ? *)arg0 bufferLength:(NSUInteger)arg1 withCompletedSerializationDictionary:(id)arg2 ;
-(NSUInteger)sizeInBytesForSerializedVersion;
-(void)addSelfToSerializationDictionary:(id)arg0 ;
-(void)populateReferencesUsingBuffer:(*void)arg0 bufferLength:(NSUInteger)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3 ;
-(void)writeJSONDictionaryEntriesToStream:(id)arg0 ;


@end


#endif