// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SHSHEETCONTENTDATASOURCECHANGEREQUEST_H
#define SHSHEETCONTENTDATASOURCECHANGEREQUEST_H

@class NSArray, NSDictionary;

#import <Foundation/Foundation.h>

#import "SHSheetContentDataSourceState.h"

@interface SHSheetContentDataSourceChangeRequest : NSObject

@property (copy, nonatomic) NSArray *actionProxies; // ivar: _actionProxies
@property (copy, nonatomic) NSDictionary *activitiesByUUID; // ivar: _activitiesByUUID
@property (nonatomic) BOOL animated; // ivar: _animated
@property (nonatomic) NSInteger excludeSectionTypes; // ivar: _excludeSectionTypes
@property (nonatomic) BOOL forceReload; // ivar: _forceReload
@property (nonatomic) unsigned int nearbyCountSlotID; // ivar: _nearbyCountSlotID
@property (copy, nonatomic) NSArray *peopleProxies; // ivar: _peopleProxies
@property (copy, nonatomic) NSArray *shareProxies; // ivar: _shareProxies
@property (retain, nonatomic) SHSheetContentDataSourceState *state; // ivar: _state


+(id)changeRequestForPeopleProxies:(id)arg0 shareProxies:(id)arg1 actionProxies:(id)arg2 nearbyCountSlotID:(unsigned int)arg3 activitiesByUUID:(id)arg4 ;
+(id)changeRequestFromState:(id)arg0 ;
-(id)description;


@end


#endif