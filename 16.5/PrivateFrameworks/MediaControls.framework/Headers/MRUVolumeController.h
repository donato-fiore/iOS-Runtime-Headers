// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRUVOLUMECONTROLLER_H
#define MRUVOLUMECONTROLLER_H

@class MPVolumeController, NSTimer, NSNumber;
@protocol MRUVolumeControllerDelegate, MRUVolumeControllerCoordinationDelegate;



@interface MRUVolumeController : MPVolumeController {
    NSTimer *_optimisticTimer;
    id<MRUVolumeControllerDelegate> *_delegate;
}


@property (weak, nonatomic) NSObject<MRUVolumeControllerCoordinationDelegate> *coordinationDelegate; // ivar: _coordinationDelegate
@property (weak, nonatomic) NSObject<MRUVolumeControllerDelegate> *delegate;
@property (retain, nonatomic) NSNumber *optimisticValue; // ivar: _optimisticValue


-(float)volumeValue;
-(id)description;
-(void)beginEqualization;
-(void)finishEqualization;
-(void)restoreDelegate;
-(void)setVolumeValue:(float)arg0 ;


@end


#endif