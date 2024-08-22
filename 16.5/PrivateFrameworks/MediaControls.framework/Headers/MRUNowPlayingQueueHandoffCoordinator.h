// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRUNOWPLAYINGQUEUEHANDOFFCOORDINATOR_H
#define MRUNOWPLAYINGQUEUEHANDOFFCOORDINATOR_H

@class MRNowPlayingPlayerResponse;
@protocol MRUNowPlayingQueueHandoffCoordinatorDelegate;

#import <Foundation/Foundation.h>


@interface MRUNowPlayingQueueHandoffCoordinator : NSObject

@property (nonatomic) CGSize artworkSize; // ivar: _artworkSize
@property (weak, nonatomic) NSObject<MRUNowPlayingQueueHandoffCoordinatorDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL hideArtwork; // ivar: _hideArtwork
@property (retain, nonatomic) MRNowPlayingPlayerResponse *response; // ivar: _response
@property (nonatomic) NSInteger state; // ivar: _state


-(id)description;
-(id)stateDescription:(NSInteger)arg0 ;
-(void)beginTransition;
-(void)completeHandoff;
-(void)endTransition;
-(void)setupTransition;


@end


#endif