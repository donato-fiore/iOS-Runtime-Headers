// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKEVENTDETAILCONFERENCECELL_H
#define EKEVENTDETAILCONFERENCECELL_H

@class UIButton, UIListContentView, UIView, NSArray;
@protocol ConferenceCellDelegate;


#import "EKEventDetailCell.h"

@interface EKEventDetailConferenceCell : EKEventDetailCell {
    UIButton *_openURLButton;
    UIButton *_shareButton;
    NSUInteger _actionButtonType;
    UIListContentView *_listView;
    UIView *_topSeparator;
    UIView *_bottomSeparator;
    NSArray *_constraints;
}


@property (weak, nonatomic) NSObject<ConferenceCellDelegate> *delegate; // ivar: _delegate


-(BOOL)_buttonsShouldUseSeparateLine;
-(BOOL)update;
-(CGFloat)_separatorHeight;
-(id)_buttonConfigForCurrentTime;
-(id)_defaultListConfiguration;
-(id)initWithEvent:(id)arg0 editable:(BOOL)arg1 ;
-(void)_createConstraints;
-(void)_createViews;
-(void)_openURL;
-(void)_share:(id)arg0 ;
-(void)_updateActionButtonWithType:(NSUInteger)arg0 ;
-(void)tintColorDidChange;
-(void)updateListConfigWithImage:(id)arg0 title:(id)arg1 subtitle:(id)arg2 ;


@end


#endif