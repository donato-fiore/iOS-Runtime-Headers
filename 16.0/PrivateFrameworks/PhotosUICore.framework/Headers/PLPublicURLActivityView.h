// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLPUBLICURLACTIVITYVIEW_H
#define PLPUBLICURLACTIVITYVIEW_H

@class UIView, UIActivityIndicatorView, UILabel;



@interface PLPublicURLActivityView : UIView {
    UIActivityIndicatorView *_spinner;
    UILabel *_infoLabel;
}




-(id)initWithFrame:(struct CGRect )arg0 turningPublicURLON:(BOOL)arg1 ;
-(void)layoutSubviews;


@end


#endif