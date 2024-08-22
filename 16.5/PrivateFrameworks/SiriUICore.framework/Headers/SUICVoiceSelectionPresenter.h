// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUICVOICESELECTIONPRESENTER_H
#define SUICVOICESELECTIONPRESENTER_H

@class AFVoiceInfo, NSString;
@protocol SUICVoiceSelectionDataProviderObserving, SUICVoiceSelectionEventHandling, SUICVoiceSelectionViewModelProviding, SUICVoicePreviewingDelegate, SUICVoiceSelectionDataManaging, SUICVoiceSelectionPresenterDelegate, SUICVoiceSelectionDisplaying, SUICVoicePreviewing;

#import <Foundation/Foundation.h>

#import "SUICVoiceSelectionVoiceCollection.h"
#import "SUICVoiceSelectionViewModel.h"

@interface SUICVoiceSelectionPresenter : NSObject <SUICVoiceSelectionDataProviderObserving, SUICVoiceSelectionEventHandling, SUICVoiceSelectionViewModelProviding, SUICVoicePreviewingDelegate>

 {
    AFVoiceInfo *_voiceBeingPreviewed;
    BOOL _reverseVoiceOrder;
}


@property (readonly, nonatomic) NSObject<SUICVoiceSelectionDataManaging> *dataManager; // ivar: _dataManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<SUICVoiceSelectionPresenterDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<SUICVoiceSelectionDisplaying> *view; // ivar: _view
@property (readonly, copy, nonatomic) SUICVoiceSelectionVoiceCollection *voiceCollection; // ivar: _voiceCollection
@property (readonly, nonatomic) NSObject<SUICVoicePreviewing> *voicePreviewer; // ivar: _voicePreviewer
@property (readonly, copy, nonatomic) SUICVoiceSelectionViewModel *voiceSelectionViewModel;


-(id)_localizedDisplayNameForLanguageCode:(id)arg0 ;
-(id)initWithDataManaging:(id)arg0 view:(id)arg1 delegate:(id)arg2 voicePreviewing:(id)arg3 recognitionLanguage:(id)arg4 ;
-(void)_determineVoiceOrdering;
-(void)_logVoicePreview:(id)arg0 ;
-(void)_previewVoice:(id)arg0 completion:(id)arg1 ;
-(void)_processVoiceSelection:(id)arg0 completion:(id)arg1 ;
-(void)selectRandomVoiceWithCompletion:(id)arg0 ;
-(void)voicePreviewerAudioOutputDidChangePowerLevel:(float)arg0 ;
-(void)voiceSelectionDataProviderVoiceCollectionDidChange:(id)arg0 ;
-(void)voiceSelectionView:(id)arg0 receivedRequestToSelectLanguage:(id)arg1 ;
-(void)voiceSelectionView:(id)arg0 receivedRequestToSelectVoice:(id)arg1 ;


@end


#endif