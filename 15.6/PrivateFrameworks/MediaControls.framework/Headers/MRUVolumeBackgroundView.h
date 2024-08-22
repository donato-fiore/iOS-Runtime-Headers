// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MRUVOLUMEBACKGROUNDVIEW_H
#define MRUVOLUMEBACKGROUNDVIEW_H

@class UIView;


#import "MRUVolumeNowPlayingView.h"
#import "MRUOutputDeviceAssetView.h"
#import "MediaControlsBluetoothListeningModeButton.h"
#import "MediaControlsExpandableButton.h"
#import "MRUVisualStylingProvider.h"

@interface MRUVolumeBackgroundView : UIView

@property (readonly, nonatomic) BOOL hasExpandedButtons;
@property (retain, nonatomic) MRUVolumeNowPlayingView *nowPlayingView; // ivar: _nowPlayingView
@property (retain, nonatomic) MRUOutputDeviceAssetView *primaryAssetView; // ivar: _primaryAssetView
@property (retain, nonatomic) MediaControlsBluetoothListeningModeButton *primaryListeningModeButton; // ivar: _primaryListeningModeButton
@property (retain, nonatomic) MRUOutputDeviceAssetView *secondaryAssetView; // ivar: _secondaryAssetView
@property (retain, nonatomic) MediaControlsBluetoothListeningModeButton *secondaryListeningModeButton; // ivar: _secondaryListeningModeButton
@property (nonatomic) BOOL showNowPlayingView; // ivar: _showNowPlayingView
@property (nonatomic) BOOL showPrimaryListeningModeButton; // ivar: _showPrimaryListeningModeButton
@property (nonatomic) BOOL showSecondaryAssetView; // ivar: _showSecondaryAssetView
@property (nonatomic) BOOL showSecondaryListeningModeButton; // ivar: _showSecondaryListeningModeButton
@property (nonatomic) BOOL showSpatialAudioModeButton; // ivar: _showSpatialAudioModeButton
@property (retain, nonatomic) MediaControlsExpandableButton *spatialAudioModeButton; // ivar: _spatialAudioModeButton
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider; // ivar: _stylingProvider


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)collapseExpandableButtons;
-(void)expandButton:(id)arg0 ;
-(void)layoutSubviews;
-(void)layoutSubviewsHorizontal;
-(void)layoutSubviewsVertical;
-(void)updateVisibility;


@end


#endif