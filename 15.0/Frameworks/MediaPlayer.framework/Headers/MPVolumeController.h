// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPVOLUMECONTROLLER_H
#define MPVOLUMECONTROLLER_H

@class NSString;
@protocol MPVolumeControllerDataSourceDelegate, MPVolumeControllerDataSource, MPVolumeControllerDelegate;

#import <Foundation/Foundation.h>


@interface MPVolumeController : NSObject <MPVolumeControllerDataSourceDelegate>

 {
    int _volumeChangeCoalescingCount;
}


@property (readonly, nonatomic) float EUVolumeLimit;
@property (retain, nonatomic) NSObject<MPVolumeControllerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MPVolumeControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isMuted) BOOL muted;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *volumeAudioCategory;
@property (readonly, nonatomic) unsigned int volumeCapabilities; // ivar: _volumeCapabilities
@property (readonly, nonatomic, getter=isVolumeControlAvailable) BOOL volumeControlAvailable;
@property (readonly, copy, nonatomic) NSString *volumeControlLabel;
@property (nonatomic) float volumeValue;
@property (readonly, nonatomic) BOOL volumeWarningEnabled;
@property (readonly, nonatomic) NSInteger volumeWarningState;


+(id)descriptionForWarningState:(NSInteger)arg0 ;
-(BOOL)muted;
-(id)init;
-(id)initWithDataSource:(id)arg0 ;
-(void)_updateVolumeControlAvailability;
-(void)adjustVolumeValue:(float)arg0 ;
-(void)beginDecreasingRelativeVolume;
-(void)beginIncreasingRelativeVolume;
-(void)endDecreasingRelativeVolume;
-(void)endIncreasingRelativeVolume;
-(void)getVolumeValueWithCompletion:(id)arg0 ;
-(void)setVolume:(float)arg0 withNoticationDelay:(float)arg1 ;
-(void)updateVolumeValue;
-(void)updateVolumeWarningState;
-(void)volumeControllerDataSource:(id)arg0 didChangeEUVolumeLimit:(float)arg1 ;
-(void)volumeControllerDataSource:(id)arg0 didChangeEUVolumeLimitEnforced:(BOOL)arg1 ;
-(void)volumeControllerDataSource:(id)arg0 didChangeMuted:(BOOL)arg1 ;
-(void)volumeControllerDataSource:(id)arg0 didChangeVolume:(float)arg1 ;
-(void)volumeControllerDataSource:(id)arg0 didChangeVolumeAudioCategory:(id)arg1 ;
-(void)volumeControllerDataSource:(id)arg0 didChangeVolumeCapabilities:(unsigned int)arg1 ;
-(void)volumeControllerDataSource:(id)arg0 didChangeVolumeControlAvailability:(BOOL)arg1 ;
-(void)volumeControllerDataSource:(id)arg0 didChangeVolumeLabel:(id)arg1 ;
-(void)volumeControllerDataSource:(id)arg0 didChangeVolumeWarning:(NSInteger)arg1 ;


@end


#endif