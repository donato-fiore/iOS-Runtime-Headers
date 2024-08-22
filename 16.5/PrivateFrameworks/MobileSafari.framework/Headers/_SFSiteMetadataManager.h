// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SFSITEMETADATAMANAGER_H
#define _SFSITEMETADATAMANAGER_H

@class WBSSiteMetadataManager, WBSLeadImageCache, WBSLinkPresentationIconCache, WBSTabGroupTouchIconProvider;


#import "_SFFaviconProvider.h"
#import "_SFSavedAccountTouchIconCache.h"
#import "_SFTouchIconCache.h"

@interface _SFSiteMetadataManager : WBSSiteMetadataManager

@property (readonly, nonatomic) _SFFaviconProvider *faviconProvider; // ivar: _faviconProvider
@property (readonly, nonatomic) WBSLeadImageCache *leadImageCache; // ivar: _leadImageCache
@property (readonly, nonatomic) WBSLinkPresentationIconCache *linkPresentationIconCache; // ivar: _linkPresentationIconCache
@property (readonly, nonatomic) _SFSavedAccountTouchIconCache *savedAccountTouchIconCache; // ivar: _savedAccountTouchIconCache
@property (readonly, nonatomic) WBSTabGroupTouchIconProvider *tabGroupIconProvider; // ivar: _tabGroupIconProvider
@property (readonly, nonatomic) _SFTouchIconCache *touchIconCache; // ivar: _touchIconCache


+(BOOL)hasSharedSiteMetadataManager;
+(id)sharedSiteMetadataManager;
+(void)setSharedSiteMetadataManager:(id)arg0 ;
+(void)setSharedSiteMetadataManagerProvider:(id)arg0 ;
-(id)initWithInjectedBundleURL:(id)arg0 imageCacheDirectoryURL:(id)arg1 cacheIsReadOnly:(BOOL)arg2 metadataType:(NSUInteger)arg3 ;
-(void)scheduleLowPriorityRequestForBookmarks:(id)arg0 ;


@end


#endif