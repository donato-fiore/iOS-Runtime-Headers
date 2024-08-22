// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVMOBILECHROMELESSCONTROLSSTYLESHEET_H
#define AVMOBILECHROMELESSCONTROLSSTYLESHEET_H

@class UIFont;


#import "AVMobileControlsStyleSheet.h"

@interface AVMobileChromelessControlsStyleSheet : AVMobileControlsStyleSheet {
    UIEdgeInsets _landscapeFullscreenInsets;
    UIEdgeInsets _portraitFullscreenInsets;
    UIEdgeInsets _embeddedInlineInsets;
    CGFloat _standardPaddingFullScreen;
    CGFloat _standardPaddingInline;
    UIFont *_timeLabelFont;
    UIFont *_titleFont;
    UIFont *_subtitleFont;
    UIFont *_infoAffordanceButtonFont;
    UIFont *_contentTagFont;
    UIFont *_prominentContentTagFont;
    UIFont *_secondaryPlaybackControlsFont;
    UIFont *_playPauseButtonFont;
}


@property (readonly, nonatomic) UIFont *contentTagFont;
@property (readonly, nonatomic) UIFont *infoAffordanceButtonFont;
@property (readonly, nonatomic) UIFont *playPauseButtonFont;
@property (readonly, nonatomic) UIFont *prominentContentTagFont;
@property (readonly, nonatomic) UIFont *secondaryPlaybackControlsFont;
@property (readonly, nonatomic) UIFont *subtitleFont;
@property (readonly, nonatomic) UIFont *timeLabelFont;
@property (readonly, nonatomic) UIFont *titleFont;


-(CGFloat)standardPaddingFullScreen;
-(CGFloat)standardPaddingInline;
-(id)initWithTraitCollection:(id)arg0 ;
-(struct UIEdgeInsets )embeddedInlineInsets;
-(struct UIEdgeInsets )landscapeFullscreenInsets;
-(struct UIEdgeInsets )portraitFullscreenInsets;


@end


#endif