// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NEHASHER_H
#define NEHASHER_H

@class NSCoder, NSArray;



@interface NEHasher : NSCoder {
    *CC_SHA1state_st _sha1Context;
    NSArray *_classPrefixWhitelist;
}




+(id)hashObject:(id)arg0 ;
+(id)hashObject:(id)arg0 withClassPrefixWhitelist:(id)arg1 ;
-(BOOL)allowsKeyedCoding;
-(BOOL)containsValueForKey:(id)arg0 ;
-(BOOL)decodeBoolForKey:(id)arg0 ;
-(CGFloat)decodeDoubleForKey:(id)arg0 ;
-(NSInteger)decodeInt64ForKey:(id)arg0 ;
-(NSInteger)decodeIntegerForKey:(id)arg0 ;
-(NSInteger)versionForClassName:(id)arg0 ;
-(char *)decodeBytesForKey:(id)arg0 returnedLength:(*NSUInteger)arg1 ;
-(float)decodeFloatForKey:(id)arg0 ;
-(id)decodeDataObject;
-(id)decodeObjectForKey:(id)arg0 ;
-(id)decodeObjectOfClass:(Class)arg0 forKey:(id)arg1 ;
-(id)decodeObjectOfClasses:(id)arg0 forKey:(id)arg1 ;
-(id)decodePropertyListForKey:(id)arg0 ;
-(id)init;
-(int)decodeInt32ForKey:(id)arg0 ;
-(int)decodeIntForKey:(id)arg0 ;
-(void)dealloc;
-(void)decodeValueOfObjCType:(char *)arg0 at:(*void)arg1 ;
-(void)encodeBool:(BOOL)arg0 forKey:(id)arg1 ;
-(void)encodeBytes:(*void)arg0 length:(NSUInteger)arg1 ;
-(void)encodeBytes:(char *)arg0 length:(NSUInteger)arg1 forKey:(id)arg2 ;
-(void)encodeConditionalObject:(id)arg0 forKey:(id)arg1 ;
-(void)encodeDataObject:(id)arg0 ;
-(void)encodeDouble:(CGFloat)arg0 forKey:(id)arg1 ;
-(void)encodeFloat:(float)arg0 forKey:(id)arg1 ;
-(void)encodeInt32:(int)arg0 forKey:(id)arg1 ;
-(void)encodeInt64:(NSInteger)arg0 forKey:(id)arg1 ;
-(void)encodeInt:(int)arg0 forKey:(id)arg1 ;
-(void)encodeInteger:(NSInteger)arg0 forKey:(id)arg1 ;
-(void)encodeObject:(id)arg0 forKey:(id)arg1 ;
-(void)encodeValueOfObjCType:(char *)arg0 at:(*void)arg1 ;


@end


#endif