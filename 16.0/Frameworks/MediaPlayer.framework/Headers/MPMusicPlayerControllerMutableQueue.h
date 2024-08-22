// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPMUSICPLAYERCONTROLLERMUTABLEQUEUE_H
#define MPMUSICPLAYERCONTROLLERMUTABLEQUEUE_H

@class NSMutableDictionary, NSMutableArray;


#import "MPMusicPlayerControllerQueue.h"
#import "MPMusicPlayerControllerApplicationQueueModifications.h"

@interface MPMusicPlayerControllerMutableQueue : MPMusicPlayerControllerQueue

@property (retain, nonatomic) NSMutableDictionary *insertedDescriptors; // ivar: _insertedDescriptors
@property (readonly, nonatomic) MPMusicPlayerControllerApplicationQueueModifications *modifications;
@property (retain, nonatomic) NSMutableArray *removedItems; // ivar: _removedItems


-(id)initWithController:(id)arg0 ;
-(void)_insertQueueDescriptor:(id)arg0 afterItemWithIdentifier:(id)arg1 ;
-(void)_removeItemWithIdentifier:(id)arg0 ;
-(void)insertQueueDescriptor:(id)arg0 afterItem:(id)arg1 ;
-(void)removeItem:(id)arg0 ;


@end


#endif