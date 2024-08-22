// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SHSHEETCONTENTDATASOURCESTATE_H
#define SHSHEETCONTENTDATASOURCESTATE_H

@class NSArray, NSDictionary, NSOrderedSet;

#import <Foundation/Foundation.h>

#import "UIAirDropNode.h"

@interface SHSheetContentDataSourceState : NSObject

@property (copy, nonatomic) NSArray *actionProxies; // ivar: _actionProxies
@property (copy, nonatomic) NSDictionary *actionProxyByUUID; // ivar: _actionProxyByUUID
@property (copy, nonatomic) NSDictionary *activitiesByUUID; // ivar: _activitiesByUUID
@property (retain, nonatomic) UIAirDropNode *airDropProxy; // ivar: _airDropProxy
@property (copy, nonatomic) NSDictionary *customActionIdentifiersByCustomSectionIdentifier; // ivar: _customActionIdentifiersByCustomSectionIdentifier
@property (copy, nonatomic) NSOrderedSet *customSectionIdentifiers; // ivar: _customSectionIdentifiers
@property (copy, nonatomic) NSArray *extensionActionIdentifiers; // ivar: _extensionActionIdentifiers
@property (copy, nonatomic) NSArray *favoriteActionIdentifiers; // ivar: _favoriteActionIdentifiers
@property (copy, nonatomic) NSArray *heroActionIdentifiers; // ivar: _heroActionIdentifiers
@property (copy, nonatomic) NSArray *informationalActionIdentifiers; // ivar: _informationalActionIdentifiers
@property (nonatomic) unsigned int nearbyCountSlotID; // ivar: _nearbyCountSlotID
@property (copy, nonatomic) NSArray *peopleIdentifiers; // ivar: _peopleIdentifiers
@property (copy, nonatomic) NSArray *peopleProxies; // ivar: _peopleProxies
@property (copy, nonatomic) NSDictionary *peopleProxyByUUID; // ivar: _peopleProxyByUUID
@property (copy, nonatomic) NSArray *shareIdentifiers; // ivar: _shareIdentifiers
@property (copy, nonatomic) NSArray *shareProxies; // ivar: _shareProxies
@property (copy, nonatomic) NSDictionary *shareProxyByUUID; // ivar: _shareProxyByUUID
@property (copy, nonatomic) NSArray *systemActionIdentifiers; // ivar: _systemActionIdentifiers


-(id)description;


@end


#endif