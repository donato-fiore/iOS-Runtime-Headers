// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFMESSAGECONTENTPROGRESSLAYER_H
#define MFMESSAGECONTENTPROGRESSLAYER_H

@class UIView, UIActivityIndicatorView, UILabel;



@interface MFMessageContentProgressLayer : UIView {
    UIActivityIndicatorView *_progressIndicator;
    UILabel *_loadingText;
}


@property (nonatomic) UIEdgeInsets edgeInsets; // ivar: _edgeInsets


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)dealloc;
-(void)layoutSubviews;


@end


#endif