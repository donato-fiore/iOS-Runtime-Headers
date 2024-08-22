// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TPSLOADINGVIEW_H
#define TPSLOADINGVIEW_H

@class UIView, UILayoutGuide, UILabel, UIActivityIndicatorView;



@interface TPSLoadingView : UIView {
    UILayoutGuide *_loadingLayoutGuide;
    UILabel *_loadingLabel;
    UIActivityIndicatorView *_loadingIndicatorView;
}




-(id)init;
-(id)initWithLoadingLabel:(BOOL)arg0 ;


@end


#endif