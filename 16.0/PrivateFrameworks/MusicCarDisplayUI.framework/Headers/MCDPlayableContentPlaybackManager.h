// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCDPLAYABLECONTENTPLAYBACKMANAGER_H
#define MCDPLAYABLECONTENTPLAYBACKMANAGER_H

@class MCDNowPlayingContentManager, NSString;
@protocol MPRequestResponseControllerDelegate, UITableViewDelegate, UITableViewDataSource;


#import "MCDPCModel.h"

@interface MCDPlayableContentPlaybackManager : MCDNowPlayingContentManager <MPRequestResponseControllerDelegate, UITableViewDelegate, UITableViewDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MCDPCModel *model; // ivar: _model
@property (nonatomic) NSInteger playingItemIndex; // ivar: _playingItemIndex
@property (nonatomic, getter=isSeeking) BOOL seeking; // ivar: _seeking
@property (readonly) Class superclass;
@property (nonatomic) NSInteger totalItemCount; // ivar: _totalItemCount


-(BOOL)nowPlayingViewController:(id)arg0 buttonShouldBeActive:(NSInteger)arg1 ;
-(BOOL)nowPlayingViewController:(id)arg0 shouldDisplayButton:(NSInteger)arg1 withImage:(*id)arg2 existingIdentifier:(id)arg3 tinted:(*BOOL)arg4 ;
-(BOOL)nowPlayingViewControllerCanShowAddToLibrary:(id)arg0 ;
-(BOOL)nowPlayingViewControllerCanShowMore:(id)arg0 ;
-(BOOL)nowPlayingViewControllerIsRightHandDrive:(id)arg0 ;
-(CGFloat)_jumpBackwardInterval;
-(CGFloat)_jumpForwardInterval;
-(NSInteger)_numberOfItemsInPlaybackQueue;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_adjustedIndexPathForPlaybackQueue:(id)arg0 ;
-(id)_alertActionForFeedbackCommand:(id)arg0 fallbackTitle:(id)arg1 ;
-(id)_itemAtIndexPath:(id)arg0 ;
-(id)_skipIntervalButtonImageForInterval:(CGFloat)arg0 size:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_handleHamburgerActionSheet;
-(void)_processResponse:(id)arg0 error:(id)arg1 ;
-(void)_updateTrackQueueIndex;
-(void)nowPlayingViewController:(id)arg0 didSendAction:(NSInteger)arg1 state:(NSInteger)arg2 ;
-(void)nowPlayingViewControllerAddToLibrary:(id)arg0 ;
-(void)nowPlayingViewControllerMore:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;


@end


#endif