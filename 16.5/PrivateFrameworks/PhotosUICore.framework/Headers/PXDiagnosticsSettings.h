// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXDIAGNOSTICSSETTINGS_H
#define PXDIAGNOSTICSSETTINGS_H



#import "PXSettings.h"

@interface PXDiagnosticsSettings : PXSettings

@property (nonatomic) BOOL enableCompleteMyMomentService; // ivar: _enableCompleteMyMomentService
@property (nonatomic) BOOL enableContextualGesture; // ivar: _enableContextualGesture
@property (nonatomic) BOOL enableDebugDictionaryService; // ivar: _enableDebugDictionaryService
@property (nonatomic) BOOL enableGenericService; // ivar: _enableGenericService
@property (nonatomic) BOOL enableGraphService; // ivar: _enableGraphService
@property (nonatomic) BOOL enableInternalSettingsService; // ivar: _enableInternalSettingsService
@property (nonatomic) BOOL enableScrollService; // ivar: _enableScrollService
@property (nonatomic) BOOL enableTitleFontService; // ivar: _enableTitleFontService
@property (nonatomic) NSInteger scrollIterations; // ivar: _scrollIterations
@property (nonatomic) CGFloat scrollSpeed; // ivar: _scrollSpeed


+(id)settingsControllerModule;
+(id)sharedInstance;
-(id)parentSettings;
-(void)setDefaultValues;


@end


#endif