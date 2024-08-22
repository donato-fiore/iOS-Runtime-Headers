// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AUGENERICVIEWCONTROLLER_H
#define AUGENERICVIEWCONTROLLER_H

@class UIViewController, AUAudioUnit;


#import "_TtC12CoreAudioKit21AUGenericViewInternal.h"

@interface AUGenericViewController : UIViewController

@property (retain, nonatomic) AUAudioUnit *auAudioUnit; // ivar: _auAudioUnit
@property (readonly) _TtC12CoreAudioKit21AUGenericViewInternal *genericView; // ivar: _genericView


-(id)getAuAudioUnit;
-(id)init;
-(void)addGestureObservers;
-(void)genericViewBeginGestureMessageReceived:(id)arg0 ;
-(void)genericViewEndGestureMessageReceived:(id)arg0 ;
-(void)genericViewNotificationMessageReceived:(id)arg0 ;
-(void)setAudioUnit:(struct OpaqueAudioComponentInstance *)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif