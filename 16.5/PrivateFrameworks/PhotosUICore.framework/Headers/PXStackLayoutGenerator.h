// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTACKLAYOUTGENERATOR_H
#define PXSTACKLAYOUTGENERATOR_H



#import "PXLayoutGenerator.h"

@interface PXStackLayoutGenerator : PXLayoutGenerator {
    *_PXLayoutGeometry _layoutGeometries;
}




-(struct CGSize )estimatedSize;
-(struct CGSize )size;
-(void)_generateLayout;
-(void)dealloc;
-(void)getGeometries:(struct _PXLayoutGeometry *)arg0 inRange:(struct _NSRange )arg1 withKind:(NSInteger)arg2 ;
-(void)invalidate;


@end


#endif