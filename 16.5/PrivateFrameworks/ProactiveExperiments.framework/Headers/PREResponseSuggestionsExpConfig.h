// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRERESPONSESUGGESTIONSEXPCONFIG_H
#define PRERESPONSESUGGESTIONSEXPCONFIG_H

@class NSString, TRIExperimentIdentifiers, TRIRolloutIdentifiers;
@protocol PREResponsesTrialProtocol;

#import <Foundation/Foundation.h>


@interface PREResponseSuggestionsExpConfig : NSObject <PREResponsesTrialProtocol>

 {
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
@property (readonly, nonatomic) BOOL isMLModelEnabled; // ivar: _isMLModelEnabled
@property (readonly, nonatomic) TRIRolloutIdentifiers *rolloutIdentifiers; // ivar: _rolloutIdentifiers
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *treatmentName; // ivar: _treatmentName
@property (readonly, nonatomic) NSString *vocabFilePath; // ivar: _vocabFilePath


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToConfig:(id)arg0 ;
-(id)init;
-(id)initWithNamespaceName:(id)arg0 withTrialClient:(id)arg1 shouldDownloadAssets:(BOOL)arg2 ;
-(void)_fillDefaultValueForFactors;
-(void)_setDefaultValuesForFactors;


@end


#endif