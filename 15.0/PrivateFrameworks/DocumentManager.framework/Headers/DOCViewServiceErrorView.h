// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DOCVIEWSERVICEERRORVIEW_H
#define DOCVIEWSERVICEERRORVIEW_H

@class UIView, UILabel, UIButton;
@protocol DOCViewServiceErrorViewDelegate;



@interface DOCViewServiceErrorView : UIView

@property (weak) NSObject<DOCViewServiceErrorViewDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UILabel *subtitleLabel; // ivar: _subtitleLabel
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) UIButton *tryAgainButton; // ivar: _tryAgainButton


-(id)init;
-(void)didTapTryAgain;


@end


#endif