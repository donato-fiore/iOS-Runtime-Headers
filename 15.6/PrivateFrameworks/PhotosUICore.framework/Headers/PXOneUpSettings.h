// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXONEUPSETTINGS_H
#define PXONEUPSETTINGS_H



#import "PXSettings.h"

@interface PXOneUpSettings : PXSettings

@property (nonatomic) BOOL hideFloatingInfoPanel; // ivar: _hideFloatingInfoPanel
@property (nonatomic) CGFloat maximumWhitespaceWidthForInitialZoomToFill; // ivar: _maximumWhitespaceWidthForInitialZoomToFill


+(id)settingsControllerModule;
+(id)sharedInstance;
-(BOOL)shouldInitiallyZoomContentWithSize:(struct CGSize )arg0 toFillViewWithSize:(struct CGSize )arg1 ;
-(CGFloat)zoomFactorForContentWithSize:(struct CGSize )arg0 toFillViewWithSize:(struct CGSize )arg1 ;
-(id)parentSettings;
-(void)setDefaultValues;


@end


#endif