// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRSRANKINGITEMCOLLECTION_H
#define PRSRANKINGITEMCOLLECTION_H

@class NSArray, NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface PRSRankingItemCollection : NSObject

@property (retain) NSArray *arrayOfRankingItems; // ivar: _arrayOfRankingItems
@property (retain) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property NSUInteger countOfVisibleResults; // ivar: _countOfVisibleResults
@property (retain) NSDictionary *mapResultIdToProtectionClass; // ivar: _mapResultIdToProtectionClass


-(id)description;


@end


#endif