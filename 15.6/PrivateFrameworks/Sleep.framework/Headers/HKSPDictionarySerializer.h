// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKSPDICTIONARYSERIALIZER_H
#define HKSPDICTIONARYSERIALIZER_H

@class NSCoder, NSError, NSMutableSet, NSSet, NSDictionary, NSMutableArray;



@interface HKSPDictionarySerializer : NSCoder

@property (readonly, nonatomic) NSError *internalError; // ivar: _internalError
@property (readonly, nonatomic) NSMutableSet *mutableSerializedClasses; // ivar: _mutableSerializedClasses
@property (readonly, nonatomic) NSUInteger serializationOptions; // ivar: _serializationOptions
@property (readonly, nonatomic) NSSet *serializedClasses;
@property (readonly, nonatomic) NSDictionary *serializedDictionary; // ivar: _serializedDictionary
@property (readonly, nonatomic) NSMutableArray *stack; // ivar: _stack


-(BOOL)allowsKeyedCoding;
-(BOOL)serialize:(id)arg0 error:(*id)arg1 ;
-(id)_dictionaryForProtocolObject:(id)arg0 ;
-(id)init;
-(id)initWithSerializationOptions:(NSUInteger)arg0 ;
-(void)_encodeObject:(id)arg0 forKey:(id)arg1 ;
-(void)_encodeProtocolObject:(id)arg0 forKey:(id)arg1 ;
-(void)encodeBool:(BOOL)arg0 forKey:(id)arg1 ;
-(void)encodeDouble:(CGFloat)arg0 forKey:(id)arg1 ;
-(void)encodeFloat:(float)arg0 forKey:(id)arg1 ;
-(void)encodeInt32:(int)arg0 forKey:(id)arg1 ;
-(void)encodeInt64:(NSInteger)arg0 forKey:(id)arg1 ;
-(void)encodeInt:(int)arg0 forKey:(id)arg1 ;
-(void)encodeInteger:(NSInteger)arg0 forKey:(id)arg1 ;
-(void)encodeObject:(id)arg0 forKey:(id)arg1 ;
-(void)encodeRootObject:(id)arg0 ;


@end


#endif