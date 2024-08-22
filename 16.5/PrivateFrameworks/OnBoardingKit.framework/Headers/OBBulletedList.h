// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OBBULLETEDLIST_H
#define OBBULLETEDLIST_H

@class UIView, NSMutableArray, NSLayoutConstraint;



@interface OBBulletedList : UIView

@property (retain, nonatomic) NSMutableArray *items; // ivar: _items
@property (retain, nonatomic) NSLayoutConstraint *leadingConstraint; // ivar: _leadingConstraint
@property (retain, nonatomic) NSLayoutConstraint *trailingConstraint; // ivar: _trailingConstraint
@property (retain, nonatomic) NSMutableArray *verticalConstraints; // ivar: _verticalConstraints


-(BOOL)_shouldHandleLandscapeiPhoneLayout;
-(CGFloat)bulletedListItemSpacing;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateConstraints;
-(void)_updatePaddingForOrientation;
-(void)addBulletedListItem:(id)arg0 ;
-(void)addItemWithDescription:(id)arg0 image:(id)arg1 ;
-(void)addItemWithTitle:(id)arg0 description:(id)arg1 image:(id)arg2 ;
-(void)addItemWithTitle:(id)arg0 description:(id)arg1 image:(id)arg2 linkButton:(id)arg3 ;
-(void)addItemWithTitle:(id)arg0 description:(id)arg1 image:(id)arg2 tintColor:(id)arg3 ;
-(void)addItemWithTitle:(id)arg0 description:(id)arg1 image:(id)arg2 tintColor:(id)arg3 linkButton:(id)arg4 ;
-(void)didMoveToWindow;
-(void)layoutSubviews;


@end


#endif