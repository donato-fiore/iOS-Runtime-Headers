// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SIGNPOSTSUPPORTSERIALIZABLEDOBJECTCOLLECTION_H
#define SIGNPOSTSUPPORTSERIALIZABLEDOBJECTCOLLECTION_H

@class NSNumber, NSArray;

#import <Foundation/Foundation.h>


@interface SignpostSupportSerializabledObjectCollection : NSObject

@property (readonly, nonatomic) NSNumber *formatVersion; // ivar: _formatVersion
@property (readonly, nonatomic) NSUInteger machContinuousTimeFirst; // ivar: _machContinuousTimeFirst
@property (readonly, nonatomic) NSUInteger machContinuousTimeLast; // ivar: _machContinuousTimeLast
@property (readonly, nonatomic) NSArray *objectArray; // ivar: _objectArray


// +(BOOL)_enumerateSignpostObjectsInDeserializedCollectionDictionary:(id)arg0 processingBlock:(id)arg1 errorOut:(unk)arg2  ;
+(BOOL)_versionIsSupported:(id)arg0 ;
// +(BOOL)enumerateSignpostSupportObjectsInSerializedCollection:(id)arg0 processingBlock:(id)arg1 errorOut:(unk)arg2  ;
+(BOOL)timeRangeForSerializedCollection:(id)arg0 continuousTimeFirstOut:(*NSUInteger)arg1 continuousTimeLastOut:(*NSUInteger)arg2 errorOut:(*id)arg3 ;
+(id)_deserializedDictionaryForData:(id)arg0 errorOut:(*id)arg1 ;
-(id)initWithData:(id)arg0 errorOut:(*id)arg1 ;
-(id)initWithSerializeableObjectArray:(id)arg0 ;
-(id)newSerializedCollection:(BOOL)arg0 ;


@end


#endif