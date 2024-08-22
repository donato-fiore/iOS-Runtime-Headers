// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PXFEEDSYNTHETICDATASOURCE_H
#define _PXFEEDSYNTHETICDATASOURCE_H



#import "PXSectionedDataSource.h"

@interface _PXFeedSyntheticDataSource : PXSectionedDataSource {
    NSInteger _numberOfSections;
    NSInteger _numberOfItemsPerSection;
}




-(NSInteger)numberOfItemsInSection:(NSInteger)arg0 ;
-(NSInteger)numberOfSections;
-(id)initWithNumberOfSections:(NSInteger)arg0 numberOfItemsPerSection:(NSInteger)arg1 ;
-(id)objectAtIndexPath:(struct PXSimpleIndexPath )arg0 ;


@end


#endif