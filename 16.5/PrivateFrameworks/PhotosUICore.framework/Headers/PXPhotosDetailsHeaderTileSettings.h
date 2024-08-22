// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXPHOTOSDETAILSHEADERTILESETTINGS_H
#define PXPHOTOSDETAILSHEADERTILESETTINGS_H



#import "PXSettings.h"

@interface PXPhotosDetailsHeaderTileSettings : PXSettings

@property (nonatomic) CGFloat aspectRatio; // ivar: _aspectRatio
@property (nonatomic) CGFloat maximumAbsoluteHeight; // ivar: _maximumAbsoluteHeight
@property (nonatomic) CGFloat maximumHeightRelativeToScreenHeight; // ivar: _maximumHeightRelativeToScreenHeight
@property (nonatomic) BOOL showAlways; // ivar: _showAlways


+(id)settingsControllerModule;
+(id)sharedInstance;
-(id)parentSettings;
-(void)setDefaultValues;


@end


#endif