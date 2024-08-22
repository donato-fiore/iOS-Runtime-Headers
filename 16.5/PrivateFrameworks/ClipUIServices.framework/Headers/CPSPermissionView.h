// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPSPERMISSIONVIEW_H
#define CPSPERMISSIONVIEW_H

@class UIView, NSString;
@protocol UITextViewDelegate;


#import "CPSButton.h"

@interface CPSPermissionView : UIView <UITextViewDelegate>

 {
    CPSButton *_permissionButton;
    NSString *_appName;
    BOOL _requestsNotificationPermission;
    BOOL _requestsLocationConfirmationPermission;
    BOOL _permissionTextNeedsUpdate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL locationConfirmationPermissionEnabled; // ivar: _locationConfirmationPermissionEnabled
@property (nonatomic) BOOL notificationPermissionEnabled; // ivar: _notificationPermissionEnabled
@property (copy, nonatomic) id *optionsAction; // ivar: _optionsAction
@property (readonly) Class superclass;


-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)configureWithAppName:(id)arg0 requestsNotificationPermission:(BOOL)arg1 requestsLocationConfirmationPermission:(BOOL)arg2 ;
-(void)layoutSubviews;
-(void)permissionButtonTapped:(id)arg0 ;
-(void)toggleLocationConfirmationPermission;
-(void)toggleNotificationPermission;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)transitionViewAnimated:(BOOL)arg0 ;


@end


#endif