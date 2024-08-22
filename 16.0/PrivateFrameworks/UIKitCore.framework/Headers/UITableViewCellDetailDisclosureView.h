// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UITABLEVIEWCELLDETAILDISCLOSUREVIEW_H
#define UITABLEVIEWCELLDETAILDISCLOSUREVIEW_H



#import "UIControl.h"
#import "UIImageView.h"
#import "UITableViewCell.h"
#import "UIButton.h"
#import "UIColor.h"

@interface UITableViewCellDetailDisclosureView : UIControl {
    UIImageView *_disclosureView;
    UITableViewCell *_cell;
}


@property (readonly, nonatomic) UIButton *accessoryButton; // ivar: _accessoryButton
@property (retain, nonatomic) UIColor *accessoryTintColor; // ivar: _accessoryTintColor


-(id)initWithTarget:(id)arg0 action:(SEL)arg1 cell:(id)arg2 buttonType:(NSInteger)arg3 shouldReverseLayoutDirection:(BOOL)arg4 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)_updateDisclosureChevronImage;
-(void)addTarget:(id)arg0 action:(SEL)arg1 forControlEvents:(NSUInteger)arg2 ;
-(void)removeTarget:(id)arg0 action:(SEL)arg1 forControlEvents:(NSUInteger)arg2 ;
-(void)setSemanticContentAttribute:(NSInteger)arg0 ;


@end


#endif