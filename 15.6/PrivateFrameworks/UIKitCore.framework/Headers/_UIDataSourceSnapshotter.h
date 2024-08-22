// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIDATASOURCESNAPSHOTTER_H
#define _UIDATASOURCESNAPSHOTTER_H

@class NSString;
@protocol NSCopying, _UIDataSourceSnapshotTranslating;

#import <Foundation/Foundation.h>


@interface _UIDataSourceSnapshotter : NSObject <NSCopying, _UIDataSourceSnapshotTranslating>

 {
    vector<_NSRange, std::allocator<_NSRange>> _sectionRanges;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)snapshotterForDataSourceBackedView:(id)arg0 ;
+(id)snapshotterForSectionCountsProvider:(id)arg0 ;
+(id)snapshotterForSnapshot:(id)arg0 ;
-(BOOL)_decrementSectionCount:(NSInteger)arg0 ;
-(BOOL)_decrementSectionCount:(NSInteger)arg0 byCount:(NSInteger)arg1 ;
-(BOOL)_deleteAllSections;
-(BOOL)_deleteSection:(NSInteger)arg0 ;
-(BOOL)_incrementSectionCount:(NSInteger)arg0 ;
-(BOOL)_incrementSectionCount:(NSInteger)arg0 byCount:(NSInteger)arg1 ;
-(BOOL)_insertSection:(NSInteger)arg0 withInitialCount:(NSInteger)arg1 ;
-(BOOL)indexPathIsSectionAppendingInsert:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)globalIndexForIndexPath:(id)arg0 ;
-(NSInteger)numberOfItems;
-(NSInteger)numberOfItemsBeforeSection:(NSInteger)arg0 ;
-(NSInteger)numberOfItemsInSection:(NSInteger)arg0 ;
-(NSInteger)numberOfSections;
-(NSInteger)sectionForGlobalIndex:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)indexPathForAppendingInsertInSection:(NSInteger)arg0 ;
-(id)indexPathForGlobalIndex:(NSInteger)arg0 ;
-(id)initWithDataSourceBackedView:(id)arg0 ;
-(id)initWithSectionCounts:(id)arg0 ;
-(id)initWithSectionCountsProvider:(id)arg0 ;
-(id)snapshot;
-(struct _NSRange )rangeForSection:(NSInteger)arg0 ;
-(void)_recomputeRangeLocations;
-(void)_resetToStateOfSnapshotter:(id)arg0 ;


@end


#endif