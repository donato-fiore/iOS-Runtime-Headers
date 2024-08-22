// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPUIPLAYMODECONTROLVIEW_H
#define CPUIPLAYMODECONTROLVIEW_H

@class UIView, NSArray, UIStackView;
@protocol CPUIPlayModeControlViewDelegate;


#import "CPUIPlayModeButton.h"
#import "CPUIRepeatButton.h"

@interface CPUIPlayModeControlView : UIView

@property (retain, nonatomic) NSArray *activeButtonLayoutConstraints; // ivar: _activeButtonLayoutConstraints
@property (readonly, nonatomic) CPUIPlayModeButton *addToLibraryButton; // ivar: _addToLibraryButton
@property (nonatomic) CGFloat buttonSpacing; // ivar: _buttonSpacing
@property (nonatomic) CGFloat buttonWidth; // ivar: _buttonWidth
@property (weak, nonatomic) NSObject<CPUIPlayModeControlViewDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL fuseSubscriberLayout; // ivar: _fuseSubscriberLayout
@property (retain, nonatomic) NSArray *mediaButtons; // ivar: _mediaButtons
@property (readonly, nonatomic) CPUIPlayModeButton *moreButton; // ivar: _moreButton
@property (readonly, nonatomic) CPUIPlayModeButton *playbackRateButton; // ivar: _playbackRateButton
@property (readonly, nonatomic) CPUIRepeatButton *repeatButton; // ivar: _repeatButton
@property (nonatomic) BOOL showsArtwork; // ivar: _showsArtwork
@property (readonly, nonatomic) CPUIPlayModeButton *shuffleButton; // ivar: _shuffleButton
@property (readonly, nonatomic) UIStackView *stackView; // ivar: _stackView


-(id)_visibleControlButtons;
-(id)defaultPlayModeButtons;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)_updateButtonLayouts;
-(void)layoutSubviews;
-(void)playModeButtonTapped:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif