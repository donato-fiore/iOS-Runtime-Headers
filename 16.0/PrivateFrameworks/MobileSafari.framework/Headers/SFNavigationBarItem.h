// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFNAVIGATIONBARITEM_H
#define SFNAVIGATIONBARITEM_H

@class NSHashTable, NSString, WBSFluidProgressController;
@protocol WBSFluidProgressStateSource;

#import <Foundation/Foundation.h>

#import "SFWebExtensionButtonConfiguration.h"
#import "_SFFluidProgressView.h"

@interface SFNavigationBarItem : NSObject {
    BOOL _temporarilySuppressText;
    NSHashTable *_observers;
    BOOL _showsReaderAvailabilityTextWhenReplacingDomain;
    BOOL _showsTranslationAvailabilityTextWhenReplacingDomain;
}


@property (copy, nonatomic) NSString *customPlaceholderText; // ivar: _customPlaceholderText
@property (readonly, nonatomic) BOOL didFinishShowingReaderAvailabilityLabel; // ivar: _didFinishShowingReaderAvailabilityLabel
@property (readonly, nonatomic) BOOL didFinishShowingTranslationAvailabilityLabel; // ivar: _didFinishShowingTranslationAvailabilityLabel
@property (retain, nonatomic) SFWebExtensionButtonConfiguration *extensionButtonConfiguration; // ivar: _extensionButtonConfiguration
@property (retain, nonatomic) NSString *extensionsAvailabilityText; // ivar: _extensionsAvailabilityText
@property (retain, nonatomic) WBSFluidProgressController *fluidProgressController; // ivar: _fluidProgressController
@property (weak) NSObject<WBSFluidProgressStateSource> *fluidProgressStateSource; // ivar: _fluidProgressStateSource
@property (readonly, nonatomic) BOOL hasFocusedSensitiveFieldOnCurrentPage; // ivar: _hasFocusedSensitiveFieldOnCurrentPage
@property (nonatomic) NSInteger lockdownModeAnnotation; // ivar: _lockdownModeAnnotation
@property (nonatomic) NSUInteger mediaStateIcon; // ivar: _mediaStateIcon
@property (readonly, nonatomic) BOOL menuButtonSelected;
@property (nonatomic) BOOL needsExtensionBadge; // ivar: _needsExtensionBadge
@property (nonatomic) BOOL overrideBarStyleForSecurityWarning; // ivar: _overrideBarStyleForSecurityWarning
@property (retain, nonatomic) _SFFluidProgressView *progressView; // ivar: _progressView
@property (nonatomic) BOOL readerButtonSelected; // ivar: _readerButtonSelected
@property (readonly, nonatomic) NSInteger securityAnnotation; // ivar: _securityAnnotation
@property (readonly, nonatomic) BOOL showsExtensionsAvailabilityText;
@property (nonatomic) BOOL showsLockIcon; // ivar: _showsLockIcon
@property (nonatomic) BOOL showsPageFormatButton; // ivar: _showsPageFormatButton
@property (nonatomic) BOOL showsReaderButton; // ivar: _showsReaderButton
@property (nonatomic) BOOL showsSearchIndicator; // ivar: _showsSearchIndicator
@property (readonly, nonatomic) BOOL showsSecurityAnnotation;
@property (nonatomic) BOOL showsStopReloadButtons; // ivar: _showsStopReloadButtons
@property (nonatomic) BOOL showsTranslationButton; // ivar: _showsTranslationButton
@property (nonatomic) BOOL showsTranslationIcon; // ivar: _showsTranslationIcon
@property (nonatomic) BOOL showsVoiceSearchButton; // ivar: _showsVoiceSearchButton
@property (readonly, nonatomic) NSUInteger startIndexOfTextInExpandedText; // ivar: _startIndexOfTextInExpandedText
@property (nonatomic) BOOL stopReloadButtonShowsStop; // ivar: _stopReloadButtonShowsStop
@property (readonly, nonatomic) NSString *text; // ivar: _text
@property (readonly, nonatomic) NSString *textWhenExpanded; // ivar: _textWhenExpanded


-(BOOL)_showsAvailabilityTextForType:(NSInteger)arg0 style:(NSInteger)arg1 ;
-(BOOL)showsReaderAvailabilityTextForStyle:(NSInteger)arg0 ;
-(BOOL)showsTranslationAvailabilityTextForStyle:(NSInteger)arg0 ;
-(id)init;
-(void)addObserver:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)setDidFinishShowingAvailabilityLabel:(BOOL)arg0 ofType:(NSInteger)arg1 ;
-(void)setTemporarilySuppressText:(BOOL)arg0 ;


@end


#endif