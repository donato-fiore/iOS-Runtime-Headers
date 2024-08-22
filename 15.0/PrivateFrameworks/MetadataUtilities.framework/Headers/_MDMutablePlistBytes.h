// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MDMUTABLEPLISTBYTES_H
#define _MDMUTABLEPLISTBYTES_H

@class MDPlistBytes;



@interface _MDMutablePlistBytes : MDPlistBytes {
    int _currentUID;
    int _parentSize;
    int _parentCount;
    *int _parentUIDs;
    *__CFDictionary _ptrUIDMap;
    *NSUInteger _fillPtr;
    *NSUInteger _limitPtr;
    *NSUInteger _rleTagPtr;
    NSUInteger _curContainer;
}




+(struct __MDPlistBytes *)createArrayPlistBytesUsingBlock:(id)arg0 ;
+(struct __MDPlistBytes *)createDictionaryPlistBytesUsingBlock:(id)arg0 ;
-(id)initWithCapacity:(NSUInteger)arg0 ;
-(id)initWithCapacity:(NSUInteger)arg0 useMalloc:(BOOL)arg1 ;
-(id)initWithCapacity:(NSUInteger)arg0 useMalloc:(BOOL)arg1 zone:(struct _malloc_zone_t *)arg2 ;


@end


#endif