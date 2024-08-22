// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DOWNLOADPROGRESSBUTTON_H
#define DOWNLOADPROGRESSBUTTON_H

@class UIButton, SFProgressView;



@interface DownloadProgressButton : UIButton {
    SFProgressView *_progressView;
}


@property (nonatomic) CGFloat progress;
@property (nonatomic) BOOL showsProgressRing;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif