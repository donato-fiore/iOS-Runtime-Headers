// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PXSTORYFEEDSYNTHETICDATASOURCE_H
#define _PXSTORYFEEDSYNTHETICDATASOURCE_H



#import "PXSectionedDataSource.h"

@interface _PXStoryFeedSyntheticDataSource : PXSectionedDataSource {
    NSInteger _numberOfSections;
    NSInteger _numberOfItemsPerSection;
}




-(NSInteger)numberOfItemsInSection:(NSInteger)arg0 ;
-(NSInteger)numberOfSections;
-(id)initWithNumberOfSections:(NSInteger)arg0 numberOfItemsPerSection:(NSInteger)arg1 ;
-(id)objectAtIndexPath:(struct PXSimpleIndexPath )arg0 ;


@end


#endif