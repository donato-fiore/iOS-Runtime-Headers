// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXCURSORINTERACTIONSETTINGS_H
#define PXCURSORINTERACTIONSETTINGS_H



#import "PXSettings.h"

@interface PXCursorInteractionSettings : PXSettings

@property (nonatomic) CGFloat allPhotosAspectFillPadding; // ivar: _allPhotosAspectFillPadding
@property (nonatomic) CGFloat allPhotosAspectFitPadding; // ivar: _allPhotosAspectFitPadding
@property (nonatomic) CGFloat animationDuration; // ivar: _animationDuration
@property (nonatomic) NSInteger aspectFillAnimationStyle; // ivar: _aspectFillAnimationStyle
@property (nonatomic) NSInteger aspectFitAnimationStyle; // ivar: _aspectFitAnimationStyle
@property (nonatomic) CGFloat dampingRatio; // ivar: _dampingRatio
@property (nonatomic) CGFloat daysPadding; // ivar: _daysPadding
@property (nonatomic) BOOL enableCardLift; // ivar: _enableCardLift
@property (nonatomic) BOOL enableCardShadows; // ivar: _enableCardShadows
@property (nonatomic) BOOL enableCuratedLibraryEffects; // ivar: _enableCuratedLibraryEffects
@property (nonatomic) BOOL enableDaysEffect; // ivar: _enableDaysEffect
@property (nonatomic) BOOL enableDetailsEffect; // ivar: _enableDetailsEffect
@property (nonatomic) BOOL enableGridLift; // ivar: _enableGridLift
@property (nonatomic) BOOL enableGridShadows; // ivar: _enableGridShadows
@property (nonatomic) CGFloat monthsPadding; // ivar: _monthsPadding
@property (nonatomic) CGFloat yearsPadding; // ivar: _yearsPadding


+(id)settingsControllerModule;
+(id)sharedInstance;
-(CGFloat)paddingForZoomLevel:(NSInteger)arg0 ;
-(NSInteger)cardInteractionOptions;
-(NSInteger)gridInteractionOptions;
-(NSInteger)interactionOptionsForZoomLevel:(NSInteger)arg0 isAllPhotosAspectFit:(BOOL)arg1 ;
-(id)parentSettings;
-(void)setDefaultValues;


@end


#endif