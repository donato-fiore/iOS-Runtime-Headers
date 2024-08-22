// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRIUIAUDIOROUTEPICKERCONTROLLER_H
#define SIRIUIAUDIOROUTEPICKERCONTROLLER_H

@class NSString, UIWindow;
@protocol SiriUIAudioRoutePickerControllerDelegate;

#import <Foundation/Foundation.h>

#import "SiriRoutePickerAlertController.h"

@interface SiriUIAudioRoutePickerController : NSObject {
    NSString *_audioCategory;
    NSString *_audioMode;
    UIWindow *_window;
    BOOL _hasRoutesToPick;
    BOOL _bluetoothIsPicked;
}


@property (weak, nonatomic) NSObject<SiriUIAudioRoutePickerControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) SiriRoutePickerAlertController *pickerAlertController; // ivar: _pickerAlertController


+(id)_nameForRouteInfo:(id)arg0 isSelected:(*BOOL)arg1 isBluetooth:(*BOOL)arg2 isOverride:(*BOOL)arg3 audioRouteName:(*id)arg4 ;
-(BOOL)bluetoothIsPicked;
-(BOOL)hasRoutesToPick;
-(BOOL)isShowingPicker;
-(id)initWithCategory:(id)arg0 mode:(id)arg1 delegate:(id)arg2 ;
-(void)_dismissAlertController:(BOOL)arg0 ;
-(void)_fetchPickableRoutesWithCompletion:(id)arg0 ;
-(void)_pickableRoutesChanged:(id)arg0 ;
-(void)_removeWindow;
-(void)_routeChanged:(id)arg0 ;
-(void)_selectRouteWithInfo:(id)arg0 ;
-(void)_showAlertControllerFromViewController:(id)arg0 animated:(BOOL)arg1 ;
-(void)cancelPickerAnimated:(BOOL)arg0 ;
-(void)dealloc;
-(void)refreshRoutes;
-(void)showPickerFromViewController:(id)arg0 animated:(BOOL)arg1 ;


@end


#endif