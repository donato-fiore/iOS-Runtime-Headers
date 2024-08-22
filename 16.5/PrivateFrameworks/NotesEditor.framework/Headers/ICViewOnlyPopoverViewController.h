// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICVIEWONLYPOPOVERVIEWCONTROLLER_H
#define ICVIEWONLYPOPOVERVIEWCONTROLLER_H

@class UIViewController, NSString, UILabel;
@protocol UIPopoverPresentationControllerDelegate, ICViewOnlyPopoverDelegate;



@interface ICViewOnlyPopoverViewController : UIViewController <UIPopoverPresentationControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UILabel *label; // ivar: _label
@property (weak, nonatomic) NSObject<ICViewOnlyPopoverDelegate> *popoverDelegate; // ivar: _popoverDelegate
@property (readonly) Class superclass;


+(id)viewOnlyPopoverViewController:(id)arg0 sourceView:(id)arg1 ;
-(NSInteger)adaptivePresentationStyleForPresentationController:(id)arg0 traitCollection:(id)arg1 ;
-(id)initWithDelegate:(id)arg0 ;
-(struct CGSize )preferredContentSize;
-(void)presentationControllerDidDismiss:(id)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif