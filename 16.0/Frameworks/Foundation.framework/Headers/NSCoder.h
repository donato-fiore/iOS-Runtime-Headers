// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSCODER_H
#define NSCODER_H


#import <Foundation/Foundation.h>


@interface NSCoder : NSObject



+(BOOL)__categorizeException:(id)arg0 intoError:(*id)arg1 ;
-(*void)decodeBytesWithReturnedLength:(*NSUInteger)arg0 ;
-(BOOL)__failWithExceptionName:(id)arg0 errorCode:(NSInteger)arg1 format:(id)arg2 ;
-(BOOL)_allowsValueCoding;
-(BOOL)_validateAllowedClass:(Class)arg0 forKey:(id)arg1 allowingInvocations:(BOOL)arg2 ;
-(BOOL)_validateAllowedClassesContainsClass:(Class)arg0 forKey:(id)arg1 ;
-(BOOL)allowsKeyedCoding;
-(BOOL)containsValueForKey:(id)arg0 ;
-(BOOL)decodeBoolForKey:(id)arg0 ;
-(BOOL)requiresSecureCoding;
-(BOOL)validateAllowedClass:(Class)arg0 forKey:(id)arg1 ;
-(BOOL)validateClassSupportsSecureCoding:(Class)arg0 ;
-(CGFloat)decodeDoubleForKey:(id)arg0 ;
-(NSInteger)decodeInt64ForKey:(id)arg0 ;
-(NSInteger)decodeIntegerForKey:(id)arg0 ;
-(NSInteger)decodeLongForKey:(id)arg0 ;
-(NSInteger)decodingFailurePolicy;
-(NSInteger)versionForClassName:(id)arg0 ;
-(char *)decodeBytesForKey:(id)arg0 returnedLength:(*NSUInteger)arg1 ;
-(float)decodeFloatForKey:(id)arg0 ;
-(id)__decoderInfoForAllowedClassesWarning;
-(id)allowedClasses;
-(id)decodeArrayOfObjectsOfClass:(Class)arg0 forKey:(id)arg1 ;
-(id)decodeArrayOfObjectsOfClasses:(id)arg0 forKey:(id)arg1 ;
-(id)decodeDataObject;
-(id)decodeDictionaryWithKeysOfClass:(Class)arg0 objectsOfClass:(Class)arg1 forKey:(id)arg2 ;
-(id)decodeDictionaryWithKeysOfClasses:(id)arg0 objectsOfClasses:(id)arg1 forKey:(id)arg2 ;
-(id)decodeObject;
-(id)decodeObjectForKey:(id)arg0 ;
-(id)decodeObjectForKey:(id)arg0 error:(*id)arg1 ;
-(id)decodeObjectOfClass:(Class)arg0 forKey:(id)arg1 ;
-(id)decodeObjectOfClass:(Class)arg0 forKey:(id)arg1 error:(*id)arg2 ;
-(id)decodeObjectOfClasses:(id)arg0 forKey:(id)arg1 ;
-(id)decodeObjectOfClasses:(id)arg0 forKey:(id)arg1 error:(*id)arg2 ;
-(id)decodePropertyListForKey:(id)arg0 ;
-(id)decodeTopLevelObjectAndReturnError:(*id)arg0 ;
-(id)decodeTopLevelObjectForKey:(id)arg0 error:(*id)arg1 ;
-(id)decodeTopLevelObjectOfClass:(Class)arg0 forKey:(id)arg1 error:(*id)arg2 ;
-(id)decodeTopLevelObjectOfClasses:(id)arg0 forKey:(id)arg1 error:(*id)arg2 ;
-(id)error;
-(int)decodeInt32ForKey:(id)arg0 ;
-(int)decodeIntForKey:(id)arg0 ;
-(struct CGPoint )decodePoint;
-(struct CGPoint )decodePointForKey:(id)arg0 ;
-(struct CGRect )decodeRect;
-(struct CGRect )decodeRectForKey:(id)arg0 ;
-(struct CGSize )decodeSize;
-(struct CGSize )decodeSizeForKey:(id)arg0 ;
-(struct _NSZone *)objectZone;
-(unsigned int)systemVersion;
-(void)__setError:(id)arg0 ;
-(void)decodeArrayOfObjCType:(char *)arg0 count:(NSUInteger)arg1 at:(*void)arg2 ;
-(void)decodeValueOfObjCType:(char *)arg0 at:(*void)arg1 ;
-(void)decodeValueOfObjCType:(char *)arg0 at:(*void)arg1 size:(NSUInteger)arg2 ;
-(void)decodeValuesOfObjCTypes:(char *)arg0 ;
-(void)encodeArrayOfObjCType:(char *)arg0 count:(NSUInteger)arg1 at:(*void)arg2 ;
-(void)encodeBool:(BOOL)arg0 forKey:(id)arg1 ;
-(void)encodeBycopyObject:(id)arg0 ;
-(void)encodeByrefObject:(id)arg0 ;
-(void)encodeBytes:(*void)arg0 length:(NSUInteger)arg1 ;
-(void)encodeBytes:(char *)arg0 length:(NSUInteger)arg1 forKey:(id)arg2 ;
-(void)encodeConditionalObject:(id)arg0 ;
-(void)encodeConditionalObject:(id)arg0 forKey:(id)arg1 ;
-(void)encodeDataObject:(id)arg0 ;
-(void)encodeDouble:(CGFloat)arg0 forKey:(id)arg1 ;
-(void)encodeFloat:(float)arg0 forKey:(id)arg1 ;
-(void)encodeInt32:(int)arg0 forKey:(id)arg1 ;
-(void)encodeInt64:(NSInteger)arg0 forKey:(id)arg1 ;
-(void)encodeInt:(int)arg0 forKey:(id)arg1 ;
-(void)encodeInteger:(NSInteger)arg0 forKey:(id)arg1 ;
-(void)encodeLong:(NSInteger)arg0 forKey:(id)arg1 ;
-(void)encodeObject:(id)arg0 ;
-(void)encodeObject:(id)arg0 forKey:(id)arg1 ;
-(void)encodePoint:(struct CGPoint )arg0 ;
-(void)encodePoint:(struct CGPoint )arg0 forKey:(id)arg1 ;
-(void)encodeRect:(struct CGRect )arg0 ;
-(void)encodeRect:(struct CGRect )arg0 forKey:(id)arg1 ;
-(void)encodeRootObject:(id)arg0 ;
-(void)encodeSize:(struct CGSize )arg0 ;
-(void)encodeSize:(struct CGSize )arg0 forKey:(id)arg1 ;
-(void)encodeValueOfObjCType:(char *)arg0 at:(*void)arg1 ;
-(void)encodeValuesOfObjCTypes:(char *)arg0 ;
-(void)failWithError:(id)arg0 ;
-(void)setAllowedClasses:(id)arg0 ;
-(void)setObjectZone:(struct _NSZone *)arg0 ;


@end


#endif