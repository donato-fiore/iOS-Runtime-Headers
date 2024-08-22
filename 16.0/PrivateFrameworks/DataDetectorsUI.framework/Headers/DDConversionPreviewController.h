// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DDCONVERSIONPREVIEWCONTROLLER_H
#define DDCONVERSIONPREVIEWCONTROLLER_H

@class UIViewController, UIView, NSString;



@interface DDConversionPreviewController : UIViewController {
    UIView *_mainView;
    NSString *_title;
    NSString *_subtitle;
    CGSize _naturalTextSize;
}




-(CGFloat)preferredWidth;
-(id)initWithTitle:(id)arg0 subTitle:(id)arg1 ;
-(id)view;
-(struct CGSize )preferredContentSize;


@end


#endif