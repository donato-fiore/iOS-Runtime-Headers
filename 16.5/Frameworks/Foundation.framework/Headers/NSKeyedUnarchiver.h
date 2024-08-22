// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSKEYEDUNARCHIVER_H
#define NSKEYEDUNARCHIVER_H

@protocol NSKeyedUnarchiverDelegate;


#import "NSCoder.h"
#import "_NSKeyedUnarchiverHelper.h"

@interface NSKeyedUnarchiver : NSCoder {
    id<NSKeyedUnarchiverDelegate> *_delegate;
    uint8_t _flags;
    *__CFDictionary _objRefMap;
    *__CFDictionary _replacementMap;
    *__CFDictionary _nameClassMap;
    *__CFDictionary _tmpRefObjMap;
    *__CFDictionary _refObjMap;
    int _genericKey;
    *? _offsetData;
    *__CFArray _containers;
    *__CFArray _objects;
    *__CFData _data;
    char * _bytes;
    NSUInteger _len;
    _NSKeyedUnarchiverHelper *_helper;
    *__CFDictionary _offsetObjMap;
}


@property NSInteger decodingFailurePolicy;
@property NSObject<NSKeyedUnarchiverDelegate> *delegate;
@property BOOL requiresSecureCoding;


+(Class)classForClassName:(id)arg0 ;
+(id)_strictlyUnarchivedObjectOfClasses:(id)arg0 fromData:(id)arg1 error:(*id)arg2 ;
+(id)unarchiveObjectWithData:(id)arg0 ;
+(id)unarchiveObjectWithData:(id)arg0 error:(*id)arg1 ;
+(id)unarchiveObjectWithFile:(id)arg0 ;
+(id)unarchiveTopLevelObjectWithData:(id)arg0 error:(*id)arg1 ;
+(id)unarchivedArrayOfObjectsOfClass:(Class)arg0 fromData:(id)arg1 error:(*id)arg2 ;
+(id)unarchivedArrayOfObjectsOfClasses:(id)arg0 fromData:(id)arg1 error:(*id)arg2 ;
+(id)unarchivedDictionaryWithKeysOfClass:(Class)arg0 objectsOfClass:(Class)arg1 fromData:(id)arg2 error:(*id)arg3 ;
+(id)unarchivedDictionaryWithKeysOfClasses:(id)arg0 objectsOfClasses:(id)arg1 fromData:(id)arg2 error:(*id)arg3 ;
+(id)unarchivedObjectOfClass:(Class)arg0 fromData:(id)arg1 error:(*id)arg2 ;
+(id)unarchivedObjectOfClasses:(id)arg0 fromData:(id)arg1 error:(*id)arg2 ;
+(int)_swift_checkClassAndWarnForKeyedArchiving:(Class)arg0 operation:(int)arg1 ;
+(void)initialize;
+(void)setClass:(Class)arg0 forClassName:(id)arg1 ;
-(*void)decodeBytesWithReturnedLength:(*NSUInteger)arg0 ;
-(BOOL)_allowsValueCoding;
-(BOOL)_containsNextUnkeyedObject;
-(BOOL)_strictSecureDecodingEnabled;
-(BOOL)_validateAllowedClassesContainsClass:(Class)arg0 forKey:(id)arg1 ;
-(BOOL)_willEnforceExplicitPlistTypes;
-(BOOL)allowsKeyedCoding;
-(BOOL)containsValueForKey:(id)arg0 ;
-(BOOL)decodeBoolForKey:(id)arg0 ;
-(CGFloat)decodeDoubleForKey:(id)arg0 ;
-(Class)classForClassName:(id)arg0 ;
-(NSInteger)decodeInt64ForKey:(id)arg0 ;
-(NSInteger)versionForClassName:(id)arg0 ;
-(char *)decodeBytesForKey:(id)arg0 returnedLength:(*NSUInteger)arg1 ;
-(float)decodeFloatForKey:(id)arg0 ;
-(id)_allowedClassNames;
-(id)_blobForCurrentObject;
-(id)_decodeArrayOfObjectsForKey:(id)arg0 ;
-(id)_decodeObjectOfClass:(Class)arg0 ;
-(id)_decodePropertyListForKey:(id)arg0 ;
-(id)_initForReadingFromData:(id)arg0 error:(*id)arg1 throwLegacyExceptions:(BOOL)arg2 ;
-(id)_initWithStream:(struct __CFReadStream *)arg0 data:(id)arg1 topDict:(struct __CFDictionary *)arg2 ;
-(id)allowedClasses;
-(id)decodeArrayOfObjectsOfClasses:(id)arg0 forKey:(id)arg1 ;
-(id)decodeDataObject;
-(id)decodeDictionaryWithKeysOfClasses:(id)arg0 objectsOfClasses:(id)arg1 forKey:(id)arg2 ;
-(id)decodeObject;
-(id)decodeObjectForKey:(id)arg0 ;
-(id)decodeObjectOfClass:(Class)arg0 forKey:(id)arg1 ;
-(id)decodeObjectOfClasses:(id)arg0 forKey:(id)arg1 ;
-(id)description;
-(id)error;
-(id)init;
-(id)initForReadingFromData:(id)arg0 error:(*id)arg1 ;
-(id)initForReadingWithData:(id)arg0 ;
-(id)initWithStream:(id)arg0 ;
-(int)decodeInt32ForKey:(id)arg0 ;
-(int)decodeIntForKey:(id)arg0 ;
-(unsigned int)_currentUniqueIdentifier;
-(unsigned int)systemVersion;
-(void)__setError:(id)arg0 ;
-(void)_enableStrictSecureDecodingMode;
-(void)_enforceExplicitPlistTypes;
-(void)_enforceSubclassesMustBeExplicitlyMentionedWhenDecoded;
-(void)_replaceObject:(id)arg0 withObject:(id)arg1 ;
-(void)_setAllowedClassNames:(id)arg0 ;
-(void)_temporaryMapReplaceObject:(id)arg0 withObject:(id)arg1 ;
-(void)dealloc;
-(void)decodeArrayOfObjCType:(char *)arg0 count:(NSUInteger)arg1 at:(*void)arg2 ;
-(void)decodeValueOfObjCType:(char *)arg0 at:(*void)arg1 ;
-(void)decodeValuesOfObjCTypes:(char *)arg0 ;
-(void)finishDecoding;
-(void)replaceObject:(id)arg0 withObject:(id)arg1 ;
-(void)setAllowedClasses:(id)arg0 ;
-(void)setClass:(Class)arg0 forClassName:(id)arg1 ;


@end


#endif