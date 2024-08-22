// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTSTORAGEREADER_H
#define MTSTORAGEREADER_H

@class NSCoder, NSMutableArray;
@protocol MTSerializer;



@interface MTStorageReader : NSCoder <MTSerializer>



@property (readonly, nonatomic) NSCoder *mtCoder;
@property (readonly, nonatomic) NSUInteger mtType;
@property (retain, nonatomic) NSMutableArray *stack; // ivar: _stack


+(BOOL)_dictionaryIsForSerializableObject:(id)arg0 ;
+(id)_unwrap:(id)arg0 ;
-(BOOL)allowsKeyedCoding;
-(BOOL)decodeBoolForKey:(id)arg0 ;
-(CGFloat)decodeDoubleForKey:(id)arg0 ;
-(NSInteger)decodeInt64ForKey:(id)arg0 ;
-(NSInteger)decodeIntegerForKey:(id)arg0 ;
-(float)decodeFloatForKey:(id)arg0 ;
-(id)_decodeObject:(id)arg0 ;
-(id)_objectForDictionary:(id)arg0 ;
-(id)decodeObjectForKey:(id)arg0 ;
-(id)initWithEncodedDictionary:(id)arg0 ;
-(int)decodeInt32ForKey:(id)arg0 ;
-(int)decodeIntForKey:(id)arg0 ;


@end


#endif