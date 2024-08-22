// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCCONTENTCONTEXTINTERNAL_H
#define FCCONTENTCONTEXTINTERNAL_H

@class NSString, NSArray;
@protocol FCContentContextInternal, FCAssetKeyCacheType, FCAssetKeyManagerType, FCAVAssetCacheType, FCAVAssetFactoryType, FCAVAssetKeyCacheType;

#import <Foundation/Foundation.h>

#import "FCArticleListRecordSource.h"
#import "FCArticleRecordSource.h"
#import "FCAudioConfigRecordSource.h"
#import "FCAVAssetDownloadManager.h"
#import "FCChannelMembershipController.h"
#import "FCCKContentDatabase.h"
#import "FCFeedDatabase.h"
#import "FCForYouConfigRecordSource.h"
#import "FCIssueListRecordSource.h"
#import "FCIssueRecordSource.h"
#import "FCPurchaseLookupRecordSource.h"
#import "FCResourceRecordSource.h"
#import "FCTagListRecordSource.h"
#import "FCTagRecordSource.h"
#import "FCWidgetSectionConfigRecordSource.h"

@interface FCContentContextInternal : NSObject <FCContentContextInternal>



@property (retain, nonatomic) FCArticleListRecordSource *articleListRecordSource; // ivar: _articleListRecordSource
@property (retain, nonatomic) FCArticleRecordSource *articleRecordSource; // ivar: _articleRecordSource
@property (retain, nonatomic) NSObject<FCAssetKeyCacheType> *assetKeyCache; // ivar: _assetKeyCache
@property (retain, nonatomic) NSObject<FCAssetKeyManagerType> *assetKeyManager; // ivar: _assetKeyManager
@property (retain, nonatomic) FCAudioConfigRecordSource *audioConfigRecordSource; // ivar: _audioConfigRecordSource
@property (retain, nonatomic) NSObject<FCAVAssetCacheType> *avAssetCache; // ivar: _avAssetCache
@property (retain, nonatomic) FCAVAssetDownloadManager *avAssetDownloadManager; // ivar: _avAssetDownloadManager
@property (retain, nonatomic) NSObject<FCAVAssetFactoryType> *avAssetFactory; // ivar: _avAssetFactory
@property (retain, nonatomic) NSObject<FCAVAssetKeyCacheType> *avAssetKeyCache; // ivar: _avAssetKeyCache
@property (retain, nonatomic) FCChannelMembershipController *channelMembershipController; // ivar: _channelMembershipController
@property (retain, nonatomic) FCCKContentDatabase *contentDatabase; // ivar: _contentDatabase
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) FCFeedDatabase *feedDatabase; // ivar: _feedDatabase
@property (retain, nonatomic) FCForYouConfigRecordSource *forYouConfigRecordSource; // ivar: _forYouConfigRecordSource
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) FCIssueListRecordSource *issueListRecordSource; // ivar: _issueListRecordSource
@property (retain, nonatomic) FCIssueRecordSource *issueRecordSource; // ivar: _issueRecordSource
@property (retain, nonatomic) FCPurchaseLookupRecordSource *purchaseLookupRecordSource; // ivar: _purchaseLookupRecordSource
@property (readonly, nonatomic) NSArray *recordSources;
@property (retain, nonatomic) FCResourceRecordSource *resourceRecordSource; // ivar: _resourceRecordSource
@property (readonly) Class superclass;
@property (retain, nonatomic) FCTagListRecordSource *tagListRecordSource; // ivar: _tagListRecordSource
@property (retain, nonatomic) FCTagRecordSource *tagRecordSource; // ivar: _tagRecordSource
@property (retain, nonatomic) FCWidgetSectionConfigRecordSource *widgetSectionConfigRecordSource; // ivar: _widgetSectionConfigRecordSource


-(id)init;
-(void)enableFlushingWithFlushingThreshold:(NSUInteger)arg0 ;


@end


#endif