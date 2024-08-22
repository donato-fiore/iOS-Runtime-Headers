// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DRSTEAMDAMPENINGCONFIGURATION_H
#define DRSTEAMDAMPENINGCONFIGURATION_H

@class NSDictionary;

#import <Foundation/Foundation.h>

#import "DRSDampeningConfiguration.h"

@interface DRSTeamDampeningConfiguration : NSObject

@property (retain, nonatomic) DRSDampeningConfiguration *defaultConfiguration; // ivar: _defaultConfiguration
@property (retain, nonatomic) NSDictionary *issueCategoryToConfigurationDict; // ivar: _issueCategoryToConfigurationDict


-(BOOL)isEqual:(id)arg0 ;
-(id)_ON_MOC_QUEUE_moRepresentationInContext:(id)arg0 teamID:(id)arg1 ;
-(id)_initWithTeamDampeningConfigMO_ON_MOC_QUEUE:(id)arg0 ;
-(id)configurationForIssueCategory:(id)arg0 ;
-(id)debugDescription;
-(id)initWithDefaultConfiguration:(id)arg0 issueCategoryToConfigurationDict:(id)arg1 ;
-(id)jsonCompatibleDictRepresentation;


@end


#endif