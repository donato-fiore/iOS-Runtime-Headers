// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAWSUPDATEDATASTORE_H
#define SAWSUPDATEDATASTORE_H

@class NSMutableArray, NSString;
@protocol SASerializable, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SAWSUpdateDataStore : NSObject <SASerializable>

 {
    NSMutableArray *_wsUpdateArray;
    NSObject<OS_dispatch_queue> *_wsUpdateCallbackQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromSerializedBuffer:(*void)arg0 bufferLength:(NSUInteger)arg1 ;
-(BOOL)addSelfToBuffer:(*void)arg0 bufferLength:(NSUInteger)arg1 withCompletedSerializationDictionary:(id)arg2 ;
-(NSUInteger)sizeInBytesForSerializedVersion;
-(id)init;
-(void)addSelfToSerializationDictionary:(id)arg0 ;
-(void)dealloc;
-(void)populateReferencesUsingBuffer:(*void)arg0 bufferLength:(NSUInteger)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3 ;


@end


#endif