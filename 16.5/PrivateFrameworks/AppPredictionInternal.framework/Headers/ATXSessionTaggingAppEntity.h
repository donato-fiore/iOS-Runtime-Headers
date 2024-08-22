// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXSESSIONTAGGINGAPPENTITY_H
#define ATXSESSIONTAGGINGAPPENTITY_H

@class NSString;

#import <Foundation/Foundation.h>

#import "ATXModeEntityAffinityVector.h"
#import "ATXModeMetadataConstants.h"

@interface ATXSessionTaggingAppEntity : NSObject

@property (readonly, nonatomic) ATXModeEntityAffinityVector *affinityVector; // ivar: _affinityVector
@property (readonly, nonatomic) ATXModeEntityAffinityVector *affinityVector_v2; // ivar: _affinityVector_v2
@property (readonly, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (readonly, nonatomic) ATXModeMetadataConstants *modeMetadataConstants; // ivar: _modeMetadataConstants


+(id)genreIdForBundleId:(id)arg0 ;
+(id)keyForBundleId:(id)arg0 ;
-(id)entityKey;
-(id)initWithBundleId:(id)arg0 modeMetadataConstants:(id)arg1 ;


@end


#endif