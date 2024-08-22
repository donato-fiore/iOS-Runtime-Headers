// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUICVOICESELECTIONDEFAULTDATAMANAGER_H
#define SUICVOICESELECTIONDEFAULTDATAMANAGER_H

@class NSDictionary, NSString;
@protocol SUICVoiceSelectionDataManaging, SUICVoiceSelectionDataProviderObserving;

#import <Foundation/Foundation.h>

#import "SUICVoiceSelectionVoiceCollection.h"

@interface SUICVoiceSelectionDefaultDataManager : NSObject <SUICVoiceSelectionDataManaging>



@property (copy, nonatomic) NSDictionary *currentVoiceSelectionForOutputLanguage; // ivar: _currentVoiceSelectionForOutputLanguage
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *outputLanguage; // ivar: _outputLanguage
@property (copy, nonatomic) NSString *recognitionLanguageCode; // ivar: _recognitionLanguageCode
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<SUICVoiceSelectionDataProviderObserving> *voiceSelectionDataProviderObserver; // ivar: _voiceSelectionDataProviderObserver
@property (readonly, copy, nonatomic) SUICVoiceSelectionVoiceCollection *voiceSelectionVoiceCollection; // ivar: _voiceSelectionVoiceCollection


-(BOOL)isVoiceSelected:(id)arg0 ;
-(id)dialectLanguageCodeForLanguage:(id)arg0 ;
-(id)init;
-(id)voicesForRecognitionLanguageCode:(id)arg0 outputLanguageCode:(id)arg1 ;
-(void)changeSiriDialectLanguageToLanguageIdentifiedByLanguageCode:(id)arg0 completion:(id)arg1 ;
-(void)changeSiriVoiceToVoice:(id)arg0 completion:(id)arg1 ;
-(void)regenerateVoiceCollectionForRecognitionLanguageCode:(id)arg0 outputLanguageCode:(id)arg1 ;


@end


#endif