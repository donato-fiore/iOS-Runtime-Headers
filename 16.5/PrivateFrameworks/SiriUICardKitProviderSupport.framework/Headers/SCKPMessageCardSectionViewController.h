// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCKPMESSAGECARDSECTIONVIEWCONTROLLER_H
#define SCKPMESSAGECARDSECTIONVIEWCONTROLLER_H

@class UIViewController, SFMessageCardSection, NSString, INInteraction, AVAudioPlayer;
@protocol SCKPMessageCardSectionViewDelegate, AVAudioPlayerDelegate, CRKCardSectionViewControlling, CRKCardSectionViewControllingDelegate;


#import "SCKPMessageCardSectionView.h"

@interface SCKPMessageCardSectionViewController : UIViewController <SCKPMessageCardSectionViewDelegate, AVAudioPlayerDelegate, CRKCardSectionViewControlling>



@property (readonly) SFMessageCardSection *cardSection; // ivar: _cardSection
@property (weak, nonatomic) NSObject<CRKCardSectionViewControllingDelegate> *cardSectionViewControllingDelegate; // ivar: cardSectionViewControllingDelegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) INInteraction *interaction; // ivar: _interaction
@property (readonly) AVAudioPlayer *player; // ivar: _player
@property (readonly) Class superclass;
@property (readonly) SCKPMessageCardSectionView *view;


+(void)initialize;
-(BOOL)_canShowWhileLocked;
-(id)initWithMessageCardSection:(id)arg0 interaction:(id)arg1 ;
-(void)_asrUpdated:(id)arg0 ;
-(void)audioPlayerDecodeErrorDidOccur:(id)arg0 error:(id)arg1 ;
-(void)audioPlayerDidFinishPlaying:(id)arg0 successfully:(BOOL)arg1 ;
-(void)beginAudioPlayback;
-(void)cardEventDidOccur:(NSUInteger)arg0 withIdentifier:(id)arg1 userInfo:(id)arg2 ;
-(void)createAudioPlayer;
-(void)desiresInteractivity:(id)arg0 ;
-(void)loadView;
-(void)messageCardSectionAttachmentTapped:(id)arg0 ;
-(void)messageCardSectionContentUpdated:(id)arg0 ;
-(void)messageCardSectionPlayButtonTapped:(id)arg0 ;
-(void)messageCardSectionSendButtonTapped:(id)arg0 ;
-(void)messageCardSectionViewBeganEditing:(id)arg0 ;
-(void)messageCardSectionViewFinishedEditing:(id)arg0 ;
-(void)messageContentUpdatedAndInitiatedByNewRequest:(BOOL)arg0 ;
-(void)pauseAudioPlayback;
-(void)setupPlaybackSessionOptions;


@end


#endif