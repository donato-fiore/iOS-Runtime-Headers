// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NMBUICONTENTHEADERVIEW_H
#define NMBUICONTENTHEADERVIEW_H

@class UIView, UIStackView, UILabel, UIProgressView;



@interface NMBUIContentHeaderView : UIView {
    UIStackView *_contentStackView;
    UILabel *_textLabel;
    UILabel *_detailTextLabel;
    UIProgressView *_progressView;
}


@property (readonly, nonatomic) UILabel *detailTextLabel;
@property (readonly, nonatomic) UIProgressView *progressView;
@property (readonly, nonatomic) UILabel *textLabel;


-(id)_contentStackView;


@end


#endif