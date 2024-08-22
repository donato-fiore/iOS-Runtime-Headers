// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKUGCCALLTOACTIONADDPHOTOSACCESSORYVIEW_H
#define MKUGCCALLTOACTIONADDPHOTOSACCESSORYVIEW_H

@class UIView, UIButton, NSString;



@interface MKUGCCallToActionAddPhotosAccessoryView : UIView {
    UIButton *_addPhotosButton;
}


@property (copy, nonatomic) NSString *glyphName; // ivar: _glyphName


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_contentSizeChanged;
-(void)_setupButtons;
-(void)setTarget:(id)arg0 action:(SEL)arg1 ;


@end


#endif