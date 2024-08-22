// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSHAREDLIBRARYINCLUDEDPEOPLEDATASOURCE_H
#define PXSHAREDLIBRARYINCLUDEDPEOPLEDATASOURCE_H

@class NSArray;


#import "PXSectionedDataSource.h"

@interface PXSharedLibraryIncludedPeopleDataSource : PXSectionedDataSource

@property (readonly, nonatomic) NSArray *allInfos; // ivar: _allInfos
@property (readonly, nonatomic) NSArray *allPersonUUIDs;
@property (readonly, nonatomic) NSArray *infosWithBothPeopleAndParticipants; // ivar: _infosWithBothPeopleAndParticipants
@property (readonly, nonatomic) NSArray *infosWithoutPeople; // ivar: _infosWithoutPeople


-(NSInteger)numberOfItemsInSection:(NSInteger)arg0 ;
-(NSInteger)numberOfSections;
-(id)infoAtItemIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(id)infoForParticipant:(id)arg0 ;
-(id)infoForPersonUUID:(id)arg0 ;
-(id)initWithInfos:(id)arg0 infosWithBothPeopleAndParticipants:(id)arg1 infosWithoutPeople:(id)arg2 ;
-(id)objectAtIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(struct PXSimpleIndexPath )indexPathForObjectReference:(id)arg0 ;


@end


#endif