// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAMOUNTSTATUSTRACKER_H
#define SAMOUNTSTATUSTRACKER_H

@class NSMutableSet, NSMutableDictionary, NSString;
@protocol SASerializable;

#import <Foundation/Foundation.h>


@interface SAMountStatusTracker : NSObject <SASerializable>

 {
    NSMutableSet *_threadsSeen;
    NSMutableDictionary *_mountStatusDict;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromSerializedBuffer:(*void)arg0 bufferLength:(NSUInteger)arg1 ;
-(BOOL)addSelfToBuffer:(struct ? *)arg0 bufferLength:(NSUInteger)arg1 withCompletedSerializationDictionary:(id)arg2 ;
-(BOOL)hasUnresponsiveMountsForThreadID:(NSUInteger)arg0 ;
-(NSUInteger)sizeInBytesForSerializedVersion;
-(id)init;
-(void)addSelfToSerializationDictionary:(id)arg0 ;
-(void)enumerateMountsBlockingThread:(NSUInteger)arg0 betweenStartTime:(id)arg1 endTime:(id)arg2 block:(id)arg3 ;
-(void)enumerateUnresponsiveMountsBetweenStartTime:(id)arg0 endTime:(id)arg1 block:(id)arg2 ;
-(void)fillInThreadsSeen;
-(void)populateReferencesUsingBuffer:(*void)arg0 bufferLength:(NSUInteger)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3 ;


@end


#endif