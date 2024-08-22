// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBUIEMERGENCYCALLHOSTVIEWCONTROLLER_H
#define SBUIEMERGENCYCALLHOSTVIEWCONTROLLER_H

@class UIRemoteViewController, _UIBackdropView, UIColor;
@protocol SBUIEmergencyCallHostInterface;



@interface SBUIEmergencyCallHostViewController : UIRemoteViewController <SBUIEmergencyCallHostInterface>

 {
    _UIBackdropView *_blurView;
}


@property (nonatomic) NSInteger backgroundStyle; // ivar: _backgroundStyle
@property (nonatomic) CGFloat blurRadius; // ivar: _blurRadius
@property (nonatomic) BOOL blursSelf; // ivar: _blursSelf
@property (retain, nonatomic) UIColor *tintColor; // ivar: _tintColor


+(id)exportedInterface;
+(id)serviceViewControllerInterface;
+(void)requestEmergencyCallControllerWithCompletion:(id)arg0 ;
-(id)tintColorForBackgroundStyle:(NSInteger)arg0 outBlurRadius:(*CGFloat)arg1 ;
-(void)_createAndAddBlurViewIfNecessary;
-(void)dismiss;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif