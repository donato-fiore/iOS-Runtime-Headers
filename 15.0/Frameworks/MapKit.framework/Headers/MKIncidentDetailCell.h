// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKINCIDENTDETAILCELL_H
#define MKINCIDENTDETAILCELL_H

@class UIImageView, UITextView, NSLayoutConstraint, NSString, UIImage, NSDate;
@protocol UITextViewDelegate;


#import "MKTableViewCell.h"
#import "_MKUILabel.h"

@interface MKIncidentDetailCell : MKTableViewCell <UITextViewDelegate>

 {
    _MKUILabel *_titleLabel;
    UIImageView *_iconImageView;
    UITextView *_descriptionLabel;
    _MKUILabel *_lastUpdatedLabel;
    NSLayoutConstraint *_titleFirstBaselineToTopConstraint;
    NSLayoutConstraint *_descriptionLastBaselineToBottomConstraint;
    NSLayoutConstraint *_lastUpdatedFirstBaselineToDescriptionFirstBaselineConstraint;
    NSLayoutConstraint *_lastUpdatedLastBaselineToBottomConstraint;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImage *icon; // ivar: _icon
@property (copy, nonatomic) NSString *incidentDescription;
@property (retain, nonatomic) NSDate *lastUpdated; // ivar: _lastUpdated
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title


-(BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange )arg2 interaction:(NSInteger)arg3 ;
-(id)initWithReuseIdentifier:(id)arg0 ;
-(void)_contentSizeCategoryDidChange;
-(void)_setConstraints;
-(void)_updateConstraintValues;
-(void)_updateLastUpdatedLabel;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)infoCardThemeChanged;
-(void)updateConstraints;


@end


#endif