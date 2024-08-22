// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AFEXPERIMENTCONTEXT_H
#define AFEXPERIMENTCONTEXT_H

@class AFExperiment<AFExperimentForSiriVOXSounds>, AFExperiment<AFExperimentForSiriVOXTapToSiriBehavior>, NSDictionary, AFExperiment<AFInvocationFeedbackExperiment>;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AFExperimentContext : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) AFExperiment<AFExperimentForSiriVOXSounds> *experimentForSiriVOXSounds;
@property (readonly, nonatomic) AFExperiment<AFExperimentForSiriVOXTapToSiriBehavior> *experimentForSiriVOXTapToSiriBehavior;
@property (readonly, copy, nonatomic) NSDictionary *experimentsByConfigurationIdentifier; // ivar: _experimentsByConfigurationIdentifier
@property (readonly, nonatomic) AFExperiment<AFInvocationFeedbackExperiment> *invocationFeedbackExperiment;


+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_descriptionWithIndent:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithExperimentsByConfigurationIdentifier:(id)arg0 ;
-(id)mutatedCopyWithMutator:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif