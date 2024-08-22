// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUMEDIASELECTIONITEMMANAGER_H
#define HUMEDIASELECTIONITEMMANAGER_H

@class HFItemManager, HFMediaPlaybackActionBuilder, HFActionSetBuilder, SKCloudServiceController, NSArray, HFPlaybackArchive, NSNumber, HFStaticItem;


#import "HUMediaItem.h"

@interface HUMediaSelectionItemManager : HFItemManager

@property (retain, nonatomic) HFMediaPlaybackActionBuilder *actionBuilder; // ivar: _actionBuilder
@property (readonly, nonatomic) HFActionSetBuilder *actionSetBuilder; // ivar: _actionSetBuilder
@property (retain, nonatomic) HUMediaItem *chosenMediaItem; // ivar: _chosenMediaItem
@property (retain, nonatomic) SKCloudServiceController *cloudServiceController; // ivar: _cloudServiceController
@property (retain, nonatomic) NSArray *customVolumeItems; // ivar: _customVolumeItems
@property (retain, nonatomic) HFPlaybackArchive *lastSelectedArchive; // ivar: _lastSelectedArchive
@property (retain, nonatomic) NSNumber *lastSelectedVolume; // ivar: _lastSelectedVolume
@property (retain, nonatomic) HFStaticItem *mediaPickerItem; // ivar: _mediaPickerItem
@property (retain, nonatomic) NSArray *mediaPickerRowItems; // ivar: _mediaPickerRowItems
@property (retain, nonatomic) HFPlaybackArchive *pickedPlaybackArchive;
@property (retain, nonatomic) NSArray *playbackOptionsItems; // ivar: _playbackOptionsItems
@property (retain, nonatomic) HFStaticItem *playbackStateAdjustVolumeOnlyItem; // ivar: _playbackStateAdjustVolumeOnlyItem
@property (retain, nonatomic) NSArray *playbackStateItems; // ivar: _playbackStateItems
@property (retain, nonatomic) HFStaticItem *playbackStatePauseItem; // ivar: _playbackStatePauseItem
@property (retain, nonatomic) HFStaticItem *playbackStatePlayItem; // ivar: _playbackStatePlayItem
@property (retain, nonatomic) HFStaticItem *playbackStateResumeItem; // ivar: _playbackStateResumeItem
@property (retain, nonatomic) HFStaticItem *repeatItem; // ivar: _repeatItem
@property (retain, nonatomic) HFStaticItem *selectedPlaybackStateItem; // ivar: _selectedPlaybackStateItem
@property (retain, nonatomic) HFStaticItem *selectedVolumeItem; // ivar: _selectedVolumeItem
@property (retain, nonatomic) HFStaticItem *shuffleItem; // ivar: _shuffleItem
@property (retain, nonatomic) HFStaticItem *useCurrentVolumeItem; // ivar: _useCurrentVolumeItem
@property (retain, nonatomic) HFStaticItem *useCustomVolumeItem; // ivar: _useCustomVolumeItem
@property (retain, nonatomic) HFStaticItem *volumeSliderItem; // ivar: _volumeSliderItem
@property (retain, nonatomic) NSArray *volumeSliderItems; // ivar: _volumeSliderItems


-(id)_buildItemProvidersForHome:(id)arg0 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)_itemsToHideInSet:(id)arg0 ;
-(id)_volumeForMediaAction;
-(id)initWithDelegate:(id)arg0 mediaPlaybackActionBuilder:(id)arg1 ;
-(id)initWithDelegate:(id)arg0 sourceItem:(id)arg1 ;
-(void)mediaPlaybackOptionsItem:(id)arg0 switchedOn:(BOOL)arg1 ;
-(void)mediaVolumeValueChanged:(CGFloat)arg0 ;


@end


#endif