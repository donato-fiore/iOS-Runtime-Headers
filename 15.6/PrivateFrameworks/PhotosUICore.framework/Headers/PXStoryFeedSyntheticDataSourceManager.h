// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSTORYFEEDSYNTHETICDATASOURCEMANAGER_H
#define PXSTORYFEEDSYNTHETICDATASOURCEMANAGER_H



#import "PXSectionedDataSourceManager.h"

@interface PXStoryFeedSyntheticDataSourceManager : PXSectionedDataSourceManager {
    NSInteger _initialNumberOfSections;
    NSInteger _initialNumberOfItemsPerSection;
}




-(id)createInitialDataSource;
-(id)init;
-(id)initWithNumberOfSections:(NSInteger)arg0 numberOfItemsPerSection:(NSInteger)arg1 ;


@end


#endif