// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAMMACHINEREADABLECODEINDICATORVIEW_H
#define CAMMACHINEREADABLECODEINDICATORVIEW_H

@class CEKSubjectIndicatorView, NSString, UIImage;


#import "CAMMachineReadableCodeButton.h"

@interface CAMMachineReadableCodeIndicatorView : CEKSubjectIndicatorView

@property (retain, nonatomic) CAMMachineReadableCodeButton *_titleButton; // ivar: __titleButton
@property (nonatomic) NSInteger orientation; // ivar: _orientation
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) CGSize titleFittingSize; // ivar: _titleFittingSize
@property (readonly, nonatomic) UIImage *titleImage; // ivar: _titleImage


-(BOOL)_shouldShowButton;
-(BOOL)shouldTitleReceiveTouch:(id)arg0 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)removeTitleButton;
-(void)_updateAttributedTitle;
-(void)layoutSubviews;


@end


#endif