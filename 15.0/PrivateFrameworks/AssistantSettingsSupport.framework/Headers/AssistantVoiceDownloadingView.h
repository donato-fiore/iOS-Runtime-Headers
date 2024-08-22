// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASSISTANTVOICEDOWNLOADINGVIEW_H
#define ASSISTANTVOICEDOWNLOADINGVIEW_H

@class UIView, UILabel, UIActivityIndicatorView;



@interface AssistantVoiceDownloadingView : UIView

@property (retain, nonatomic) UILabel *downloadLabel; // ivar: _downloadLabel
@property (retain, nonatomic) UIActivityIndicatorView *indicator; // ivar: _indicator


-(id)initWithActivityIndicatorStyle:(NSInteger)arg0 ;
-(void)layoutSubviews;
-(void)sizeToFit;


@end


#endif