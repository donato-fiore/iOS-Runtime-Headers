// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIPROTOTYPINGMENUCELL_H
#define _UIPROTOTYPINGMENUCELL_H



#import "UITableViewCell.h"
#import "_UIPrototypingValue.h"
#import "UIStackView.h"
#import "UILabel.h"

@interface _UIPrototypingMenuCell : UITableViewCell

@property (retain, nonatomic) _UIPrototypingValue *prototypingSetting; // ivar: _prototypingSetting
@property (readonly, nonatomic) UIStackView *stackView; // ivar: _stackView
@property (readonly, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


+(NSInteger)_layoutAxis;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;


@end


#endif