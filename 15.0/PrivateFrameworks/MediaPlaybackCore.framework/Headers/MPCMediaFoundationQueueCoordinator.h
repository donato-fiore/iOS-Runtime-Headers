// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPCMEDIAFOUNDATIONQUEUECOORDINATOR_H
#define MPCMEDIAFOUNDATIONQUEUECOORDINATOR_H

@class MPAVItem, NSString, NSArray;
@protocol MPAVQueueCoordinating, MFPlaybackStackController><MFQueueManagement;

#import <Foundation/Foundation.h>


@interface MPCMediaFoundationQueueCoordinator : NSObject <MPAVQueueCoordinating>



@property (readonly, nonatomic) MPAVItem *currentItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *items;
@property (readonly, weak, nonatomic) NSObject<MFPlaybackStackController><MFQueueManagement> *playbackStackController; // ivar: _playbackStackController
@property (nonatomic) BOOL shouldDeferItemLoading;
@property (nonatomic) BOOL shouldExpectEmptyQueue;
@property (readonly) Class superclass;


-(id)initWithStackController:(id)arg0 ;
-(void)reloadItemsKeepingCurrentItem:(BOOL)arg0 ;
-(void)reset;


@end


#endif