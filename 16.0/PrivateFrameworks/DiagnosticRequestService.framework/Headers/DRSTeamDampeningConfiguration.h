// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DRSTEAMDAMPENINGCONFIGURATION_H
#define DRSTEAMDAMPENINGCONFIGURATION_H

@class NSDictionary;

#import <Foundation/Foundation.h>

#import "DRSDampeningConfiguration.h"

@interface DRSTeamDampeningConfiguration : NSObject

@property (retain, nonatomic) DRSDampeningConfiguration *defaultConfiguration; // ivar: _defaultConfiguration
@property (retain, nonatomic) NSDictionary *issueCategoryToConfigurationDict; // ivar: _issueCategoryToConfigurationDict


+(id)teamIdToTeamDampeningConfigFromPlistDirectoryPath:(id)arg0 errorOut:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_ON_MOC_QUEUE_moRepresentationInContext:(id)arg0 teamID:(id)arg1 ;
-(id)_initWithTeamDampeningConfigMO_ON_MOC_QUEUE:(id)arg0 ;
-(id)configurationForIssueCategory:(id)arg0 ;
-(id)debugDescription;
-(id)initWithDefaultConfiguration:(id)arg0 issueCategoryToConfigurationDict:(id)arg1 ;
-(id)initWithPlistDict:(id)arg0 ;
-(id)jsonCompatibleDictRepresentation;
-(void)updateIssueCategoryConfig:(id)arg0 newConfig:(id)arg1 ;


@end


#endif