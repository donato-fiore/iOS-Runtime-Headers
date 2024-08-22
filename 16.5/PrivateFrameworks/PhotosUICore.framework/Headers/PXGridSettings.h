// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXGRIDSETTINGS_H
#define PXGRIDSETTINGS_H



#import "PXSettings.h"

@interface PXGridSettings : PXSettings

@property (nonatomic) BOOL disableSelectionOverlayView; // ivar: _disableSelectionOverlayView
@property (nonatomic) BOOL enableAutomaticTransitionToSelectMode; // ivar: _enableAutomaticTransitionToSelectMode
@property (nonatomic) BOOL simulateLongTitles; // ivar: _simulateLongTitles
@property (nonatomic) NSInteger simulatedNumberOfLocations; // ivar: _simulatedNumberOfLocations
@property (nonatomic) NSInteger weightingScheme; // ivar: _weightingScheme


+(id)settingsControllerModule;
+(id)sharedInstance;
-(id)parentSettings;
-(void)setDefaultValues;


@end


#endif