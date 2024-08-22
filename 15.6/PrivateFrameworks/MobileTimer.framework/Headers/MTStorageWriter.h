// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTSTORAGEWRITER_H
#define MTSTORAGEWRITER_H

@class NSCoder, NSMutableArray;
@protocol MTSerializer;



@interface MTStorageWriter : NSCoder <MTSerializer>



@property (readonly, nonatomic) NSCoder *mtCoder;
@property (readonly, nonatomic) NSUInteger mtType;
@property (retain, nonatomic) NSMutableArray *stack; // ivar: _stack


-(id)_dictionaryForProtocolObject:(id)arg0 ;
-(id)_serializingProtocol;
-(id)encodedDictionary;
-(id)init;
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


@end


#endif