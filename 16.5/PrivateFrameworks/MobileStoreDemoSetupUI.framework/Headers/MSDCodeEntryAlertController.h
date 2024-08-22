// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSDCODEENTRYALERTCONTROLLER_H
#define MSDCODEENTRYALERTCONTROLLER_H

@class UIAlertController, NSString;
@protocol MSDCodeEntryContentViewControllerDelegate;



@interface MSDCodeEntryAlertController : UIAlertController <MSDCodeEntryContentViewControllerDelegate>



@property (copy, nonatomic) id *completion; // ivar: _completion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithVerificationCode:(id)arg0 completion:(id)arg1 ;
-(void)didCompleteVerification:(BOOL)arg0 forCode:(id)arg1 ;


@end


#endif