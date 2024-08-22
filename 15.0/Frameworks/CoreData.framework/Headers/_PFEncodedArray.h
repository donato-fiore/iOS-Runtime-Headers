// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PFENCODEDARRAY_H
#define _PFENCODEDARRAY_H

@class NSArray, NSData;



@interface _PFEncodedArray : NSArray {
    NSData *_sourceData;
    int _cd_rc;
    unsigned int _count;
}




+(Class)classForKeyedUnarchiver;
-(*id)_values;
-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
-(Class)classForCoder;
-(NSUInteger)count;
-(NSUInteger)retainCount;
-(id)copy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)mutableCopy;
-(id)objectAtIndex:(NSUInteger)arg0 ;
-(id)retain;
-(void)_replaceObject:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)release;


@end


#endif