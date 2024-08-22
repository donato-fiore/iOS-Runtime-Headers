// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RPHIGHFIDELITYVIDEOOVERLAYBUTTON_H
#define RPHIGHFIDELITYVIDEOOVERLAYBUTTON_H

@class UIView, UIButton, _UIBackdropView;
@protocol RPVideoOverlayButton;



@interface RPHighFidelityVideoOverlayButton : UIView <RPVideoOverlayButton>

 {
    NSInteger _style;
    UIButton *_button;
    _UIBackdropView *_backdropView;
}


@property (nonatomic) SEL action; // ivar: _action
@property (weak, nonatomic) id *target; // ivar: _target


-(NSInteger)style;
-(id)initWithStyle:(NSInteger)arg0 ;
-(void)_playButtonActivate:(id)arg0 ;
-(void)_playButtonDeactivate:(id)arg0 ;
-(void)_playButtonTapped:(id)arg0 ;


@end


#endif