// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AAUIBUDDYVIEW_H
#define AAUIBUDDYVIEW_H

@class UIView, UILayoutGuide;



@interface AAUIBuddyView : UIView

@property (readonly, nonatomic) UILayoutGuide *contentLayoutGuide; // ivar: _contentLayoutGuide


+(BOOL)requiresConstraintBasedLayout;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;


@end


#endif