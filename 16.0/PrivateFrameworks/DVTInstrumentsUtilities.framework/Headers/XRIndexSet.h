// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef XRINDEXSET_H
#define XRINDEXSET_H

@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface XRIndexSet : NSObject <NSCopying, NSMutableCopying>

 {
    XRIndexSetImpl<unsigned long long, 4, std::allocator<xray::internal::RangeImp<unsigned long long>>> _impl;
}




+(id)indexSetWithIndex:(NSUInteger)arg0 ;
+(id)indexSetWithIndexesInRange:(struct _XRIndexRange )arg0 ;
-(BOOL)containsIndex:(NSUInteger)arg0 ;
-(BOOL)countEquals:(NSUInteger)arg0 ;
-(BOOL)intersectsIndexesInRange:(struct _XRIndexRange )arg0 ;
-(BOOL)isEmpty;
-(NSUInteger)count;
-(NSUInteger)firstIndex;
-(NSUInteger)lastIndex;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithIndex:(NSUInteger)arg0 ;
-(id)initWithIndexes:(struct _XRIndexRange )arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)enumerateIndexesUsingBlock:(id)arg0 ;
-(void)enumerateRangesUsingBlock:(id)arg0 ;


@end


#endif