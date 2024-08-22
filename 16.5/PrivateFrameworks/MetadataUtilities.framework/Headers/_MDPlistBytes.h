// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MDPLISTBYTES_H
#define _MDPLISTBYTES_H


#import <Foundation/Foundation.h>


@interface _MDPlistBytes : NSObject {
    NSUInteger _byteVector;
    unsigned int _byteVectorCnt;
    unsigned int _byteVectorCapacity;
    id *_deallocator;
    BOOL _isBad;
    BOOL _isMutable;
    BOOL _isMutating;
    BOOL _didFinalize;
    BOOL _useMalloc;
    *__CFArray _rleQueue;
    *NSUInteger _wrapperPtr;
    *NSUInteger _uidVector;
    int _uidCount;
    int _uidCapacity;
    *_malloc_zone_t _zone;
}




+(struct __MDPlistBytes *)createArrayPlistBytesUsingBlock:(id)arg0 ;
+(struct __MDPlistBytes *)createDictionaryPlistBytesUsingBlock:(id)arg0 ;
+(struct __MDPlistBytes *)createPlistBytes:(id)arg0 ;
+(struct __MDPlistBytes *)emptyArrayPlistBytes;
+(struct __MDPlistBytes *)emptyDictionaryPlistBytes;
+(struct __MDPlistBytes *)nullObjectPlistBytes;
+(void)enumerateObjectsFromPlistBytes:(char *)arg0 count:(unsigned int)arg1 shouldDeallocate:(BOOL)arg2 usingBlock:(id)arg3 ;
-(BOOL)enumerateQueryResults:(NSUInteger)arg0 attributeSize:(NSUInteger)arg1 stringCache:(struct ? *)arg2 usingBlock:(id)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)_cfTypeID;
-(id)description;
-(id)initWithByteVector:(char *)arg0 count:(unsigned int)arg1 deallocator:(id)arg2 ;
-(id)initWithByteVector:(char *)arg0 count:(unsigned int)arg1 shouldDeallocate:(BOOL)arg2 ;
-(id)initWithByteVector:(char *)arg0 count:(unsigned int)arg1 trusted:(unsigned char)arg2 deallocator:(id)arg3 ;
-(struct __CFData *)copyData;
-(struct __CFData *)copyDataWithBytesNoCopy;
-(void)dealloc;
-(void)dumpUIDs;
-(void)enumerateObjectsUsingBlock:(id)arg0 ;
-(void)enumerateQueryResults:(NSUInteger)arg0 stringCache:(struct ? *)arg1 usingBlock:(id)arg2 ;


@end


#endif