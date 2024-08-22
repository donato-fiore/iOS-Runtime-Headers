// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SEARCHUIPLAYBUTTONVIEWCONTROLLER_H
#define SEARCHUIPLAYBUTTONVIEWCONTROLLER_H

@class TLKLabel, NSString, MPMediaEntity, SFPunchout, NSArray, NSTimer;
@protocol NUIContainerViewDelegate;


#import "SearchUIAccessoryViewController.h"
#import "SearchUIButton.h"

@interface SearchUIPlayButtonViewController : SearchUIAccessoryViewController <NUIContainerViewDelegate>



@property (retain, nonatomic) TLKLabel *captionLabel; // ivar: _captionLabel
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MPMediaEntity *mediaEntity; // ivar: _mediaEntity
@property (nonatomic) NSInteger mediaEntityType; // ivar: _mediaEntityType
@property (nonatomic) NSUInteger persistentID; // ivar: _persistentID
@property (retain, nonatomic) SearchUIButton *playButton; // ivar: _playButton
@property (retain, nonatomic) SFPunchout *punchout; // ivar: _punchout
@property (retain, nonatomic) NSString *spotlightIdentifier; // ivar: _spotlightIdentifier
@property (retain, nonatomic) NSArray *storeIdentifiers; // ivar: _storeIdentifiers
@property (readonly) Class superclass;
@property (retain, nonatomic) NSTimer *timer; // ivar: _timer
@property (retain, nonatomic) NSString *universalLibraryID; // ivar: _universalLibraryID


+(BOOL)mediaItem:(id)arg0 matchesPersistentID:(NSUInteger)arg1 forType:(NSInteger)arg2 ;
+(BOOL)mediaItem:(id)arg0 matchesUniversalLibraryID:(id)arg1 forType:(NSInteger)arg2 ;
+(BOOL)supportsRowModel:(id)arg0 ;
+(id)_mediaEntityForPersistentID:(id)arg0 forType:(int)arg1 ;
+(id)_mediaEntityForUniversalLibraryID:(id)arg0 forType:(int)arg1 ;
+(id)font;
+(id)mediaEntityForAction:(id)arg0 ;
+(void)initialize;
-(BOOL)matchesNowPlayingAudioItem;
-(BOOL)shouldTopAlignForAccessibilityContentSizes;
-(BOOL)updateTimerForPauseState;
-(NSUInteger)type;
-(id)setupView;
-(struct CGRect )containerView:(id)arg0 layoutFrameForArrangedSubview:(id)arg1 withProposedFrame:(struct CGRect )arg2 ;
-(struct CGSize )containerView:(id)arg0 systemLayoutSizeFittingSize:(struct CGSize )arg1 forArrangedSubview:(id)arg2 ;
-(void)buttonPressed;
-(void)createTimerIfNeeded;
-(void)dealloc;
-(void)hide;
-(void)invalidateTimerIfNeeded;
-(void)nowPlayingItemDidChange;
-(void)play;
-(void)playbackStateDidChange;
-(void)sendEngagementDidPunchout:(BOOL)arg0 ;
-(void)togglePlaybackState;
-(void)updateButtonProgressAnimated:(BOOL)arg0 ;
-(void)updatePlayState;
-(void)updateWithRowModel:(id)arg0 ;


@end


#endif