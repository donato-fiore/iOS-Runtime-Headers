// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSSPINNER_H
#define SSSPINNER_H

@class UIStackView, UIActivityIndicatorView, UILabel;



@interface SSSpinner : UIStackView

@property (retain) UIActivityIndicatorView *activityIndicator; // ivar: _activityIndicator
@property (readonly, nonatomic, getter=isAnimating) BOOL animating;
@property (retain) UILabel *label; // ivar: _label


-(id)initWithText:(id)arg0 ;
-(void)startAnimating;
-(void)stopAnimating;
-(void)updateText:(id)arg0 ;


@end


#endif