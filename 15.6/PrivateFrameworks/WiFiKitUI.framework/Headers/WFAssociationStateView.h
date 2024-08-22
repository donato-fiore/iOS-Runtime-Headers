// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFASSOCIATIONSTATEVIEW_H
#define WFASSOCIATIONSTATEVIEW_H

@class UIView, UIActivityIndicatorView, UIImageView;



@interface WFAssociationStateView : UIView

@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator; // ivar: _activityIndicator
@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (nonatomic) NSInteger state; // ivar: _state


-(void)layoutSubviews;


@end


#endif