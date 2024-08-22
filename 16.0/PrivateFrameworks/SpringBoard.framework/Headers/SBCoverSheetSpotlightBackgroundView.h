// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBCOVERSHEETSPOTLIGHTBACKGROUNDVIEW_H
#define SBCOVERSHEETSPOTLIGHTBACKGROUNDVIEW_H

@class UIView, MTMaterialView;
@protocol SBSpotlightBackgroundWeighting;



@interface SBCoverSheetSpotlightBackgroundView : UIView <SBSpotlightBackgroundWeighting>



@property (readonly, nonatomic) MTMaterialView *searchBlurBackdropView; // ivar: _searchBlurBackdropView
@property (readonly, nonatomic) MTMaterialView *searchLumSatBackdropView; // ivar: _searchLumSatBackdropView
@property (nonatomic) CGFloat spotlightBackgroundWeighting;


-(id)init;


@end


#endif