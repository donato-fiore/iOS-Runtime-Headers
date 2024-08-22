// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXMEMORIESFEEDDATASOURCE_H
#define PXMEMORIESFEEDDATASOURCE_H

@class NSString, NSArray;
@protocol PXSectionedLayoutEngineDataSourceSnapshot;


#import "PXSectionedDataSource.h"

@interface PXMemoriesFeedDataSource : PXSectionedDataSource <PXSectionedLayoutEngineDataSourceSnapshot>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *diagnosticDescription;
@property (readonly, copy, nonatomic) NSArray *entries; // ivar: _entries
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger identifier;
@property (nonatomic) PXSimpleIndexPath indexPathForFirstPastMemorySection; // ivar: _indexPathForFirstPastMemorySection
@property (readonly, nonatomic) NSInteger numberOfSections;
@property (readonly) Class superclass;


-(NSInteger)numberOfItemsInSection:(NSInteger)arg0 ;
-(NSInteger)numberOfSubitemsInItem:(NSInteger)arg0 section:(NSInteger)arg1 ;
-(id)init;
-(id)initWithEntries:(id)arg0 ;
-(id)inputForItem:(id)arg0 ;
-(id)objectAtIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(id)sectionedObjectReferenceForMemoryUUID:(id)arg0 ;
-(struct PXSimpleIndexPath )_firstSectionIndexPath;
-(struct PXSimpleIndexPath )indexPathForObjectReference:(id)arg0 ;
-(struct PXSimpleIndexPath )indexPathForObjectReference:(id)arg0 withHintIndexPath:(struct PXSimpleIndexPath )arg1 ;
-(void)_enumerateItemIndexPathsWithHintIndexPath:(struct PXSimpleIndexPath )arg0 usingBlock:(id)arg1 ;
-(void)_enumerateSectionIndexPathsStartingAtIndexPath:(struct PXSimpleIndexPath )arg0 reverseDirection:(BOOL)arg1 usingBlock:(id)arg2 ;
-(void)_enumerateSectionIndexPathsWithHintIndexPath:(struct PXSimpleIndexPath )arg0 usingBlock:(id)arg1 ;


@end


#endif