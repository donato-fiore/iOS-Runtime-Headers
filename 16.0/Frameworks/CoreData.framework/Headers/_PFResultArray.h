// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PFRESULTARRAY_H
#define _PFRESULTARRAY_H

@class NSArray;


#import "_PFWeakReference.h"
#import "NSKnownKeysDictionary.h"

@interface _PFResultArray : NSArray {
    int _cd_rc;
    unsigned int _count;
    unsigned int _resultType;
    *? _resultSet;
    _PFWeakReference *_weakRequestStore;
    NSKnownKeysDictionary *_metadata;
}




+(BOOL)accessInstanceVariablesDirectly;
+(Class)classForKeyedUnarchiver;
+(void)initialize;
-(BOOL)_setPurgeable:(BOOL)arg0 ;
-(Class)classForCoder;
-(NSUInteger)count;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(NSUInteger)indexOfObject:(id)arg0 ;
-(NSUInteger)indexOfObject:(id)arg0 inRange:(struct _NSRange )arg1 ;
-(NSUInteger)indexOfObjectIdenticalTo:(id)arg0 ;
-(NSUInteger)indexOfObjectIdenticalTo:(id)arg0 inRange:(struct _NSRange )arg1 ;
-(NSUInteger)retainCount;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithObjects:(struct ? *)arg0 count:(unsigned int)arg1 store:(id)arg2 metadata:(id)arg3 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)objectAtIndex:(NSUInteger)arg0 ;
-(id)retain;
-(void)dealloc;
-(void)getObjects:(*id)arg0 ;
-(void)getObjects:(*id)arg0 range:(struct _NSRange )arg1 ;
-(void)release;


@end


#endif