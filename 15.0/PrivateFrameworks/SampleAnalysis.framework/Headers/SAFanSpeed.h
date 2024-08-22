// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAFANSPEED_H
#define SAFANSPEED_H

@class NSString;
@protocol SASerializable;

#import <Foundation/Foundation.h>

#import "SATimestamp.h"

@interface SAFanSpeed : NSObject <SASerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) int fanSpeed; // ivar: _fanSpeed
@property (readonly) BOOL fanSpeedIsValid;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly) SATimestamp *timestamp; // ivar: _timestamp


+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromSerializedBuffer:(*void)arg0 bufferLength:(NSUInteger)arg1 ;
-(BOOL)addSelfToBuffer:(struct ? *)arg0 bufferLength:(NSUInteger)arg1 withCompletedSerializationDictionary:(id)arg2 ;
-(NSUInteger)sizeInBytesForSerializedVersion;
-(id)init;
-(id)initEmpty;
-(id)initWithTimestamp:(id)arg0 ;
-(void)addSelfToSerializationDictionary:(id)arg0 ;
-(void)populateReferencesUsingBuffer:(*void)arg0 bufferLength:(NSUInteger)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3 ;


@end


#endif