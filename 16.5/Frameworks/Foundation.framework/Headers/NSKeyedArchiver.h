// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSKEYEDARCHIVER_H
#define NSKEYEDARCHIVER_H

@class NSMutableArray, NSData;
@protocol NSKeyedArchiverDelegate;


#import "NSCoder.h"

@interface NSKeyedArchiver : NSCoder {
    *void _stream;
    uint8_t _flags;
    id<NSKeyedArchiverDelegate> *_delegate;
    NSMutableArray *_containers;
    NSMutableArray *_objects;
    *__CFDictionary _objRefMap;
    *__CFDictionary _replacementMap;
    *__CFDictionary _classNameMap;
    *__CFDictionary _conditionals;
    *__CFDictionary _classes;
    NSUInteger _genericKey;
    **__CFKeyedArchiverUID _cache;
    NSUInteger _cacheSize;
    NSUInteger _estimatedCount;
    *__CFSet _visited;
}


@property NSObject<NSKeyedArchiverDelegate> *delegate;
@property (readonly) NSData *encodedData;
@property NSUInteger outputFormat;
@property BOOL requiresSecureCoding;


+(BOOL)archiveRootObject:(id)arg0 toFile:(id)arg1 ;
+(id)archivedDataWithRootObject:(id)arg0 ;
+(id)archivedDataWithRootObject:(id)arg0 requiringSecureCoding:(BOOL)arg1 error:(*id)arg2 ;
+(id)classNameForClass:(Class)arg0 ;
+(void)initialize;
+(void)setClassName:(id)arg0 forClass:(Class)arg1 ;
-(BOOL)_allowsValueCoding;
-(BOOL)allowsKeyedCoding;
-(NSInteger)versionForClassName:(id)arg0 ;
-(id)_blobForCurrentObject;
-(id)_initWithOutput:(id)arg0 ;
-(id)classNameForClass:(Class)arg0 ;
-(id)description;
-(id)init;
-(id)initForWritingWithMutableData:(id)arg0 ;
-(id)initRequiringSecureCoding:(BOOL)arg0 ;
-(unsigned int)systemVersion;
-(void)_encodeArrayOfObjects:(id)arg0 forKey:(id)arg1 ;
-(void)_encodePropertyList:(id)arg0 forKey:(id)arg1 ;
-(void)_setBlobForCurrentObject:(id)arg0 ;
-(void)dealloc;
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
-(void)encodeObject:(id)arg0 ;
-(void)encodeObject:(id)arg0 forKey:(id)arg1 ;
-(void)encodeRootObject:(id)arg0 ;
-(void)encodeValueOfObjCType:(char *)arg0 at:(*void)arg1 ;
-(void)encodeValuesOfObjCTypes:(char *)arg0 ;
-(void)finishEncoding;
-(void)replaceObject:(id)arg0 withObject:(id)arg1 ;
-(void)setClassName:(id)arg0 forClass:(Class)arg1 ;


@end


#endif