// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXMEMORIESFEEDWIDGETLAYOUTGENERATOR_H
#define PXMEMORIESFEEDWIDGETLAYOUTGENERATOR_H



#import "PXMemoriesFeedLayoutGenerator.h"
#import "PXMemoriesFeedWidgetLayoutMetrics.h"

@interface PXMemoriesFeedWidgetLayoutGenerator : PXMemoriesFeedLayoutGenerator {
    _LayoutContext _context;
}


@property (copy, nonatomic) PXMemoriesFeedWidgetLayoutMetrics *metrics;


-(id)geometryKinds;
-(id)initWithMetrics:(id)arg0 ;
-(struct CGSize )estimatedSize;
-(struct CGSize )size;
-(void)getGeometries:(struct _PXLayoutGeometry *)arg0 inRange:(struct _NSRange )arg1 withKind:(NSInteger)arg2 ;


@end


#endif