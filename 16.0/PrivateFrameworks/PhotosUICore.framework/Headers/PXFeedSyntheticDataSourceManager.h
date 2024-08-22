// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXFEEDSYNTHETICDATASOURCEMANAGER_H
#define PXFEEDSYNTHETICDATASOURCEMANAGER_H



#import "PXSectionedDataSourceManager.h"

@interface PXFeedSyntheticDataSourceManager : PXSectionedDataSourceManager {
    NSInteger _initialNumberOfSections;
    NSInteger _initialNumberOfItemsPerSection;
}




-(id)createInitialDataSource;
-(id)init;
-(id)initWithNumberOfSections:(NSInteger)arg0 numberOfItemsPerSection:(NSInteger)arg1 ;


@end


#endif