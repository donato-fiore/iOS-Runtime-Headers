// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BMDSLJSONCODER_H
#define BMDSLJSONCODER_H

@class NSCoder, NSMutableArray, NSMutableDictionary, NSDictionary;



@interface BMDSLJSONCoder : NSCoder {
    NSMutableArray *_stack;
    NSMutableDictionary *_currentDictionary;
    BOOL _allowSecureCodingObjects;
    BOOL _allowKeyModifications;
}


@property (copy, nonatomic) NSDictionary *userInfo; // ivar: _userInfo


+(BOOL)hasNativeSupportForClass:(Class)arg0 ;
-(BOOL)_jsonDecodeArray:(*id)arg0 forKey:(*id)arg1 ;
-(BOOL)_jsonDecodeDictionary:(*id)arg0 asClass:(Class)arg1 ;
-(BOOL)_jsonDecodeDictionary:(*id)arg0 forKey:(*id)arg1 ;
-(BOOL)_jsonDecodeObject:(*id)arg0 encodingDescriptor:(id)arg1 ;
-(BOOL)_jsonDecodeObject:(*id)arg0 forKey:(*id)arg1 ;
-(BOOL)_jsonEncodeArray:(*id)arg0 forKey:(*id)arg1 ;
-(BOOL)_jsonEncodeDictionary:(*id)arg0 forKey:(*id)arg1 ;
-(BOOL)_jsonEncodeObject:(*id)arg0 forKey:(*id)arg1 ;
-(BOOL)allowsKeyedCoding;
-(BOOL)decodeBoolForKey:(id)arg0 ;
-(CGFloat)decodeDoubleForKey:(id)arg0 ;
-(Class)classFromEncodingDescriptor:(id)arg0 ;
-(NSInteger)decodeInt64ForKey:(id)arg0 ;
-(NSInteger)decodeIntegerForKey:(id)arg0 ;
-(float)decodeFloatForKey:(id)arg0 ;
-(id)buildKeyFromClass:(Class)arg0 originalKey:(id)arg1 ;
-(id)buildKeyFromEncodingDescriptor:(id)arg0 originalKey:(id)arg1 ;
-(id)decodeObjectForKey:(id)arg0 ;
-(id)decodeRootObjectFromData:(id)arg0 ;
-(id)encodeDataFromRootObject:(id)arg0 ;
-(id)encodingCompatibleObjectFromRootObject:(id)arg0 ;
-(id)encodingDescriptorFromKey:(id)arg0 ;
-(id)init;
-(id)initWithOptions:(NSUInteger)arg0 ;
-(id)keyWithoutEncodingDescriptor:(id)arg0 ;
-(id)pop;
-(int)decodeInt32ForKey:(id)arg0 ;
-(int)decodeIntForKey:(id)arg0 ;
-(struct _NSRange )encodingDescriptorRangeInKey:(id)arg0 ;
-(void)encodeBool:(BOOL)arg0 forKey:(id)arg1 ;
-(void)encodeDouble:(CGFloat)arg0 forKey:(id)arg1 ;
-(void)encodeFloat:(float)arg0 forKey:(id)arg1 ;
-(void)encodeInt32:(int)arg0 forKey:(id)arg1 ;
-(void)encodeInt64:(NSInteger)arg0 forKey:(id)arg1 ;
-(void)encodeInt:(int)arg0 forKey:(id)arg1 ;
-(void)encodeInteger:(NSInteger)arg0 forKey:(id)arg1 ;
-(void)encodeObject:(id)arg0 forKey:(id)arg1 ;
-(void)push:(id)arg0 ;


@end


#endif