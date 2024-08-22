// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSGWORDBOUNDARYSUGGESTIONSEXPCONFIG_H
#define PSGWORDBOUNDARYSUGGESTIONSEXPCONFIG_H

@class TRIClient, NSString, TRIExperimentIdentifiers, TRIRolloutIdentifiers;
@protocol PSGWordBoundarySuggestionsExpConfigProtocol;

#import <Foundation/Foundation.h>


@interface PSGWordBoundarySuggestionsExpConfig : NSObject <PSGWordBoundarySuggestionsExpConfigProtocol>

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
@property (readonly, nonatomic) BOOL isMLModelEnabled; // ivar: _isMLModelEnabled
@property (readonly, nonatomic) TRIRolloutIdentifiers *rolloutIdentifiers; // ivar: _rolloutIdentifiers
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *treatmentName; // ivar: _treatmentName


-(id)initWithNamespaceName:(id)arg0 withTrialClient:(id)arg1 shouldDownloadAssets:(BOOL)arg2 ;
-(void)_fillDefaultValuesForFactors;
-(void)_setDefaultValuesForFactors;


@end


#endif