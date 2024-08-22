// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFMESSAGECONTENTLOADINGVIEW_H
#define MFMESSAGECONTENTLOADINGVIEW_H

@class UIView, UIActivityIndicatorView, UILabel, NSString;



@interface MFMessageContentLoadingView : UIView

@property (retain, nonatomic) UIActivityIndicatorView *activityIndicatorView; // ivar: _activityIndicatorView
@property (nonatomic, getter=isLoadingIndicatorVisible) BOOL loadingIndicatorVisible;
@property (retain, nonatomic) UILabel *loadingLabel; // ivar: _loadingLabel
@property (copy, nonatomic) NSString *loadingTitle; // ivar: _loadingTitle


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)dealloc;
-(void)layoutSubviews;


@end


#endif