// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AFENABLEMENTCONFIGURATIONPROVIDERPARAMETERS_H
#define AFENABLEMENTCONFIGURATIONPROVIDERPARAMETERS_H

@class NSDate, NSError, NSDictionary;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "AFExperiment.h"

@interface AFEnablementConfigurationProviderParameters : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSDate *dateEndedResolvingExperiment; // ivar: _dateEndedResolvingExperiment
@property (readonly, copy, nonatomic) NSDate *dateEndedResolvingUserStatus; // ivar: _dateEndedResolvingUserStatus
@property (readonly, copy, nonatomic) NSDate *dateStartedResolvingExperiment; // ivar: _dateStartedResolvingExperiment
@property (readonly, copy, nonatomic) NSDate *dateStartedResolvingUserStatus; // ivar: _dateStartedResolvingUserStatus
@property (readonly, nonatomic) NSInteger enablementFlow; // ivar: _enablementFlow
@property (readonly, copy, nonatomic) AFExperiment *experiment; // ivar: _experiment
@property (readonly, copy, nonatomic) NSError *experimentFetchError; // ivar: _experimentFetchError
@property (readonly, nonatomic) BOOL newUser; // ivar: _newUser
@property (readonly, copy, nonatomic) NSDictionary *outputVoiceCountForRecognitionLanguage; // ivar: _outputVoiceCountForRecognitionLanguage
@property (readonly, nonatomic) BOOL recognitionLanguageWithMultipleOutputVoicesExists; // ivar: _recognitionLanguageWithMultipleOutputVoicesExists
@property (readonly, copy, nonatomic) NSError *userStatusFetchError; // ivar: _userStatusFetchError


+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_descriptionWithIndent:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithBuilder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEnablementFlow:(NSInteger)arg0 newUser:(BOOL)arg1 userStatusFetchError:(id)arg2 dateStartedResolvingUserStatus:(id)arg3 dateEndedResolvingUserStatus:(id)arg4 experiment:(id)arg5 experimentFetchError:(id)arg6 dateStartedResolvingExperiment:(id)arg7 dateEndedResolvingExperiment:(id)arg8 outputVoiceCountForRecognitionLanguage:(id)arg9 recognitionLanguageWithMultipleOutputVoicesExists:(BOOL)arg10 ;
-(id)mutatedCopyWithMutator:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif