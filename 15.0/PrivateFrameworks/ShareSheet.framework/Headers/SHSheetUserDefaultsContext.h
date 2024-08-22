// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SHSHEETUSERDEFAULTSCONTEXT_H
#define SHSHEETUSERDEFAULTSCONTEXT_H

@class NSDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface SHSheetUserDefaultsContext : NSObject

@property (readonly, copy, nonatomic) NSDictionary *activitiesByUUID; // ivar: _activitiesByUUID
@property (readonly, copy, nonatomic) NSArray *applicationActivities; // ivar: _applicationActivities
@property (readonly, nonatomic) NSInteger category; // ivar: _category
@property (readonly, copy, nonatomic) NSArray *excludedActivityTypes; // ivar: _excludedActivityTypes
@property (readonly, copy, nonatomic) NSArray *favoritesProxies; // ivar: _favoritesProxies
@property (readonly, copy, nonatomic) NSArray *orderedUUIDs; // ivar: _orderedUUIDs
@property (readonly, copy, nonatomic) NSArray *suggestionProxies; // ivar: _suggestionProxies


-(id)description;
-(id)initWithApplicationActivities:(id)arg0 activitiesByUUID:(id)arg1 favoritesProxies:(id)arg2 suggestionProxies:(id)arg3 orderedUUIDs:(id)arg4 excludedActivityTypes:(id)arg5 activityCategory:(NSInteger)arg6 ;


@end


#endif