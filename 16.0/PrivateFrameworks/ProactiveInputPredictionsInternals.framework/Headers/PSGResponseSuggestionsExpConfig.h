// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSGRESPONSESUGGESTIONSEXPCONFIG_H
#define PSGRESPONSESUGGESTIONSEXPCONFIG_H

@class TRIClient, NSString, TRIExperimentIdentifiers, TRIRolloutIdentifiers;
@protocol PSGResponseSuggestionsExpConfigProtocol;

#import <Foundation/Foundation.h>


@interface PSGResponseSuggestionsExpConfig : NSObject <PSGResponseSuggestionsExpConfigProtocol>

 {
    TRIClient *_trialClient;
    NSString *_namespaceName;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *espressoBinFilePath; // ivar: _espressoBinFilePath
@property (readonly, nonatomic) TRIExperimentIdentifiers *experimentIdentifiers; // ivar: _experimentIdentifiers
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *inferenceModelConfigPath; // ivar: _inferenceModelConfigPath
@property (readonly, nonatomic) NSString *inferenceModelDescription; // ivar: _inferenceModelDescription
@property (readonly, nonatomic) NSString *inferenceModelFilePath; // ivar: _inferenceModelFilePath
@property (readonly, nonatomic) BOOL isMLModelDownloading; // ivar: _isMLModelDownloading
@property (readonly, nonatomic) BOOL isMLModelEnabled; // ivar: _isMLModelEnabled
@property (readonly, nonatomic) NSString *language; // ivar: _language
@property (readonly, nonatomic) TRIRolloutIdentifiers *rolloutIdentifiers; // ivar: _rolloutIdentifiers
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *treatmentName; // ivar: _treatmentName
@property (readonly, nonatomic) NSString *vocabFilePath; // ivar: _vocabFilePath


-(id)init;
-(id)initWithNamespaceName:(id)arg0 withLanguage:(id)arg1 withTrialClient:(id)arg2 shouldDownloadAssets:(BOOL)arg3 ;
-(void)_fillDefaultValuesForFactors;
-(void)_setDefaultValuesForFactors;


@end


#endif