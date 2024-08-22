// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STSINGLELINEBUTTONHEADERVIEW_H
#define STSINGLELINEBUTTONHEADERVIEW_H

@class UIButton;


#import "STSingleLineHeaderView.h"

@interface STSingleLineButtonHeaderView : STSingleLineHeaderView

@property (readonly, nonatomic) UIButton *button; // ivar: _button


-(CGFloat)preferredHeightForWidth:(CGFloat)arg0 ;
-(id)initWithSpecifier:(id)arg0 useContentLayoutGuide:(BOOL)arg1 ;
-(void)reloadFromSpecifier;
-(void)setSpecifier:(id)arg0 ;


@end


#endif