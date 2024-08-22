// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPSPERMISSIONSVIEWCONTROLLER_H
#define CPSPERMISSIONSVIEWCONTROLLER_H

@class UIViewController, NSString, UIImageView, UIView, UIImage;
@protocol PRXCardContentProviding, CPSPermissionsViewControllerDelegate;


#import "CPSPermissionItemView.h"

@interface CPSPermissionsViewController : UIViewController <PRXCardContentProviding>

 {
    NSString *_appName;
    UIImageView *_backgroundImageView;
    UIView *_optionsContainer;
    CPSPermissionItemView *_notificationItemView;
    CPSPermissionItemView *_locationConfirmationItemView;
    BOOL _backgroundImageNeedsUpdate;
}


@property (readonly, nonatomic) BOOL allowsPullToDismiss;
@property (retain, nonatomic) UIImage *backgroundImage; // ivar: _backgroundImage
@property (readonly, nonatomic) NSInteger cardStyle;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CPSPermissionsViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL locationConfirmationPermissionEnabled;
@property (nonatomic) BOOL notificationPermissionEnabled;
@property (readonly) Class superclass;


-(BOOL)_canShowWhileLocked;
-(id)init;
-(id)initWithAppName:(id)arg0 backgroundImage:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)doneTapped;
-(void)loadView;
-(void)setUpOptionsContainer;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updatePreferredContentSizeForCardWidth:(CGFloat)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif