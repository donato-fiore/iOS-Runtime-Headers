// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MEDIACONTROLSVOLUMESLIDERVIEW_H
#define MEDIACONTROLSVOLUMESLIDERVIEW_H

@class CCUIContinuousSliderView, UIView, UIImpactFeedbackGenerator, UIImageSymbolConfiguration;
@protocol OS_dispatch_queue;



@interface MediaControlsVolumeSliderView : CCUIContinuousSliderView {
    UIView *_orangeValueView;
    BOOL _didAcknowledgeThreshold;
    BOOL _didHitThreshold;
    BOOL _didTakeActionToAcknowledge;
    UIImpactFeedbackGenerator *_impactFeedbackGenerator;
    UIView *_materialView;
    NSObject<OS_dispatch_queue> *_avSystemControllerQueue;
}


@property (getter=isEUDevice) BOOL euDevice; // ivar: _euDevice
@property float euVolumeLimit; // ivar: _euVolumeLimit
@property (getter=isEUVolumeLimitEnforced) BOOL euVolumeLimitEnforced; // ivar: _euVolumeLimitEnforced
@property (retain, nonatomic) UIImageSymbolConfiguration *imageSymbolConfiguration; // ivar: _imageSymbolConfiguration


-(float)_valueByApplyingEULimitsToValue:(float)arg0 ;
-(float)filteredValueForValue:(float)arg0 ;
-(id)createBackgroundView;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_EUVolumeEnforcementChanged:(id)arg0 ;
-(void)_EUVolumeLimitChanged:(id)arg0 ;
-(void)_avSystemControllerQueue_initializeEUVolumeLimits;
-(void)_registerForAVSystemControllerNotifications;
-(void)_serverConnectionDied:(id)arg0 ;
-(void)_unregisterForAVSystemControllerNotifications;
-(void)layoutSubviews;
-(void)resetThresholdAcknowledgment;
-(void)setContinuousSliderCornerRadius:(CGFloat)arg0 ;
-(void)setGlyphImage:(id)arg0 packageDescription:(id)arg1 state:(id)arg2 animated:(BOOL)arg3 ;
-(void)setGlyphPackageDescription:(id)arg0 state:(id)arg1 animated:(BOOL)arg2 ;
-(void)setOutputDeviceAsset:(id)arg0 state:(id)arg1 animated:(BOOL)arg2 ;
-(void)setupEUDevice;


@end


#endif