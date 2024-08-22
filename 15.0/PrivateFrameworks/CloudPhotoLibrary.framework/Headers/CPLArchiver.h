// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPLARCHIVER_H
#define CPLARCHIVER_H

@class NSCoder;



@interface CPLArchiver : NSCoder {
    id *_archive;
    id *_rootObject;
}


@property (retain, nonatomic) id *archiveCursor; // ivar: _archiveCursor
@property (readonly, nonatomic) BOOL forDisplay; // ivar: _forDisplay


+(id)_displayableArrayForArray:(id)arg0 ;
+(id)_displayableObjectForObject:(id)arg0 ;
+(id)archivedDataWithRootObject:(id)arg0 ;
+(id)archivedDataWithRootObject:(id)arg0 usingBlock:(id)arg1 ;
+(id)archivedPropertyListWithRootObject:(id)arg0 ;
+(id)archivedPropertyListWithRootObject:(id)arg0 usingBlock:(id)arg1 ;
+(id)displayableDictionaryForDictionary:(id)arg0 ;
+(id)displayablePropertyListWithRootObject:(id)arg0 ;
+(id)fullDescriptionForObject:(id)arg0 ;
+(id)unarchiveObjectWithData:(id)arg0 ofClass:(Class)arg1 ;
+(id)unarchivedObjectWithPropertyList:(id)arg0 ofClass:(Class)arg1 ;
+(void)_initializeSmallKeyMapping;
-(*void)decodeBytesWithReturnedLength:(*NSUInteger)arg0 ;
-(BOOL)allowsKeyedCoding;
-(BOOL)containsValueForKey:(id)arg0 ;
-(BOOL)decodeBoolForKey:(id)arg0 ;
-(CGFloat)decodeDoubleForKey:(id)arg0 ;
-(NSInteger)decodeInt64ForKey:(id)arg0 ;
-(NSInteger)decodeIntegerForKey:(id)arg0 ;
-(char *)decodeBytesForKey:(id)arg0 returnedLength:(*NSUInteger)arg1 ;
-(float)decodeFloatForKey:(id)arg0 ;
-(id)_decodeKey:(id)arg0 class:(Class)arg1 inDictionary:(id)arg2 ;
-(id)_encodeKey:(id)arg0 ;
-(id)archivedPropertyList;
-(id)decodeObject;
-(id)decodeObjectForKey:(id)arg0 ;
-(id)decodeObjectOfClass:(Class)arg0 forKey:(id)arg1 ;
-(id)decodeObjectOfClasses:(id)arg0 forKey:(id)arg1 ;
-(id)decodePropertyList;
-(id)decodePropertyListForKey:(id)arg0 ;
-(id)initWithArchive:(id)arg0 rootClass:(Class)arg1 ;
-(id)initWithRootObject:(id)arg0 forDisplay:(BOOL)arg1 ;
-(id)initWithRootObject:(id)arg0 forDisplay:(BOOL)arg1 block:(id)arg2 ;
-(id)rootObject;
-(int)decodeInt32ForKey:(id)arg0 ;
-(int)decodeIntForKey:(id)arg0 ;
-(struct CGPoint )decodePointForKey:(id)arg0 ;
-(struct CGRect )decodeRectForKey:(id)arg0 ;
-(struct CGSize )decodeSizeForKey:(id)arg0 ;
-(void)decodeArrayOfObjCType:(char *)arg0 count:(NSUInteger)arg1 at:(*void)arg2 ;
-(void)decodeValuesOfObjCTypes:(char *)arg0 ;
-(void)encodeArrayOfObjCType:(char *)arg0 count:(NSUInteger)arg1 at:(*void)arg2 ;
-(void)encodeBool:(BOOL)arg0 forKey:(id)arg1 ;
-(void)encodeBycopyObject:(id)arg0 ;
-(void)encodeByrefObject:(id)arg0 ;
-(void)encodeBytes:(*void)arg0 length:(NSUInteger)arg1 ;
-(void)encodeBytes:(char *)arg0 length:(NSUInteger)arg1 forKey:(id)arg2 ;
-(void)encodeConditionalObject:(id)arg0 ;
-(void)encodeConditionalObject:(id)arg0 forKey:(id)arg1 ;
-(void)encodeDouble:(CGFloat)arg0 forKey:(id)arg1 ;
-(void)encodeFloat:(float)arg0 forKey:(id)arg1 ;
-(void)encodeInt32:(int)arg0 forKey:(id)arg1 ;
-(void)encodeInt64:(NSInteger)arg0 forKey:(id)arg1 ;
-(void)encodeInt:(int)arg0 forKey:(id)arg1 ;
-(void)encodeInteger:(NSInteger)arg0 forKey:(id)arg1 ;
-(void)encodeObject:(id)arg0 ;
-(void)encodeObject:(id)arg0 forKey:(id)arg1 ;
-(void)encodePoint:(struct CGPoint )arg0 forKey:(id)arg1 ;
-(void)encodePropertyList:(id)arg0 ;
-(void)encodeRect:(struct CGRect )arg0 forKey:(id)arg1 ;
-(void)encodeRootObject:(id)arg0 ;
-(void)encodeSize:(struct CGSize )arg0 forKey:(id)arg1 ;
-(void)encodeValuesOfObjCTypes:(char *)arg0 ;


@end


#endif