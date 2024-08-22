// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPVOLUMEGROUPSLIDERCOORDINATOR_H
#define MPVOLUMEGROUPSLIDERCOORDINATOR_H

@class NSArray, NSMutableSet, NSMapTable;

#import <Foundation/Foundation.h>

#import "MPVolumeSlider.h"

@interface MPVolumeGroupSliderCoordinator : NSObject {
    NSArray *_allSliders;
    NSMutableSet *_individualVolumeSliders;
    MPVolumeSlider *_trackingSlider;
    NSMapTable *_optimisticValues;
    NSMapTable *_optimisticScales;
    int _inFlightDisableOptimisticStateRequests;
    BOOL _shouldOverrideTracking;
}


@property (readonly, copy, nonatomic) NSArray *individualVolumeSliders;
@property (readonly, nonatomic) MPVolumeSlider *masterVolumeSlider; // ivar: _masterVolumeSlider
@property (readonly, nonatomic) BOOL synced; // ivar: _synced


-(float)_maxOptimisticValue;
-(id)_findExistingVolumeSlider:(id)arg0 ;
-(id)initWithMasterVolumeSlider:(id)arg0 individualVolumeSliders:(id)arg1 ;
-(void)_addControlEventsForVolumeSlider:(id)arg0 ;
-(void)_addControlEventsForVolumeSliders:(id)arg0 ;
-(void)_removeControlEventsForVolumeSlider:(id)arg0 ;
-(void)_removeControlEventsForVolumeSliders:(id)arg0 ;
-(void)_resetOptimisticScales;
-(void)_setControlEventsForVolumeSlider:(id)arg0 add:(BOOL)arg1 ;
-(void)_updateOptimisticValueCache;
-(void)addIndividualVolumeSlider:(id)arg0 ;
-(void)removeAllIndividualVolumeSliders;
-(void)removeIndividualVolumeSlider:(id)arg0 ;
-(void)syncSliders:(BOOL)arg0 ;
-(void)volumeSliderDidEndTracking:(id)arg0 ;
-(void)volumeSliderValueChanged:(id)arg0 ;


@end


#endif