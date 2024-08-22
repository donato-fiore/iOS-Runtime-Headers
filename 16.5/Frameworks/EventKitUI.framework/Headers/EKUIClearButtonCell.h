// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKUICLEARBUTTONCELL_H
#define EKUICLEARBUTTONCELL_H

@class UIListContentView, NSArray, UIButton;


#import "EKUITableViewCell.h"

@interface EKUIClearButtonCell : EKUITableViewCell {
    UIListContentView *_listContentView;
    NSArray *_constraints;
}


@property (readonly, nonatomic) UIButton *clearButton; // ivar: _clearButton


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_updateConfigurationNumLines:(id)arg0 ;
-(void)_updateConstraints;
-(void)setTitleSubtitleContentConfiguration:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif