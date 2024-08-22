// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICDOCCAMSPINNER_H
#define ICDOCCAMSPINNER_H

@class UIActivityIndicatorView, UIViewPropertyAnimator, NSDate;

#import <Foundation/Foundation.h>


@interface ICDocCamSpinner : NSObject

@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator; // ivar: _activityIndicator
@property (retain, nonatomic) UIViewPropertyAnimator *animator; // ivar: _animator
@property (nonatomic) CGFloat minimumDuration; // ivar: _minimumDuration
@property (retain, nonatomic) NSDate *showDate; // ivar: _showDate


-(id)initWithView:(id)arg0 minimumDuration:(CGFloat)arg1 ;
-(void)hide;
-(void)show;


@end


#endif