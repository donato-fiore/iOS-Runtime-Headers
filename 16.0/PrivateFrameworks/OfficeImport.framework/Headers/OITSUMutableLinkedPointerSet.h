// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OITSUMUTABLELINKEDPOINTERSET_H
#define OITSUMUTABLELINKEDPOINTERSET_H

@protocol NSFastEnumeration;

#import <Foundation/Foundation.h>

#import "OITSULinkedPointerSetEntry.h"

@interface OITSUMutableLinkedPointerSet : NSObject <NSFastEnumeration>

 {
    *__CFDictionary mDictionary;
    OITSULinkedPointerSetEntry *mHead;
    OITSULinkedPointerSetEntry *mTail;
}




-(BOOL)containsObject:(id)arg0 ;
-(BOOL)hasObjects;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)count;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(NSUInteger)hash;
-(id)array;
-(id)firstObject;
-(id)init;
-(id)objectEnumerator;
-(id)objectEnumeratorAfterObject:(id)arg0 ;
-(id)reverseObjectEnumerator;
-(void)addObject:(id)arg0 ;
-(void)dealloc;
-(void)insertFirstObject:(id)arg0 ;
-(void)removeAllObjects;
-(void)removeObject:(id)arg0 ;


@end


#endif