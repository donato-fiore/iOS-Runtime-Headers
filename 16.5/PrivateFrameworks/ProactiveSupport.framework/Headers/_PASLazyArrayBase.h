// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PASLAZYARRAYBASE_H
#define _PASLAZYARRAYBASE_H

@class NSArray;
@protocol NSFastEnumeration;



@interface _PASLazyArrayBase : NSArray <NSFastEnumeration>





-(BOOL)isEqualToArray:(id)arg0 ;
-(id)arrayByAddingObject:(id)arg0 ;
-(id)arrayByAddingObjectsFromArray:(id)arg0 ;
-(id)objectsAtIndexes:(id)arg0 ;
-(id)sortedArrayFromRange:(struct _NSRange )arg0 options:(NSUInteger)arg1 usingComparator:(id)arg2 ;
-(id)subarrayWithRange:(struct _NSRange )arg0 ;
-(void)enumerateObjectsUsingBlock:(id)arg0 ;


@end


#endif