// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCTOPSTORIESGROUPCONFIG_H
#define FCTOPSTORIESGROUPCONFIG_H

@class NSArray, NSDate, NSDictionary;


#import "FCGroupConfig.h"

@interface FCTopStoriesGroupConfig : FCGroupConfig

@property (readonly, nonatomic) NSArray *mandatoryArticleIDPairs; // ivar: _mandatoryArticleIDPairs
@property (readonly, nonatomic) NSArray *optionalArticleIDs; // ivar: _optionalArticleIDs
@property (readonly, nonatomic) NSDate *publishDate; // ivar: _publishDate
@property (retain, nonatomic) NSDictionary *topStoriesMetadataByArticleID; // ivar: _topStoriesMetadataByArticleID


-(id)initWithDictionary:(id)arg0 ;


@end


#endif