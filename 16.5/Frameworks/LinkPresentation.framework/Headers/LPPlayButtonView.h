// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LPPLAYBUTTONVIEW_H
#define LPPLAYBUTTONVIEW_H

@protocol LPContentInsettable, LPComponentMediaPlayable;


#import "LPComponentView.h"
#import "LPPlayButtonControl.h"
#import "LPInlineMediaPlaybackInformation.h"
#import "LPAudioPlayButtonStyle.h"

@interface LPPlayButtonView : LPComponentView <LPContentInsettable, LPComponentMediaPlayable>

 {
    LPPlayButtonControl *_button;
    LPInlineMediaPlaybackInformation *_playbackInformation;
    UIEdgeInsets _contentInset;
    LPAudioPlayButtonStyle *_style;
    BOOL _hasBuilt;
}




-(BOOL)isLyricStyle;
-(id)initWithHost:(id)arg0 ;
-(id)initWithHost:(id)arg0 playbackInformation:(id)arg1 style:(id)arg2 ;
-(id)playable;
-(id)theme;
-(void)buildSubviewsIfNeeded;
-(void)dealloc;
-(void)installAudioButton;
-(void)installDisablediTunesButton;
-(void)installPlaceholderButton;
-(void)installPreviewButton;
-(void)installiTunesButton;
-(void)layoutComponentView;
-(void)setContentInset:(struct UIEdgeInsets )arg0 ;
-(void)updateButton;
-(void)updateButtonForAudioBook;
-(void)updateButtonForAudioFile;
-(void)updateButtonForPodcast;
-(void)updateButtonForRadio;
-(void)updateButtonForSongOrAlbum;


@end


#endif