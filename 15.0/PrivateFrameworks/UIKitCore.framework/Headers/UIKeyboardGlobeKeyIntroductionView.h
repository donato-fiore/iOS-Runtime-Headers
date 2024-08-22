// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIKEYBOARDGLOBEKEYINTRODUCTIONVIEW_H
#define UIKEYBOARDGLOBEKEYINTRODUCTIONVIEW_H

@class NSDate;


#import "UIView.h"
#import "_UIBackdropView.h"
#import "UIButton.h"
#import "UITextView.h"
#import "UILabel.h"

@interface UIKeyboardGlobeKeyIntroductionView : UIView

@property (retain, nonatomic) _UIBackdropView *backdropView; // ivar: _backdropView
@property (copy, nonatomic) id *completionBlock; // ivar: _completionBlock
@property (retain, nonatomic) UIButton *continueButton; // ivar: _continueButton
@property (retain, nonatomic) UITextView *descriptionLabel; // ivar: _descriptionLabel
@property (retain, nonatomic) NSDate *startDate; // ivar: _startDate
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(NSInteger)backdropStyleForRenderConfig:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 completion:(id)arg1 ;
-(void)layoutSubviews;


@end


#endif