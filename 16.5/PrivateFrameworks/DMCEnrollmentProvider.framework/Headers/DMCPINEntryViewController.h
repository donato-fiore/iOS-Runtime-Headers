// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DMCPINENTRYVIEWCONTROLLER_H
#define DMCPINENTRYVIEWCONTROLLER_H

@class DevicePINController, NSString, UIBarButtonItem, UILabel;
@protocol UIAdaptivePresentationControllerDelegate, DMCDismissalAwareViewController, DevicePINControllerDelegate;



@interface DMCPINEntryViewController : DevicePINController <UIAdaptivePresentationControllerDelegate, DMCDismissalAwareViewController>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<DevicePINControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *descriptionText; // ivar: _descriptionText
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL inProgress; // ivar: _inProgress
@property (retain, nonatomic) UIBarButtonItem *rightBarButtonItem; // ivar: _rightBarButtonItem
@property (readonly, nonatomic) NSUInteger style; // ivar: _style
@property (readonly) Class superclass;
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(id)_titleFont;
-(id)initWithStyle:(NSUInteger)arg0 ;
-(id)stringsBundle;
-(void)_updateStyle;
-(void)leftBarButtonTapped:(id)arg0 ;
-(void)loadView;
-(void)presentationControllerDidAttemptToDismiss:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewControllerHasBeenDismissed;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif