// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STSINGLELINEHEADERVIEW_H
#define STSINGLELINEHEADERVIEW_H

@class PSSpecifier, UILabel;
@protocol PSHeaderFooterView;


#import "STTableViewHeaderFooterView.h"

@interface STSingleLineHeaderView : STTableViewHeaderFooterView <PSHeaderFooterView>



@property (weak, nonatomic) PSSpecifier *specifier; // ivar: _specifier
@property (readonly, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(CGFloat)preferredHeightForWidth:(CGFloat)arg0 ;
-(id)initWithSpecifier:(id)arg0 ;
-(id)initWithSpecifier:(id)arg0 useContentLayoutGuide:(BOOL)arg1 ;
-(void)reloadFromSpecifier;


@end


#endif