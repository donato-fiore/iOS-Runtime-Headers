// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DRSTEAMTASKING_H
#define DRSTEAMTASKING_H

@class DRConfig, NSDictionary, NSString;

#import <Foundation/Foundation.h>

#import "DRSSamplingParameters.h"

@interface DRSTeamTasking : NSObject

@property (readonly, nonatomic) DRConfig *config; // ivar: _config
@property (readonly, nonatomic) DRSSamplingParameters *defaultSamplingParameters; // ivar: _defaultSamplingParameters
@property (readonly, nonatomic) NSDictionary *perTimezoneSamplingParameters; // ivar: _perTimezoneSamplingParameters
@property (readonly, nonatomic) NSString *teamID; // ivar: _teamID


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToTeamTasking:(id)arg0 ;
-(id)initWithJSONDict:(id)arg0 receivedDate:(id)arg1 ;
-(id)initWithTeamID:(id)arg0 config:(id)arg1 defaultSamplingParameters:(id)arg2 perTimezoneSamplingParameters:(id)arg3 ;
-(id)jsonDictRepresentation;
-(id)samplingParametersForTimezoneAbbreviation:(id)arg0 ;


@end


#endif