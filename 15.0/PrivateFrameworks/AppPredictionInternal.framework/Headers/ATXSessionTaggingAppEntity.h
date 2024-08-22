// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXSESSIONTAGGINGAPPENTITY_H
#define ATXSESSIONTAGGINGAPPENTITY_H

@class NSString;

#import <Foundation/Foundation.h>

#import "ATXModeEntityAffinityVector.h"

@interface ATXSessionTaggingAppEntity : NSObject

@property (readonly, nonatomic) ATXModeEntityAffinityVector *affinityVector; // ivar: _affinityVector
@property (readonly, nonatomic) ATXModeEntityAffinityVector *affinityVector_v2; // ivar: _affinityVector_v2
@property (readonly, nonatomic) NSString *bundleId; // ivar: _bundleId


+(id)genreIdForBundleId:(id)arg0 ;
+(id)keyForBundleId:(id)arg0 ;
-(id)entityKey;
-(id)initWithBundleId:(id)arg0 ;


@end


#endif