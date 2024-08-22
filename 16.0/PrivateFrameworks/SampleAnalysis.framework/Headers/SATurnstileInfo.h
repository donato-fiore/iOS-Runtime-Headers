// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SATURNSTILEINFO_H
#define SATURNSTILEINFO_H

@class NSString;
@protocol SASerializable;


#import "SABlockingInfo.h"

@interface SATurnstileInfo : SABlockingInfo <SASerializable>



@property (readonly) NSUInteger context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger flags; // ivar: _flags
@property (readonly) NSUInteger hash;
@property (readonly) unsigned char numHops; // ivar: _numHops
@property (readonly) unsigned char priority; // ivar: _priority
@property (readonly) Class superclass;


+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromSerializedBuffer:(*void)arg0 bufferLength:(NSUInteger)arg1 ;
-(BOOL)addSelfToBuffer:(struct ? *)arg0 bufferLength:(NSUInteger)arg1 withCompletedSerializationDictionary:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)blockingTid;
-(NSUInteger)sizeInBytesForSerializedVersion;
-(id)descriptionForPid:(int)arg0 tid:(NSUInteger)arg1 threadPriority:(int)arg2 options:(NSUInteger)arg3 nameCallback:(id)arg4 ;
-(id)init;
-(id)initWithKCDataTurnstileInfo:(struct stackshot_thread_turnstileinfo_v2 *)arg0 ;
-(int)blockingPid;
-(void)addSelfToSerializationDictionary:(id)arg0 ;
-(void)populateReferencesUsingBuffer:(*void)arg0 bufferLength:(NSUInteger)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3 ;


@end


#endif