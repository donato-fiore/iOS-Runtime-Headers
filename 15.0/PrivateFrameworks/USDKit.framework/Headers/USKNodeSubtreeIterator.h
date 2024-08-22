// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef USKNODESUBTREEITERATOR_H
#define USKNODESUBTREEITERATOR_H

@protocol USKIterator;

#import <Foundation/Foundation.h>


@interface USKNodeSubtreeIterator : NSObject <USKIterator>

 {
    UsdPrimRange _range;
    iterator _it;
}




-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithPrim:(*void)arg0 ;
-(id)initWithPrim:(*void)arg0 withPredicate:(struct Usd_PrimFlagsPredicate )arg1 ;
-(id)initWithScene:(*void)arg0 ;
-(id)initWithScene:(*void)arg0 withPredicate:(struct Usd_PrimFlagsPredicate )arg1 ;
-(id)initWithSubtreeRange:(*void)arg0 ;
-(id)nextObject;


@end


#endif