// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCLOCALARTICLEHEADLINE_H
#define FCLOCALARTICLEHEADLINE_H

@class NSDictionary, NSString;
@protocol FCChannelProviding;


#import "FCHeadline.h"
#import "FCHeadlineThumbnail.h"

@interface FCLocalArticleHeadline : FCHeadline {
    BOOL _webEmbedsEnabled;
    FCHeadlineThumbnail *_thumbnail;
}


@property (readonly, nonatomic) NSObject<FCChannelProviding> *channel; // ivar: _channel
@property (readonly, nonatomic) NSDictionary *dictionary; // ivar: _dictionary
@property (readonly, nonatomic) NSString *path; // ivar: _path


-(BOOL)hasThumbnail;
-(BOOL)isDeleted;
-(BOOL)isDraft;
-(BOOL)isFeatureCandidate;
-(BOOL)isLocalDraft;
-(BOOL)isPremium;
-(BOOL)isSponsored;
-(BOOL)useTransparentNavigationBar;
-(BOOL)webEmbedsEnabled;
-(CGFloat)videoDuration;
-(NSUInteger)contentType;
-(id)accessoryText;
-(id)allowedStorefrontIDs;
-(id)articleID;
-(id)blockedStorefrontIDs;
-(id)contentURL;
-(id)contentWithContext:(id)arg0 ;
-(id)iAdCategories;
-(id)iAdKeywords;
-(id)iAdSectionIDs;
-(id)identifier;
-(id)initWithDictionary:(id)arg0 path:(id)arg1 channel:(id)arg2 ;
-(id)lastModifiedDate;
-(id)localDraftPath;
-(id)primaryAudience;
-(id)publishDate;
-(id)shortExcerpt;
-(id)sourceChannel;
-(id)sourceName;
-(id)surfacedByBinID;
-(id)thumbnail;
-(id)thumbnailAssetHandle;
-(id)title;
-(id)topicIDs;
-(id)videoURL;
-(struct CGSize )thumbnailSize;


@end


#endif