// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCUIPINCONTROLLER_H
#define MCUIPINCONTROLLER_H

@class DevicePINController, NSString;
@protocol UIAdaptivePresentationControllerDelegate, DevicePINControllerDelegate;



@interface MCUIPINController : DevicePINController <UIAdaptivePresentationControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<DevicePINControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger style; // ivar: _style
@property (readonly) Class superclass;


-(id)init;
-(id)pinInstructionsPrompt;
-(void)_updateStyle;
-(void)presentationControllerDidAttemptToDismiss:(id)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif