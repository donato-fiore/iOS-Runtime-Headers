// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MRUVOLUMEVIEW_H
#define MRUVOLUMEVIEW_H

@class UIView, NSString, NSArray;
@protocol CCUIGroupRendering;


#import "MediaControlsVolumeSliderView.h"

@interface MRUVolumeView : UIView <CCUIGroupRendering>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isExpanded) BOOL expanded; // ivar: _expanded
@property (readonly, nonatomic, getter=isGroupRenderingRequired) BOOL groupRenderingRequired;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL primaryInteractionEnabled; // ivar: _primaryInteractionEnabled
@property (readonly, nonatomic) MediaControlsVolumeSliderView *primarySlider; // ivar: _primarySlider
@property (readonly, nonatomic) NSArray *punchOutRenderingViews;
@property (readonly, nonatomic) NSArray *punchOutRootLayers;
@property (nonatomic) BOOL secondaryInteractionEnabled; // ivar: _secondaryInteractionEnabled
@property (readonly, nonatomic) MediaControlsVolumeSliderView *secondarySlider; // ivar: _secondarySlider
@property (nonatomic) BOOL showSecondarySlider; // ivar: _showSecondarySlider
@property (readonly) Class superclass;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)updateVisibility;


@end


#endif