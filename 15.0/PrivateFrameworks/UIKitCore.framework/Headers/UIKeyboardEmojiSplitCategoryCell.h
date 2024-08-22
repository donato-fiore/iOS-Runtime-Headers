// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIKEYBOARDEMOJISPLITCATEGORYCELL_H
#define UIKEYBOARDEMOJISPLITCATEGORYCELL_H



#import "UITableViewCell.h"
#import "UIView.h"
#import "UIImageView.h"
#import "UILabel.h"

@interface UIKeyboardEmojiSplitCategoryCell : UITableViewCell

@property (retain, nonatomic) UIView *selectedCircle; // ivar: _selectedCircle
@property (retain, nonatomic) UIImageView *symbol; // ivar: _symbol
@property (retain, nonatomic) UILabel *title; // ivar: _title


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)dealloc;
-(void)setPressIndicatorHidden:(BOOL)arg0 ;


@end


#endif