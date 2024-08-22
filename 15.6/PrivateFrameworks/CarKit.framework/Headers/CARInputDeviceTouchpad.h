// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CARINPUTDEVICETOUCHPAD_H
#define CARINPUTDEVICETOUCHPAD_H

@protocol CARInputDeviceTouchpadDelegate;


#import "CARInputDevice.h"

@interface CARInputDeviceTouchpad : CARInputDevice

@property (readonly, nonatomic) BOOL characterRecognitionSupported; // ivar: _characterRecognitionSupported
@property (weak, nonatomic) NSObject<CARInputDeviceTouchpadDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) BOOL feedbackSupported;
@property (readonly, nonatomic) CGSize physicalSize; // ivar: _physicalSize
@property (nonatomic) CGFloat sensitivity; // ivar: _sensitivity
@property (readonly, nonatomic) NSUInteger supportedFeedbackTypes; // ivar: _supportedFeedbackTypes


+(struct CGSize )physicalSizeForTouchpadWithDigitizerProperties:(id)arg0 ;
-(BOOL)_characterRecognitionSupportedForServiceClient:(struct __IOHIDServiceClient *)arg0 ;
-(id)_initWithSupportedHapticTypes:(NSUInteger)arg0 physicalSize:(struct CGSize )arg1 characterRecognitionSupported:(BOOL)arg2 senderID:(NSUInteger)arg3 UUID:(id)arg4 ;
-(id)description;
-(id)initWithServiceClient:(struct __IOHIDServiceClient *)arg0 UUID:(id)arg1 settings:(id)arg2 delegate:(id)arg3 ;
-(struct CGSize )_physicalSizeForTouchpadServiceClient:(struct __IOHIDServiceClient *)arg0 ;
-(void)performFeedbackOfType:(NSUInteger)arg0 ;
-(void)updateSettingsWithSettings:(id)arg0 ;


@end


#endif