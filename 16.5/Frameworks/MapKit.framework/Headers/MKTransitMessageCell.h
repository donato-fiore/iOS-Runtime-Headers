// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKTRANSITMESSAGECELL_H
#define MKTRANSITMESSAGECELL_H

@class NSLayoutConstraint, NSString;


#import "MKCustomSeparatorCell.h"
#import "_MKUILabel.h"

@interface MKTransitMessageCell : MKCustomSeparatorCell {
    _MKUILabel *_messageLabel;
    NSLayoutConstraint *_topConstraint;
    NSLayoutConstraint *_bottomConstraint;
}


@property (copy, nonatomic) NSString *messageText;


-(id)initWithReuseIdentifier:(id)arg0 ;
-(void)_contentSizeCategoryDidChange;
-(void)_updateConstraintValues;
-(void)dealloc;


@end


#endif