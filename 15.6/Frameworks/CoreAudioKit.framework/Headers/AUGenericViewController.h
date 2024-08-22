// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AUGENERICVIEWCONTROLLER_H
#define AUGENERICVIEWCONTROLLER_H

@class UIViewController, AUAudioUnit, UIColor;


#import "AUGenericViewInternal.h"

@interface AUGenericViewController : UIViewController {
    *OpaqueAudioComponentInstance au;
}


@property (retain, nonatomic) AUAudioUnit *auAudioUnit; // ivar: _auAudioUnit
@property (readonly) AUGenericViewInternal *genericView; // ivar: _genericView
@property (retain, nonatomic) UIColor *tintColor; // ivar: _tintColor


-(id)getAuAudioUnit;
-(id)getTintColor;
-(id)init;
-(void)genericViewBeginGestureMessageReceived:(id)arg0 ;
-(void)genericViewEndGestureMessageReceived:(id)arg0 ;
-(void)genericViewNotificationMessageReceived:(id)arg0 ;
-(void)setAudioUnit:(struct OpaqueAudioComponentInstance *)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif