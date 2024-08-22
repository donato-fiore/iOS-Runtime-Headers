// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXCACHINGLAYOUTGENERATOR_H
#define PXCACHINGLAYOUTGENERATOR_H



#import "PXLayoutGenerator.h"

@interface PXCachingLayoutGenerator : PXLayoutGenerator {
    BOOL _isValid;
    CGSize _contentSize;
    *CGRect _itemRects;
    *NSInteger _itemKinds;
    *float _zPositions;
    NSInteger _itemCapacity;
}




-(struct CGSize )size;
-(void)_updateIfNeeded;
-(void)dealloc;
-(void)getGeometries:(struct _PXLayoutGeometry *)arg0 inRange:(struct _NSRange )arg1 withKind:(NSInteger)arg2 ;
-(void)invalidate;
-(void)updateContentSize:(struct CGSize *)arg0 itemRects:(struct CGRect *)arg1 ;
-(void)updateContentSize:(struct CGSize *)arg0 itemRects:(struct CGRect *)arg1 itemKinds:(*NSInteger)arg2 ;
-(void)updateContentSize:(struct CGSize *)arg0 itemRects:(struct CGRect *)arg1 itemKinds:(*NSInteger)arg2 zPositions:(*float)arg3 ;


@end


#endif