// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUACTIVITYPROGRESSVIEWCONTROLLER_H
#define PUACTIVITYPROGRESSVIEWCONTROLLER_H

@class UIViewController, UILabel, PLRoundProgressView, UIImageView, NSArray, NSString;



@interface PUActivityProgressViewController : UIViewController {
    UILabel *_primaryLabel;
    UILabel *_secondaryLabel;
    PLRoundProgressView *_progressView;
    UIImageView *_checkmarkView;
    NSArray *_labelConstraints;
    NSArray *_contentConstraints;
}


@property (nonatomic) CGFloat fractionCompleted; // ivar: _fractionCompleted
@property (retain, nonatomic) NSString *primaryText; // ivar: _primaryText
@property (retain, nonatomic) NSString *secondaryText; // ivar: _secondaryText
@property (nonatomic) BOOL showCheckmarkOnCompletion; // ivar: _showCheckmarkOnCompletion


-(BOOL)_canShowWhileLocked;
-(id)_checkmarkView;
-(id)_primaryLabel;
-(id)_progressView;
-(id)_secondaryLabel;
-(void)_updatePrimaryLabel;
-(void)_updateSecondaryLabel;
-(void)_updateViewVisibility;
-(void)reset;
-(void)updateViewConstraints;


@end


#endif