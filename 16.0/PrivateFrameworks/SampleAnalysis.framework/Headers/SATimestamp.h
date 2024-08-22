// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SATIMESTAMP_H
#define SATIMESTAMP_H

@class NSString;
@protocol SAJSONSerialization, SASerializable, NSCopying;

#import <Foundation/Foundation.h>


@interface SATimestamp : NSObject <SAJSONSerialization, SASerializable, NSCopying>

 {
    NSUInteger _machAbsTime;
    CGFloat _machAbsTimeSeconds;
    NSUInteger _machContTime;
    CGFloat _machContTimeSeconds;
    CGFloat _wallTime;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger machAbsTime;
@property (readonly) CGFloat machAbsTimeSeconds;
@property (readonly) NSUInteger machContTime;
@property (readonly) CGFloat machContTimeSeconds;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) CGFloat wallTime;


+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromSerializedBuffer:(*void)arg0 bufferLength:(NSUInteger)arg1 ;
+(id)timestamp;
+(id)timestampWithMachAbsTime:(NSUInteger)arg0 machAbsTimeSec:(CGFloat)arg1 machContTime:(NSUInteger)arg2 machContTimeSec:(CGFloat)arg3 wallTime:(CGFloat)arg4 ;
+(id)timestampWithMachAbsTime:(NSUInteger)arg0 machContTime:(NSUInteger)arg1 wallTime:(CGFloat)arg2 machTimebase:(struct mach_timebase_info )arg3 ;
-(BOOL)addSelfToBuffer:(struct ? *)arg0 bufferLength:(NSUInteger)arg1 withCompletedSerializationDictionary:(id)arg2 ;
-(BOOL)eq:(id)arg0 ;
-(BOOL)ge:(id)arg0 ;
-(BOOL)gt:(id)arg0 ;
-(BOOL)isEqualToTimestamp:(id)arg0 ;
-(BOOL)le:(id)arg0 ;
-(BOOL)lt:(id)arg0 ;
-(BOOL)ne:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)sizeInBytesForSerializedVersion;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithMachAbsTime:(NSUInteger)arg0 machAbsTimeSec:(CGFloat)arg1 machContTime:(NSUInteger)arg2 machContTimeSec:(CGFloat)arg3 wallTime:(CGFloat)arg4 ;
-(void)addSelfToSerializationDictionary:(id)arg0 ;
-(void)guessMissingTimesBasedOnCurrentTime;
-(void)guessMissingTimesBasedOnTimestamp:(id)arg0 ;
-(void)populateReferencesUsingBuffer:(*void)arg0 bufferLength:(NSUInteger)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3 ;
-(void)writeJSONDictionaryEntriesToStream:(id)arg0 ;


@end


#endif