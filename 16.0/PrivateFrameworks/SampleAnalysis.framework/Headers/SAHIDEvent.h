// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAHIDEVENT_H
#define SAHIDEVENT_H

@class NSString, NSArray;
@protocol SASerializable;

#import <Foundation/Foundation.h>

#import "SATimestamp.h"

@interface SAHIDEvent : NSObject <SASerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) SATimestamp *hidEventTimestamp; // ivar: _hidEventTimestamp
@property (readonly) unsigned int hidEventType; // ivar: _hidEventType
@property (readonly) NSString *hidEventTypeString;
@property (readonly) NSArray *steps; // ivar: _steps
@property (readonly) Class superclass;
@property (readonly) CGFloat thresholdToGroupSameEventType;


+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromSerializedBuffer:(*void)arg0 bufferLength:(NSUInteger)arg1 ;
+(void)parseKTrace:(struct ktrace_session *)arg0 findingHIDEvents:(id)arg1 ;
-(BOOL)addSelfToBuffer:(struct ? *)arg0 bufferLength:(NSUInteger)arg1 withCompletedSerializationDictionary:(id)arg2 ;
-(NSUInteger)sizeInBytesForSerializedVersion;
-(void)addSelfToSerializationDictionary:(id)arg0 ;
-(void)populateReferencesUsingBuffer:(*void)arg0 bufferLength:(NSUInteger)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3 ;


@end


#endif