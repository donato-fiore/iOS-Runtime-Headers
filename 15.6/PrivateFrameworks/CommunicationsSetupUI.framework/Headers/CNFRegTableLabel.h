// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNFREGTABLELABEL_H
#define CNFREGTABLELABEL_H

@class UIView, UILabel, PSSpecifier, NSURL, NSString, UITableView;
@protocol PSHeaderFooterView;


#import "CNFRegLearnMoreButton.h"

@interface CNFRegTableLabel : UIView <PSHeaderFooterView>

 {
    UILabel *_label;
    PSSpecifier *_specifier;
    CNFRegLearnMoreButton *_urlButton;
}


@property (copy, nonatomic) NSURL *URLTarget; // ivar: _URLTarget
@property (copy, nonatomic) NSString *URLText; // ivar: _URLText
@property (nonatomic) UITableView *cnfreg_tableView; // ivar: _cnfreg_tableView
@property (nonatomic) BOOL isTopmostHeader; // ivar: _isTopmostHeader


-(CGFloat)_bottomPadding;
-(CGFloat)_labelInset;
-(CGFloat)_topPadding;
-(CGFloat)preferredHeightForWidth:(CGFloat)arg0 ;
-(NSInteger)_labelTextAlignment;
-(id)_labelText;
-(id)initWithSpecifier:(id)arg0 ;
-(void)_urlTapped:(id)arg0 ;
-(void)clearSpecifier;
-(void)dealloc;
-(void)layoutSubviews;
-(void)updateLabelText;


@end


#endif