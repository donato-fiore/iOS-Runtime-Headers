// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAPASTYLEWAITINFO_H
#define SAPASTYLEWAITINFO_H

@class NSString;
@protocol SASerializable;

#import <Foundation/Foundation.h>

#import "SAWaitInfo.h"

@interface SAPAStyleWaitInfo : NSObject <SASerializable>

 {
    SAWaitInfo *_waitInfo;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromSerializedBuffer:(*void)arg0 bufferLength:(NSUInteger)arg1 ;
-(BOOL)addSelfToBuffer:(*void)arg0 bufferLength:(NSUInteger)arg1 withCompletedSerializationDictionary:(id)arg2 ;
-(NSUInteger)sizeInBytesForSerializedVersion;
-(id)_initWithSerializedWaitInfo:(struct ? *)arg0 ;
-(void)addSelfToSerializationDictionary:(id)arg0 ;
-(void)populateReferencesUsingBuffer:(*void)arg0 bufferLength:(NSUInteger)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3 ;


@end


#endif