// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PSGWORDBOUNDARYSUGGESTIONSEXPCONFIGDEFAULTS_H
#define PSGWORDBOUNDARYSUGGESTIONSEXPCONFIGDEFAULTS_H

@class NSString, TRIExperimentIdentifiers, TRIRolloutIdentifiers;
@protocol PSGWordBoundarySuggestionsExpConfigProtocol;

#import <Foundation/Foundation.h>


@interface PSGWordBoundarySuggestionsExpConfigDefaults : NSObject <PSGWordBoundarySuggestionsExpConfigProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *espressoBinFilePath; // ivar: _espressoBinFilePath
@property (readonly, nonatomic) TRIExperimentIdentifiers *experimentIdentifiers; // ivar: _experimentIdentifiers
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *inferenceModelConfigPath; // ivar: _inferenceModelConfigPath
@property (readonly, nonatomic) BOOL isMLModelEnabled; // ivar: _isMLModelEnabled
@property (readonly, nonatomic) TRIRolloutIdentifiers *rolloutIdentifiers; // ivar: _rolloutIdentifiers
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *treatmentName; // ivar: _treatmentName


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToConfig:(id)arg0 ;
-(id)init;


@end


#endif