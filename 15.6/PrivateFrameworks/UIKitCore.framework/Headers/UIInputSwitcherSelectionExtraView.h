// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIINPUTSWITCHERSELECTIONEXTRAVIEW_H
#define UIINPUTSWITCHERSELECTIONEXTRAVIEW_H



#import "UIView.h"
#import "UIKeyboardMenuView.h"

@interface UIInputSwitcherSelectionExtraView : UIView

@property (nonatomic) CGRect keyRect; // ivar: _keyRect
@property (nonatomic) UIKeyboardMenuView *menu; // ivar: _menu
@property (nonatomic) CGFloat pointerOffset; // ivar: m_pointerOffset
@property (nonatomic) NSUInteger roundedCorners; // ivar: _roundedCorners


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;


@end


#endif