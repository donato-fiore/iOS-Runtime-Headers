// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXMETADATA_H
#define SXMETADATA_H

@class NSString;


#import "SXJSONObject.h"
#import "SXJSONDictionary.h"
#import "SXFeedNavigationAppearance.h"
#import "SXTabBarAppearance.h"

@interface SXMetadata : SXJSONObject

@property (readonly, nonatomic) SXJSONDictionary *campaignData;
@property (readonly, nonatomic) NSString *canonicalURL;
@property (readonly, nonatomic) NSString *documentVersion;
@property (readonly, nonatomic) SXFeedNavigationAppearance *feedNavigationAppearance;
@property (readonly, nonatomic) BOOL showNewsSubscribe;
@property (readonly, nonatomic) BOOL suppressMoreFromPublisher;
@property (readonly, nonatomic) NSInteger suppressRecommendedReads;
@property (readonly, nonatomic) BOOL suppressRelatedArticles;
@property (readonly, nonatomic) SXTabBarAppearance *tabBarAppearance;
@property (readonly, nonatomic) NSString *thumbnailImageIdentifier;
@property (readonly, nonatomic) BOOL transparentToolbar;


-(NSInteger)suppressRecommendedReadsWithValue:(id)arg0 withType:(int)arg1 ;


@end


#endif