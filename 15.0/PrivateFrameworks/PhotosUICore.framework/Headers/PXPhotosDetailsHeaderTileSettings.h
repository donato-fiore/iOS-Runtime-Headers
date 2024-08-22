// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXPHOTOSDETAILSHEADERTILESETTINGS_H
#define PXPHOTOSDETAILSHEADERTILESETTINGS_H



#import "PXSettings.h"

@interface PXPhotosDetailsHeaderTileSettings : PXSettings

@property (nonatomic) CGFloat aspectRatio; // ivar: _aspectRatio
@property (nonatomic) BOOL forceMiroCompelling; // ivar: _forceMiroCompelling
@property (nonatomic) CGFloat maximumAbsoluteHeight; // ivar: _maximumAbsoluteHeight
@property (nonatomic) CGFloat maximumHeightRelativeToScreenHeight; // ivar: _maximumHeightRelativeToScreenHeight
@property (nonatomic) BOOL showAlways; // ivar: _showAlways
@property (nonatomic) BOOL showSlideshow; // ivar: _showSlideshow


+(id)settingsControllerModule;
+(id)sharedInstance;
-(id)parentSettings;
-(void)setDefaultValues;


@end


#endif