// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCSPOTLIGHTGROUPCONFIG_H
#define FCSPOTLIGHTGROUPCONFIG_H

@class NSDate, NSString;
@protocol FCCardStyleProviding;


#import "FCGroupConfig.h"

@interface FCSpotlightGroupConfig : FCGroupConfig

@property (readonly, copy, nonatomic) NSDate *publishDate; // ivar: _publishDate
@property (readonly, copy, nonatomic) NSString *spotlightArticleID; // ivar: _spotlightArticleID
@property (readonly, copy, nonatomic) NSString *spotlightCallToActionTitle;
@property (readonly, copy, nonatomic) NSString *spotlightEyebrowTitle;
@property (readonly, copy, nonatomic) NSObject<FCCardStyleProviding> *spotlightItemDarkStyle;
@property (readonly, copy, nonatomic) NSObject<FCCardStyleProviding> *spotlightItemStyle;


-(id)initWithDictionary:(id)arg0 ;


@end


#endif