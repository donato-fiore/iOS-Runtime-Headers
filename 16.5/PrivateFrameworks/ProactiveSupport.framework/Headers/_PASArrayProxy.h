// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PASARRAYPROXY_H
#define _PASARRAYPROXY_H

@class PASLazyArrayBase;
@protocol NSFastEnumeration;



@interface _PASArrayProxy : PASLazyArrayBase <NSFastEnumeration>

 {
    id *_objectAtIndexBlock;
    id *_countBlock;
}




-(NSUInteger)count;
-(id)_pas_unproxy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithObjects:(*id)arg0 count:(NSUInteger)arg1 ;
-(id)objectAtIndex:(NSUInteger)arg0 ;


@end


#endif