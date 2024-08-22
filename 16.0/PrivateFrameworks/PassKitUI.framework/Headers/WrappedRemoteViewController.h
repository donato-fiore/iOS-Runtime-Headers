// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WRAPPEDREMOTEVIEWCONTROLLER_H
#define WRAPPEDREMOTEVIEWCONTROLLER_H

@class UIRemoteViewController, NSString;
@protocol PKClientShareSecureElementPassViewControllerDelegate;



@interface WrappedRemoteViewController : UIRemoteViewController <PKClientShareSecureElementPassViewControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)shouldPropagateAppearanceCustomizations;
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(void)didCreateShareURL:(id)arg0 activationCode:(id)arg1 error:(id)arg2 ;
-(void)didFinishShareWithDidUserShare:(BOOL)arg0 error:(id)arg1 ;


@end


#endif