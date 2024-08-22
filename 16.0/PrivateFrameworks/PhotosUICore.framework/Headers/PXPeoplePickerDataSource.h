// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXPEOPLEPICKERDATASOURCE_H
#define PXPEOPLEPICKERDATASOURCE_H

@class PHFetchResult, NSArray, NSOrderedSet;


#import "PXSectionedDataSource.h"

@interface PXPeoplePickerDataSource : PXSectionedDataSource

@property (readonly, nonatomic) PHFetchResult *_fetchResult; // ivar: __fetchResult
@property (readonly, nonatomic) NSArray *allSelectedLocalIdentifiers; // ivar: _allSelectedLocalIdentifiers
@property (readonly, nonatomic) NSArray *disabledLocalIdentifiers; // ivar: _disabledLocalIdentifiers
@property (readonly, nonatomic) NSOrderedSet *newlyDeselectedObjectIDs; // ivar: _newlyDeselectedObjectIDs
@property (readonly, nonatomic) NSOrderedSet *newlySelectedObjectIDs; // ivar: _newlySelectedObjectIDs


-(BOOL)isItemDisabledAtIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(NSInteger)numberOfItemsInSection:(NSInteger)arg0 ;
-(NSInteger)numberOfSections;
-(id)dataSourceUpdatedWithChange:(id)arg0 changeDetails:(*id)arg1 ;
-(id)initWithFetchResult:(id)arg0 disabledLocalIdentifiers:(id)arg1 allSelectedLocalIdentifiers:(id)arg2 newlySelectedObjectIDs:(id)arg3 newlyDeselectedObjectIDs:(id)arg4 ;
-(id)objectAtIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(id)personAtItemIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(struct PXSimpleIndexPath )indexPathForObjectReference:(id)arg0 ;


@end


#endif