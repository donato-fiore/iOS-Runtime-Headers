// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRUHARDWAREVOLUMEDATASOURCE_H
#define MRUHARDWAREVOLUMEDATASOURCE_H

@class NSString;
@protocol SBSHardwareButtonEventConsuming, MPVolumeControllerDataSource;

#import <Foundation/Foundation.h>


@interface MRUHardwareVolumeDataSource : NSObject <SBSHardwareButtonEventConsuming>



@property (nonatomic) BOOL debounceVolumeRepeat; // ivar: _debounceVolumeRepeat
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat pendingVolumeChange; // ivar: _pendingVolumeChange
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<MPVolumeControllerDataSource> *volumeDataSource; // ivar: _volumeDataSource


-(CGFloat)calculateButtonRepeatDelay;
-(id)initWithVolumeDataSource:(id)arg0 ;
-(void)cancelVolumeEvent;
-(void)changeVolumeBy:(CGFloat)arg0 ;
-(void)consumeSinglePressDownForButtonKind:(NSInteger)arg0 ;
-(void)consumeSinglePressUpForButtonKind:(NSInteger)arg0 ;
-(void)decreaseVolume;
-(void)handleDecreaseDown;
-(void)handleIncreaseDown;
-(void)increaseVolume;


@end


#endif