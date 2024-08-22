// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXCURATEDLIBRARYSTATISTICSCONTROLLER_H
#define PXCURATEDLIBRARYSTATISTICSCONTROLLER_H


#import <Foundation/Foundation.h>


@interface PXCuratedLibraryStatisticsController : NSObject {
    *_PXLayoutGeometry _resuableLayoutGeometries;
    NSInteger _reusableLayoutGeometriesCapacity;
}




+(id)defaultController;
-(struct _PXLayoutGeometry *)_layoutGeometryBufferWithCount:(NSInteger)arg0 ;
-(void)_enumerateDaysSectionsForViewModel:(id)arg0 extendedTraitCollection:(id)arg1 usingBlock:(id)arg2 ;
-(void)collectStatisticsForViewModel:(id)arg0 extendedTraitCollection:(id)arg1 resultHandler:(id)arg2 ;
-(void)dealloc;


@end


#endif