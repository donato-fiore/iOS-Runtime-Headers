// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUITEMTABLEHEADERFOOTERVIEW_H
#define HUITEMTABLEHEADERFOOTERVIEW_H

@class UITableViewHeaderFooterView, NSAttributedString, NSLayoutConstraint, NSArray, NSString, UITextView;



@interface HUItemTableHeaderFooterView : UITableViewHeaderFooterView

@property (copy, nonatomic) NSAttributedString *attributedMessage;
@property (retain, nonatomic) NSLayoutConstraint *bottomSpacingConstraint; // ivar: _bottomSpacingConstraint
@property (retain, nonatomic) NSArray *constraints; // ivar: _constraints
@property (nonatomic) BOOL includeBottomSpacing; // ivar: _includeBottomSpacing
@property (copy, nonatomic) NSString *message;
@property (retain, nonatomic) UITextView *messageTextView; // ivar: _messageTextView
@property (nonatomic) NSUInteger numberOfLines;


+(BOOL)requiresConstraintBasedLayout;
-(CGFloat)_bottomSpacing;
-(id)initWithReuseIdentifier:(id)arg0 ;
-(void)updateConstraints;


@end


#endif