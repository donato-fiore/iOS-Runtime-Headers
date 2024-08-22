// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef USKNODESIBLINGITERATOR_H
#define USKNODESIBLINGITERATOR_H

@protocol USKIterator;

#import <Foundation/Foundation.h>


@interface USKNodeSiblingIterator : NSObject <USKIterator>

 {
    iterator_range<pxrInternal_v0_20__pxrReserved__usdkit__::UsdPrimSiblingIterator> _range;
    ? _it;
}




-(id)initWithPrim:(*void)arg0 ;
-(id)initWithPrim:(*void)arg0 withPredicate:(struct Usd_PrimFlagsPredicate )arg1 ;
-(id)initWithSiblingRange:(*void)arg0 ;
-(id)nextObject;


@end


#endif