// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DRSTEAMTASKING_H
#define DRSTEAMTASKING_H

@class DRConfig, NSDictionary, NSString;

#import <Foundation/Foundation.h>

#import "DRSSamplingParameters.h"

@interface DRSTeamTasking : NSObject

@property (readonly, nonatomic) DRConfig *config; // ivar: _config
@property (readonly, nonatomic) DRSSamplingParameters *defaultSamplingParameters; // ivar: _defaultSamplingParameters
@property (readonly, nonatomic) NSDictionary *perHWModelSamplingParameters; // ivar: _perHWModelSamplingParameters
@property (readonly, nonatomic) NSDictionary *perTimezoneSamplingParameters; // ivar: _perTimezoneSamplingParameters
@property (readonly, nonatomic) NSString *teamID; // ivar: _teamID


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToTeamTasking:(id)arg0 ;
-(id)_jsonDictRepresentation:(BOOL)arg0 ;
-(id)debugDescription;
-(id)initWithJSONDict:(id)arg0 receivedDate:(id)arg1 ;
-(id)initWithTeamID:(id)arg0 config:(id)arg1 defaultSamplingParameters:(id)arg2 perTimezoneSamplingParameters:(id)arg3 perHardwareModelSamplingParamters:(id)arg4 ;
-(id)jsonDictRepresentation;
-(id)jsonDictRepresentationAbbreviated;
-(id)samplingParametersForHWModel:(id)arg0 timezoneAbbreviation:(id)arg1 ;
-(id)samplingParametersForHardwareModel:(id)arg0 ;
-(id)samplingParametersForTimezoneAbbreviation:(id)arg0 ;


@end


#endif