// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKCNCONTACTPICKERVIEWCONTROLLER_H
#define CKCNCONTACTPICKERVIEWCONTROLLER_H

@class CNContactPickerViewController, NSString;
@protocol CKAdaptivePresentedControllerProtocol;



@interface CKCNContactPickerViewController : CNContactPickerViewController <CKAdaptivePresentedControllerProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL preserveModalPresentationStyle; // ivar: _preserveModalPresentationStyle
@property (nonatomic) BOOL shouldHidePresentingWindow;
@property (readonly) Class superclass;
@property (nonatomic) BOOL wantsWindowedPresentation; // ivar: _wantsWindowedPresentation


-(BOOL)shouldAutorotate;


@end


#endif