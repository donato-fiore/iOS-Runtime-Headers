// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SHSHEADPHONENOTIFICATIONSCONTROLLER_H
#define SHSHEADPHONENOTIFICATIONSCONTROLLER_H

@class UIViewController, NSString, UIView, UIScrollView, UILabel;
@protocol UITextViewDelegate;



@interface SHSHeadphoneNotificationsController : UIViewController <UITextViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIView *descriptionLabel; // ivar: _descriptionLabel
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIScrollView *scrollView; // ivar: _scrollView
@property (readonly) Class superclass;
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange )arg2 interaction:(NSInteger)arg3 ;
-(id)bluetoothSettingsLinkText;
-(id)createDescriptionLabel;
-(id)createScrollView;
-(id)createTitleLabel;
-(id)healthLinkText;
-(id)linkText:(id)arg0 withLink:(id)arg1 ;
-(id)titleText;
-(void)viewDidLoad;


@end


#endif