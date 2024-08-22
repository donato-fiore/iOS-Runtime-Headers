// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSTLAYOUTSPACEBEZIERPATHCACHE_H
#define TSTLAYOUTSPACEBEZIERPATHCACHE_H

@class TSUConcurrentMutableDictionaryCache;



@interface TSTLayoutSpaceBezierPathCache : TSUConcurrentMutableDictionaryCache



-(id)bezierPathForGridRange:(struct ? )arg0 transform:(struct CGAffineTransform *)arg1 inset:(CGFloat)arg2 reoriginToZero:(BOOL)arg3 ;
-(void)insertBezierPath:(id)arg0 gridRange:(struct ? )arg1 transform:(struct CGAffineTransform *)arg2 inset:(CGFloat)arg3 reoriginToZero:(BOOL)arg4 ;


@end


#endif