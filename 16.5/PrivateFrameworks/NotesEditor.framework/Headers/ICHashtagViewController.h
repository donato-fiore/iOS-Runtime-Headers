// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICHASHTAGVIEWCONTROLLER_H
#define ICHASHTAGVIEWCONTROLLER_H

@class UIViewController, UITextField;
@protocol ICHashtagViewControllerDelegate;



@interface ICHashtagViewController : UIViewController

@property (weak, nonatomic) NSObject<ICHashtagViewControllerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) UITextField *textField; // ivar: _textField


-(id)nibBundle;
-(void)createFutureHashtag:(id)arg0 ;
-(void)createHashtag:(id)arg0 ;
-(void)createUnknownInlineAttachment:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;


@end


#endif