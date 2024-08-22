// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUCLIPSCRUBBERACCESSORYTOGGLEVIEW_H
#define HUCLIPSCRUBBERACCESSORYTOGGLEVIEW_H

@class UIView, UIButton;



@interface HUClipScrubberAccessoryToggleView : UIView

@property (retain, nonatomic) UIButton *accessoryButton; // ivar: _accessoryButton
@property (retain, nonatomic) UIView *backgroundView; // ivar: _backgroundView
@property (retain, nonatomic) UIButton *liveButton; // ivar: _liveButton


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)displayForTimelineState:(NSUInteger)arg0 ;
-(void)displayWithoutBackgroundVisualEffects;


@end


#endif