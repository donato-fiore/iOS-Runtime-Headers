// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXFLOATINGCARDVIEWCONTROLLER_H
#define PXFLOATINGCARDVIEWCONTROLLER_H

@class UIViewController, _UIGrabber, UILabel, UIView, NSLayoutConstraint;
@protocol PXFloatingCardViewControllerDelegate;



@interface PXFloatingCardViewController : UIViewController

@property (weak, nonatomic) UIViewController *_contentViewController; // ivar: __contentViewController
@property (retain, nonatomic) _UIGrabber *_grabber; // ivar: __grabber
@property (retain, nonatomic) UILabel *_headerLabel; // ivar: __headerLabel
@property (retain, nonatomic) UIView *_headerView; // ivar: __headerView
@property (retain, nonatomic) NSLayoutConstraint *_heightConstraint; // ivar: __heightConstraint
@property (readonly, nonatomic) UIView *backgroundView; // ivar: _backgroundView
@property (readonly, nonatomic) UIView *contentView; // ivar: _contentView
@property (weak, nonatomic) NSObject<PXFloatingCardViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) CGRect grabAreaBounds;
@property (readonly, nonatomic) UIView *grabberFooterView; // ivar: _grabberFooterView
@property (nonatomic) CGSize size; // ivar: _size


-(BOOL)_canShowWhileLocked;
-(id)_systemFontWithTextStyle:(NSInteger)arg0 weight:(CGFloat)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContentViewController:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)_dismissTapped;
-(void)contentSizeCategoryDidChangeNotification:(id)arg0 ;


@end


#endif