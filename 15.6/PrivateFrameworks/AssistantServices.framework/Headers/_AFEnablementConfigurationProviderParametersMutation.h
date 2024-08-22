// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _AFENABLEMENTCONFIGURATIONPROVIDERPARAMETERSMUTATION_H
#define _AFENABLEMENTCONFIGURATIONPROVIDERPARAMETERSMUTATION_H

@class NSError, NSDate, NSDictionary, NSString;
@protocol AFEnablementConfigurationProviderParametersMutating;

#import <Foundation/Foundation.h>

#import "AFEnablementConfigurationProviderParameters.h"
#import "AFExperiment.h"

@interface _AFEnablementConfigurationProviderParametersMutation : NSObject <AFEnablementConfigurationProviderParametersMutating>

 {
    AFEnablementConfigurationProviderParameters *_baseModel;
    NSInteger _enablementFlow;
    BOOL _newUser;
    NSError *_userStatusFetchError;
    NSDate *_dateStartedResolvingUserStatus;
    NSDate *_dateEndedResolvingUserStatus;
    AFExperiment *_experiment;
    NSError *_experimentFetchError;
    NSDate *_dateStartedResolvingExperiment;
    NSDate *_dateEndedResolvingExperiment;
    NSDictionary *_outputVoiceCountForRecognitionLanguage;
    BOOL _recognitionLanguageWithMultipleOutputVoicesExists;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)generate;
-(id)init;
-(id)initWithBaseModel:(id)arg0 ;
-(void)setDateEndedResolvingExperiment:(id)arg0 ;
-(void)setDateEndedResolvingUserStatus:(id)arg0 ;
-(void)setDateStartedResolvingExperiment:(id)arg0 ;
-(void)setDateStartedResolvingUserStatus:(id)arg0 ;
-(void)setEnablementFlow:(NSInteger)arg0 ;
-(void)setExperiment:(id)arg0 ;
-(void)setExperimentFetchError:(id)arg0 ;
-(void)setNewUser:(BOOL)arg0 ;
-(void)setOutputVoiceCountForRecognitionLanguage:(id)arg0 ;
-(void)setRecognitionLanguageWithMultipleOutputVoicesExists:(BOOL)arg0 ;
-(void)setUserStatusFetchError:(id)arg0 ;


@end


#endif