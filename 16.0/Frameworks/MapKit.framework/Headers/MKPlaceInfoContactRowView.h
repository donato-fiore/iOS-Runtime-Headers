// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKPLACEINFOCONTACTROWVIEW_H
#define MKPLACEINFOCONTACTROWVIEW_H

@class NSLayoutConstraint, NSArray, NSString, UIColor, CNLabeledValue;
@protocol UIGestureRecognizerDelegate, NSItemProviderWriting;


#import "MKPlaceSectionRowView.h"
#import "MKPlaceSectionHeaderView.h"
#import "MKVibrantLabel.h"
#import "_MKUILabel.h"

@interface MKPlaceInfoContactRowView : MKPlaceSectionRowView <UIGestureRecognizerDelegate>

 {
    MKPlaceSectionHeaderView *_headerView;
    NSLayoutConstraint *_topToTitleConstraint;
    NSLayoutConstraint *_topToIconConstraint;
    NSLayoutConstraint *_titleToValueConstraint;
    NSLayoutConstraint *_valueToTrailingViewConstraint;
    NSArray *_iconConstraints;
    NSArray *_titleConstraints;
    BOOL _isInRightMouseDownEvent;
    BOOL _textIsSelectable;
}


@property (readonly, nonatomic) int analyticsTarget;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<NSItemProviderWriting> *draggableContent;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *iconSelectedBlock; // ivar: _iconSelectedBlock
@property (retain, nonatomic) UIColor *labelColor; // ivar: _labelColor
@property (retain, nonatomic) CNLabeledValue *labeledValue; // ivar: _labeledValue
@property (readonly) Class superclass;
@property (readonly, nonatomic) MKVibrantLabel *titleLabel; // ivar: _titleLabel
@property (readonly, nonatomic) _MKUILabel *valueLabel; // ivar: _valueLabel
@property (retain, nonatomic) NSLayoutConstraint *valueToBottomConstraint; // ivar: _valueToBottomConstraint


+(id)icon;
-(id)_icon;
-(id)_iconAccessibilityLabel;
-(id)_valueString;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_contentSizeDidChange;
-(void)copy:(id)arg0 ;


@end


#endif