// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLFILTEREDALBUMCHANGENOTIFICATION_H
#define PLFILTEREDALBUMCHANGENOTIFICATION_H

@class NSIndexSet, NSString;
@protocol PLIndexMapperDataSource, PLDerivedNotification;


#import "PLAssetContainerChangeNotification.h"
#import "PLFilteredAlbum.h"
#import "PLIndexMapper.h"

@interface PLFilteredAlbumChangeNotification : PLAssetContainerChangeNotification <PLIndexMapperDataSource, PLDerivedNotification>

 {
    PLFilteredAlbum *_album;
    NSIndexSet *_oldFilteredIndexes;
    NSIndexSet *_filteredIndexes;
    PLIndexMapper *_indexMapper;
    PLAssetContainerChangeNotification *_backingNotification;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSIndexSet *filteredIndexes;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, retain, nonatomic) PLIndexMapper *indexMapper;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, retain, nonatomic) NSIndexSet *updatedFilteredIndexes;


+(id)notificationForDerivedObject:(id)arg0 priorChangeState:(id)arg1 forBackingObjectNotification:(id)arg2 ;
-(BOOL)_getOldSet:(*id)arg0 newSet:(*id)arg1 ;
-(BOOL)countDidChange;
-(BOOL)keyAssetDidChange;
-(BOOL)shouldIncludeObjectAtIndex:(NSUInteger)arg0 ;
-(BOOL)shouldReload;
-(BOOL)titleDidChange;
-(id)_changedObjects;
-(id)_diffDescription;
-(id)album;
-(id)init;
-(id)initWithFilteredAlbum:(id)arg0 priorChangeState:(id)arg1 albumChangeNotification:(id)arg2 ;
-(id)object;


@end


#endif