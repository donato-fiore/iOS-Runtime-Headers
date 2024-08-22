// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LRRFEATURESTOREFILTERINFORMATION_H
#define LRRFEATURESTOREFILTERINFORMATION_H

@class NSDictionary, NSString, NSDate;

#import <Foundation/Foundation.h>


@interface LRRFeatureStoreFilterInformation : NSObject

@property NSDictionary *assetInfo; // ivar: _assetInfo
@property NSString *currentTimeStampStr; // ivar: _currentTimeStampStr
@property BOOL filterSamples; // ivar: _filterSamples
@property NSDate *lastReplayDate; // ivar: _lastReplayDate


-(id)init;


@end


#endif