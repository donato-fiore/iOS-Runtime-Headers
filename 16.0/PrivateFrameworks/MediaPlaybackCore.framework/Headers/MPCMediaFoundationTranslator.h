// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPCMEDIAFOUNDATIONTRANSLATOR_H
#define MPCMEDIAFOUNDATIONTRANSLATOR_H

@class NSMutableDictionary;
@protocol MFQueueControlling, MPCQueueItemProviding;

#import <Foundation/Foundation.h>


@interface MPCMediaFoundationTranslator : NSObject <MFQueueControlling>



@property (readonly, copy, nonatomic) NSMutableDictionary *mapping; // ivar: _mapping
@property (readonly, nonatomic) NSObject<MPCQueueItemProviding> *queueController; // ivar: _queueController


-(BOOL)canSkipInDirection:(NSInteger)arg0 fromItem:(id)arg1 ;
-(id)MPAVItemForMFPlayerItem:(id)arg0 ;
-(id)_MPAVItemForMFPlayerItem:(id)arg0 allowReuse:(BOOL)arg1 ;
-(id)initWithQueueController:(id)arg0 ;
-(id)itemToFollowItem:(id)arg0 direction:(NSInteger)arg1 distance:(NSInteger)arg2 reason:(NSInteger)arg3 ;
-(id)queueItemForPlayerItem:(id)arg0 allowReuse:(BOOL)arg1 ;
-(void)setMPAVItem:(id)arg0 forMFPlayerItem:(id)arg1 ;
-(void)updatePlayerPlaybackCoordinator:(id)arg0 ;


@end


#endif