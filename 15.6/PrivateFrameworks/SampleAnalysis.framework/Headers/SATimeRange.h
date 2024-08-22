// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SATIMERANGE_H
#define SATIMERANGE_H

@class NSString;
@protocol SAJSONSerialization, SASerializable, NSCopying;

#import <Foundation/Foundation.h>

#import "SATimestamp.h"

@interface SATimeRange : NSObject <SAJSONSerialization, SASerializable, NSCopying>

 {
    SATimestamp *_startTime;
    SATimestamp *_endTime;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSUInteger deltaMachAbsTime;
@property (readonly) CGFloat deltaMachAbsTimeSeconds;
@property (readonly) NSUInteger deltaMachContTime;
@property (readonly) CGFloat deltaMachContTimeSeconds;
@property (readonly) CGFloat deltaWallTime;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) SATimestamp *endTime;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) SATimestamp *startTime;
@property (readonly) Class superclass;
@property (readonly) Class superclass;


+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromSerializedBuffer:(*void)arg0 bufferLength:(NSUInteger)arg1 ;
+(id)timeRangeStart:(id)arg0 end:(id)arg1 ;
-(BOOL)addSelfToBuffer:(struct ? *)arg0 bufferLength:(NSUInteger)arg1 withCompletedSerializationDictionary:(id)arg2 ;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)sizeInBytesForSerializedVersion;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithStart:(id)arg0 end:(id)arg1 ;
-(void)addSelfToSerializationDictionary:(id)arg0 ;
-(void)populateReferencesUsingBuffer:(*void)arg0 bufferLength:(NSUInteger)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3 ;
-(void)writeJSONDictionaryEntriesToStream:(id)arg0 ;


@end


#endif