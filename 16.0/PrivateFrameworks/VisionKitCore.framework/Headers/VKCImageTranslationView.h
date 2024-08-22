// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VKCIMAGETRANSLATIONVIEW_H
#define VKCIMAGETRANSLATIONVIEW_H

@class UIView, LTUIVisualTranslationView;


#import "VKCImageBaseOverlayView.h"
#import "VKCVisualSearchResult.h"

@interface VKCImageTranslationView : VKCImageBaseOverlayView

@property (weak, nonatomic) UIView *presentationAnchorView; // ivar: _presentationAnchorView
@property BOOL translationNeedsUpdate; // ivar: _translationNeedsUpdate
@property (retain, nonatomic) VKCVisualSearchResult *visualSearchResult; // ivar: _visualSearchResult
@property (retain, nonatomic) LTUIVisualTranslationView *visualTranslationView; // ivar: _visualTranslationView


-(id)init;
-(id)recognizedLines;
-(void)checkForTranslationResultsWithCompletion:(id)arg0 ;
-(void)hideTranslationOverlay;
-(void)setRecognitionResult:(id)arg0 ;
-(void)showTranslationOverlay;


@end


#endif