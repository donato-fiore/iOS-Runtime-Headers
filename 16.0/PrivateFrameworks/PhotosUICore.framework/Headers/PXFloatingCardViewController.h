// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXFLOATINGCARDVIEWCONTROLLER_H
#define PXFLOATINGCARDVIEWCONTROLLER_H

@class UIViewController, UIView, UIVisualEffectView, _UIGrabber, UILabel, NSLayoutConstraint;
@protocol PXFloatingCardViewControllerDelegate;



@interface PXFloatingCardViewController : UIViewController

@property (readonly, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIVisualEffectView *backgroundVisualEffectView; // ivar: _backgroundVisualEffectView
@property (readonly, nonatomic) UIView *contentView; // ivar: _contentView
@property (weak, nonatomic) UIViewController *contentViewController; // ivar: _contentViewController
@property (weak, nonatomic) NSObject<PXFloatingCardViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) CGRect grabAreaBounds;
@property (retain, nonatomic) _UIGrabber *grabber; // ivar: _grabber
@property (readonly, nonatomic) UIView *grabberFooterView; // ivar: _grabberFooterView
@property (retain, nonatomic) UILabel *headerLabel; // ivar: _headerLabel
@property (retain, nonatomic) UIView *headerView; // ivar: _headerView
@property (retain, nonatomic) NSLayoutConstraint *heightConstraint; // ivar: _heightConstraint
@property (nonatomic) CGSize size; // ivar: _size


-(BOOL)_canShowWhileLocked;
-(id)_systemFontWithTextStyle:(NSInteger)arg0 weight:(CGFloat)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContentViewController:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)_dismissTapped;
-(void)contentSizeCategoryDidChangeNotification:(id)arg0 ;
-(void)removeFromParentViewController;


@end


#endif