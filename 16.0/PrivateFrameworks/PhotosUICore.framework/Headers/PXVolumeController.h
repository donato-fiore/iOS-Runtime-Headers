// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXVOLUMECONTROLLER_H
#define PXVOLUMECONTROLLER_H

@protocol PXMutableVolumeController;


#import "PXObservable.h"

@interface PXVolumeController : PXObservable <PXMutableVolumeController>



@property (readonly, nonatomic) BOOL isInSilentMode; // ivar: _isInSilentMode


-(id)init;
-(id)initWithIsInSilentMode:(BOOL)arg0 ;
-(void)decreaseVolume;
-(void)increaseVolume;
-(void)performChanges:(id)arg0 ;


@end


#endif