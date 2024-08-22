// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSECTIONEDLAYOUTSNAPSHOT_H
#define PXSECTIONEDLAYOUTSNAPSHOT_H

@class NSArray;


#import "PXLayoutSnapshot.h"
#import "PXLayoutPageMap.h"

@interface PXSectionedLayoutSnapshot : PXLayoutSnapshot {
    NSArray *_sections;
    PXLayoutPageMap *_pageMap;
}




+(id)emptyLayoutSnapshot;
-(id)description;
-(id)init;
-(id)initWithContentRect:(struct CGRect )arg0 ;
-(id)initWithContentRect:(struct CGRect )arg0 forSections:(id)arg1 ;
-(struct CGRect )frameForSectionAtIndex:(NSUInteger)arg0 ;
-(struct _PXLayoutGeometry )geometryForItem:(id)arg0 ;
-(void)enumerateFramesForSectionsInRect:(struct CGRect )arg0 usingBlock:(id)arg1 ;
-(void)enumerateGeometriesForItemsInRect:(struct CGRect )arg0 usingBlock:(id)arg1 ;


@end


#endif