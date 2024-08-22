// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFACTIVITYINDICATORLABEL_H
#define MFACTIVITYINDICATORLABEL_H

@class UIView, UIActivityIndicatorView, UILabel;



@interface MFActivityIndicatorLabel : UIView

@property (readonly, nonatomic) UIActivityIndicatorView *activityIndicator; // ivar: _activityIndicator
@property (retain, nonatomic) UILabel *textLabel; // ivar: _textLabel


-(id)accessibilityLabel;
-(id)init;
-(void)startAnimating;
-(void)stopAnimating;


@end


#endif