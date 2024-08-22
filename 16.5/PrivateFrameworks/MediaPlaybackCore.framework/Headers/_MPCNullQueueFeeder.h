// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MPCNULLQUEUEFEEDER_H
#define _MPCNULLQUEUEFEEDER_H

@class MPQueueFeeder, NSString;
@protocol MPCQueueControllerBehaviorMusicDataSource;



@interface _MPCNullQueueFeeder : MPQueueFeeder <MPCQueueControllerBehaviorMusicDataSource>

 {
    NSString *_uniqueIdentifier;
}


@property (readonly, nonatomic) BOOL containsLiveStream;
@property (readonly, nonatomic) BOOL containsRadioContent;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)containsTransportableContentWithReason:(*id)arg0 ;
-(BOOL)section:(id)arg0 supportsShuffleType:(NSInteger)arg1 ;
-(BOOL)supportsAutoPlayForItem:(id)arg0 inSection:(id)arg1 ;
-(id)identifiersForItem:(id)arg0 inSection:(id)arg1 ;
-(id)init;
-(id)itemForItem:(id)arg0 inSection:(id)arg1 ;
-(id)modelPlayEventForItem:(id)arg0 inSection:(id)arg1 ;
-(id)uniqueIdentifier;
-(void)loadPlaybackContext:(id)arg0 completion:(id)arg1 ;
-(void)reloadSection:(id)arg0 completion:(id)arg1 ;


@end


#endif