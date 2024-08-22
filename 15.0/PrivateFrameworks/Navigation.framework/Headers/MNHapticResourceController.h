// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MNHAPTICRESOURCECONTROLLER_H
#define MNHAPTICRESOURCECONTROLLER_H

@protocol MNHapticControllerDelegate;

#import <Foundation/Foundation.h>


@interface MNHapticResourceController : NSObject {
    int _vibratorNotificationToken;
    BOOL _isVibrating;
}


@property (weak, nonatomic) NSObject<MNHapticControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) BOOL vibrating;


-(BOOL)playHapticSound:(NSUInteger)arg0 andReport:(*id)arg1 ;
-(BOOL)triggerVibration;
-(id)init;
-(void)_registerForObservation;
-(void)_updateVibratingFromState:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)stopVibrating;


@end


#endif