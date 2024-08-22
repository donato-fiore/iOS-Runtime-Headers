// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIFINDNAVIGATORVIEWLAYOUT_H
#define _UIFINDNAVIGATORVIEWLAYOUT_H

@class NSString, UIFont;


#import "UIView.h"
#import "UIButton.h"

@interface _UIFindNavigatorViewLayout : UIView

@property (nonatomic) NSInteger assistantBarStyle; // ivar: _assistantBarStyle
@property (retain, nonatomic) UIButton *doneButton; // ivar: _doneButton
@property (retain, nonatomic) UIButton *nextResultButton; // ivar: _nextResultButton
@property (readonly, nonatomic) CGSize preferredContentSize;
@property (readonly, nonatomic) NSString *preferredMaximumContentSizeCategory;
@property (readonly, nonatomic) UIFont *preferredTextFieldFont;
@property (retain, nonatomic) UIButton *previousResultButton; // ivar: _previousResultButton
@property (retain, nonatomic) UIButton *replaceButton; // ivar: _replaceButton
@property (nonatomic) BOOL replaceFieldVisible; // ivar: _replaceFieldVisible
@property (retain, nonatomic) UIView *replaceTextField; // ivar: _replaceTextField
@property (retain, nonatomic) UIView *searchTextField; // ivar: _searchTextField
@property (readonly, nonatomic) BOOL showsReplaceInOptionsMenu;
@property (nonatomic) BOOL usesAssistantBarHeight; // ivar: _usesAssistantBarHeight


-(BOOL)isEqual:(id)arg0 ;
-(id)commonButtonConfig:(id)arg0 ;
-(id)commonButtonConfigWithImageName:(id)arg0 ;
-(id)commonButtonConfigWithTitle:(id)arg0 ;
-(void)prepareForLayout;


@end


#endif