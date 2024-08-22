// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VIDEOSEXTRASNAVIGATIONBARBUTTON_H
#define VIDEOSEXTRASNAVIGATIONBARBUTTON_H

@class UIButton, UIView, UIColor;



@interface VideosExtrasNavigationBarButton : UIButton {
    UIView *_backdropView;
    UIColor *_dodgeColor;
}




+(id)extrasBackButton:(NSInteger)arg0 ;
+(id)extrasNavigationButton:(NSInteger)arg0 ;
+(id)textDodgeColor;
+(id)textFilter;
-(void)layoutSubviews;


@end


#endif