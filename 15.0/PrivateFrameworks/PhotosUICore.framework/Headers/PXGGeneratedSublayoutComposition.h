// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXGGENERATEDSUBLAYOUTCOMPOSITION_H
#define PXGGENERATEDSUBLAYOUTCOMPOSITION_H



#import "PXGSublayoutComposition.h"
#import "PXLayoutGenerator.h"

@interface PXGGeneratedSublayoutComposition : PXGSublayoutComposition {
    PXLayoutGenerator *_layoutGenerator;
    *_PXLayoutGeometry _layoutGeometries;
    NSInteger _layoutGeometriesCapacity;
}


@property (readonly, nonatomic) PXLayoutGenerator *configuredLayoutGenerator;


-(struct CGRect )contentBounds;
-(void)dealloc;
-(void)invalidateLayout;
-(void)referenceSizeDidChange;
-(void)updateEstimatedSublayoutGeometries;
-(void)updateSublayoutGeometriesFromAnchorSublayoutIndex:(NSInteger)arg0 usingSublayoutUpdateBlock:(id)arg1 ;


@end


#endif