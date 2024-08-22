// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PASZONESUPPORT_H
#define _PASZONESUPPORT_H


#import <Foundation/Foundation.h>


@interface _PASZoneSupport : NSObject



+(id)copyArray:(id)arg0 toZone:(struct _NSZone *)arg1 ;
+(id)copyData:(id)arg0 toZone:(struct _NSZone *)arg1 ;
+(id)copyDate:(id)arg0 toZone:(struct _NSZone *)arg1 ;
+(id)copyDictionary:(id)arg0 toZone:(struct _NSZone *)arg1 ;
+(id)copyNumber:(id)arg0 toZone:(struct _NSZone *)arg1 ;
+(id)copySet:(id)arg0 toZone:(struct _NSZone *)arg1 ;
+(id)copyString:(id)arg0 toZone:(struct _NSZone *)arg1 ;
+(id)copyUUID:(id)arg0 toZone:(struct _NSZone *)arg1 ;
+(id)deepCopyObject:(id)arg0 toZone:(struct _NSZone *)arg1 strategy:(struct ? )arg2 ;
+(id)mutableCopyArray:(id)arg0 toZone:(struct _NSZone *)arg1 ;
+(id)mutableCopyData:(id)arg0 toZone:(struct _NSZone *)arg1 ;
+(id)mutableCopyDictionary:(id)arg0 toZone:(struct _NSZone *)arg1 ;
+(id)mutableCopySet:(id)arg0 toZone:(struct _NSZone *)arg1 ;
+(id)mutableCopyString:(id)arg0 toZone:(struct _NSZone *)arg1 ;
+(id)newMutableArrayInZone:(struct _NSZone *)arg0 ;
+(id)newMutableArrayInZone:(struct _NSZone *)arg0 capacity:(NSUInteger)arg1 ;
+(id)newMutableDataInZone:(struct _NSZone *)arg0 ;
+(id)newMutableDataInZone:(struct _NSZone *)arg0 capacity:(NSUInteger)arg1 ;
+(id)newMutableDataInZone:(struct _NSZone *)arg0 length:(NSUInteger)arg1 ;
+(id)newMutableDictionaryInZone:(struct _NSZone *)arg0 ;
+(id)newMutableDictionaryInZone:(struct _NSZone *)arg0 capacity:(NSUInteger)arg1 ;
+(id)newMutableSetInZone:(struct _NSZone *)arg0 ;
+(id)newMutableSetInZone:(struct _NSZone *)arg0 capacity:(NSUInteger)arg1 ;
+(id)newMutableStringInZone:(struct _NSZone *)arg0 ;
+(id)newMutableStringInZone:(struct _NSZone *)arg0 capacity:(NSUInteger)arg1 ;


@end


#endif