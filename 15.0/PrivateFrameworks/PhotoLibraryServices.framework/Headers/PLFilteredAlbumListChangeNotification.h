// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLFILTEREDALBUMLISTCHANGENOTIFICATION_H
#define PLFILTEREDALBUMLISTCHANGENOTIFICATION_H

@class NSIndexSet, NSString;
@protocol PLIndexMapperDataSource;


#import "PLAssetContainerListChangeNotification.h"
#import "PLFilteredAlbumList.h"
#import "PLIndexMapper.h"

@interface PLFilteredAlbumListChangeNotification : PLAssetContainerListChangeNotification <PLIndexMapperDataSource>

 {
    PLFilteredAlbumList *_albumList;
    NSIndexSet *_oldFilteredIndexes;
    NSIndexSet *_filteredIndexes;
    PLIndexMapper *_indexMapper;
    PLAssetContainerListChangeNotification *_backingNotification;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSIndexSet *filteredIndexes;
@property (readonly) NSUInteger hash;
@property (readonly, retain, nonatomic) PLIndexMapper *indexMapper;
@property (readonly) Class superclass;
@property (readonly, retain, nonatomic) NSIndexSet *updatedFilteredIndexes;


+(id)notificationForDerivedObject:(id)arg0 priorChangeState:(id)arg1 forBackingObjectNotification:(id)arg2 ;
-(BOOL)_getOldSet:(*id)arg0 newSet:(*id)arg1 ;
-(BOOL)countDidChange;
-(BOOL)shouldIncludeObjectAtIndex:(NSUInteger)arg0 ;
-(BOOL)shouldReload;
-(id)_changedObjects;
-(id)_diffDescription;
-(id)albumList;
-(id)init;
-(id)initWithFilteredAlbumList:(id)arg0 albumListChangeNotification:(id)arg1 ;
-(id)object;


@end


#endif