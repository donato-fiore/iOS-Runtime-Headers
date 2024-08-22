// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIDATASOURCEBATCHUPDATEMAPHELPER_H
#define _UIDATASOURCEBATCHUPDATEMAPHELPER_H

@class NSArray, NSMutableIndexSet;

#import <Foundation/Foundation.h>

#import "_UIDataSourceSnapshotter.h"

@interface _UIDataSourceBatchUpdateMapHelper : NSObject {
    _UIDataSourceSnapshotter *_initialSnapshot;
    _UIDataSourceSnapshotter *_finalSnapshot;
    NSArray *_updateItems;
    NSMutableIndexSet *_movedItems;
    NSMutableIndexSet *_movedSections;
    NSMutableIndexSet *_deletedSections;
    NSMutableIndexSet *_insertedSections;
    *NSInteger _oldSectionMap;
    *NSInteger _newSectionMap;
    *NSInteger _oldGlobalItemMap;
    *NSInteger _newGlobalItemMap;
}




-(NSInteger)finalGlobalIndexForInitialGlobalIndex:(NSInteger)arg0 ;
-(NSInteger)finalSectionIndexForInitialSectionIndex:(NSInteger)arg0 ;
-(NSInteger)initialGlobalIndexForFinalGlobalIndex:(NSInteger)arg0 ;
-(NSInteger)initialSectionIndexForFinalSectionIndex:(NSInteger)arg0 ;
-(id)description;
-(id)finalIndexPathForInitialIndexPath:(id)arg0 ;
-(id)initWithInitialSnapshot:(id)arg0 finalSnapshot:(id)arg1 updates:(id)arg2 ;
-(id)initialIndexPathForFinalIndexPath:(id)arg0 ;
-(void)_computeItemUpdates;
-(void)_computeSectionUpdates;
-(void)dealloc;


@end


#endif