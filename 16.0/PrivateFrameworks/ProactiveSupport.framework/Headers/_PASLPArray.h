// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PASLPARRAY_H
#define _PASLPARRAY_H

@class PASLazyArrayBase;
@protocol NSFastEnumeration, _PASLPReaderProtocol;


#import "_PASLPArrayContext.h"

@interface _PASLPArray : PASLazyArrayBase <NSFastEnumeration>

 {
    id<_PASLPReaderProtocol> *_reader;
    _PASLPArrayContext *_context;
}




-(NSUInteger)count;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLazyPlistReader:(id)arg0 context:(id)arg1 ;
-(id)initWithObjects:(*id)arg0 count:(NSUInteger)arg1 ;
-(id)objectAtIndex:(NSUInteger)arg0 ;


@end


#endif