// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKSPDICTIONARYDESERIALIZER_H
#define HKSPDICTIONARYDESERIALIZER_H

@class NSCoder, NSSet, NSDictionary, NSMutableArray;



@interface HKSPDictionaryDeserializer : NSCoder

@property (readonly, nonatomic) NSSet *allowedClasses; // ivar: _allowedClasses
@property (readonly, nonatomic) NSUInteger serializationOptions; // ivar: _serializationOptions
@property (readonly, nonatomic) NSDictionary *serializedDictionary; // ivar: _serializedDictionary
@property (readonly, nonatomic) NSMutableArray *stack; // ivar: _stack


-(BOOL)allowsKeyedCoding;
-(BOOL)decodeBoolForKey:(id)arg0 ;
-(CGFloat)decodeDoubleForKey:(id)arg0 ;
-(NSInteger)decodeInt64ForKey:(id)arg0 ;
-(NSInteger)decodeIntegerForKey:(id)arg0 ;
-(float)decodeFloatForKey:(id)arg0 ;
-(id)_decodeDeserializable:(id)arg0 error:(*id)arg1 ;
-(id)_decodeObject:(id)arg0 error:(*id)arg1 ;
-(id)decodeObjectForKey:(id)arg0 ;
-(id)decodeTopLevelObjectOfClass:(Class)arg0 forKey:(id)arg1 error:(*id)arg2 ;
-(id)deserializeObjectOfClass:(Class)arg0 error:(*id)arg1 ;
-(id)initWithAllowedClasses:(id)arg0 serializedDictionary:(id)arg1 ;
-(id)initWithAllowedClasses:(id)arg0 serializedDictionary:(id)arg1 serializationOptions:(NSUInteger)arg2 ;
-(int)decodeInt32ForKey:(id)arg0 ;
-(int)decodeIntForKey:(id)arg0 ;


@end


#endif