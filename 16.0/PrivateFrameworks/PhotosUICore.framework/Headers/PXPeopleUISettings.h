// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXPEOPLEUISETTINGS_H
#define PXPEOPLEUISETTINGS_H



#import "PXSettings.h"

@interface PXPeopleUISettings : PXSettings

@property (nonatomic, getter=shouldAlwaysShowBootstrap) BOOL alwaysShowBootstrap; // ivar: _alwaysShowBootstrap
@property (nonatomic, getter=shouldAlwaysShowCandidateWidget) BOOL alwaysShowCandidateWidget; // ivar: _alwaysShowCandidateWidget
@property (nonatomic, getter=shouldAlwaysShowMe) BOOL alwaysShowMe; // ivar: _alwaysShowMe
@property (nonatomic) BOOL bootstrapDemoMode; // ivar: _bootstrapDemoMode
@property (nonatomic) BOOL bootstrapMockDataSource; // ivar: _bootstrapMockDataSource
@property (nonatomic, getter=shouldDebugBlurredCells) BOOL debugBlurredCells; // ivar: _debugBlurredCells
@property (nonatomic) BOOL debugFadeLayer; // ivar: _debugFadeLayer
@property (nonatomic, getter=shouldDisplayBootstrapSuggestionType) BOOL displayBootstrapSuggestionType; // ivar: _displayBootstrapSuggestionType
@property (nonatomic, getter=shouldDisplayConfirmAdditionalSuggestionType) BOOL displayConfirmAdditionalSuggestionType; // ivar: _displayConfirmAdditionalSuggestionType
@property (nonatomic, getter=shouldDisplayConfirmationPhotoDate) BOOL displayConfirmationPhotoDate; // ivar: _displayConfirmationPhotoDate
@property (nonatomic) BOOL enableNewCropManager; // ivar: _enableNewCropManager
@property (nonatomic) BOOL enableNewOneUpWidget; // ivar: _enableNewOneUpWidget
@property (nonatomic) BOOL enablePeopleHomeSortingIOS; // ivar: _enablePeopleHomeSortingIOS
@property (nonatomic) BOOL enablePeopleHomeSortingMacOS; // ivar: _enablePeopleHomeSortingMacOS
@property (nonatomic) BOOL evictsCacheWhenBackgrounded; // ivar: _evictsCacheWhenBackgrounded
@property (nonatomic, getter=shouldShowContactSuggestions) BOOL showContactSuggestions; // ivar: _showContactSuggestions
@property (nonatomic) BOOL showManageTagsTagType; // ivar: _showManageTagsTagType
@property (nonatomic, getter=shouldShowMaybeContact) BOOL showMaybeContact; // ivar: _showMaybeContact
@property (nonatomic) BOOL showUUIDIfNoName; // ivar: _showUUIDIfNoName


+(id)settingsControllerModule;
+(id)sharedInstance;
-(id)parentSettings;
-(void)setDefaultValues;


@end


#endif