// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBLOGINAPPCONTAINERPLUGINWRAPPERVIEW_H
#define SBLOGINAPPCONTAINERPLUGINWRAPPERVIEW_H

@class UIView;



@interface SBLoginAppContainerPluginWrapperView : UIView {
    UIView *_overlayWrapperView;
    UIView *_pluginView;
}




-(id)initWithFrame:(struct CGRect )arg0 overlayWrapperView:(id)arg1 pluginView:(id)arg2 ;
-(void)layoutSubviews;


@end


#endif