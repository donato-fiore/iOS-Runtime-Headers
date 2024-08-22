// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNERRORVIEWCONTROLLER_H
#define CNERRORVIEWCONTROLLER_H

@class UIViewController, NSString, UILabel;
@protocol UIAdaptivePresentationControllerDelegate;



@interface CNErrorViewController : UIViewController <UIAdaptivePresentationControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *errorMessage; // ivar: _errorMessage
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UILabel *label; // ivar: _label
@property (readonly) Class superclass;


-(id)initWithMessage:(id)arg0 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif