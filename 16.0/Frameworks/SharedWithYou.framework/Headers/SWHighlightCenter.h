// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SWHIGHLIGHTCENTER_H
#define SWHIGHLIGHTCENTER_H

@class SLHighlightCenter, SLDServiceProxy, NSCache, NSArray, NSString;
@protocol SLHighlightCenterAPIAdapting, SLDServiceProxyDelegate, OS_dispatch_queue, SWHighlightCenterDelegate;

#import <Foundation/Foundation.h>


@interface SWHighlightCenter : NSObject <SLHighlightCenterAPIAdapting, SLDServiceProxyDelegate>



@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_highlightArrayQueue; // ivar: __highlightArrayQueue
@property (readonly, nonatomic) SLHighlightCenter *_highlightCenterAdapter; // ivar: __highlightCenterAdapter
@property (retain, nonatomic) SLDServiceProxy *cloudDocsServiceProxy; // ivar: _cloudDocsServiceProxy
@property (weak, nonatomic) NSObject<SWHighlightCenterDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSCache *fileURLToShareURLCache; // ivar: _fileURLToShareURLCache
@property (readonly, copy, nonatomic) NSArray *highlights; // ivar: _highlights
@property (readonly, nonatomic) CGFloat highlightsRankingScore;
@property (retain, nonatomic) NSCache *identifierToCollaborationHighlightCache; // ivar: _identifierToCollaborationHighlightCache
@property (retain, nonatomic) SLDServiceProxy *noticeServiceProxy; // ivar: _noticeServiceProxy
@property (retain, nonatomic) NSCache *pendingEventCache; // ivar: _pendingEventCache
@property (retain, nonatomic) NSCache *urlToCollaborationHighlightCache; // ivar: _urlToCollaborationHighlightCache
@property (retain, nonatomic) NSCache *urlToHighlightCache; // ivar: _urlToHighlightCache
@property (retain, nonatomic) NSString *variant; // ivar: _variant


+(BOOL)isEnabled;
+(BOOL)isSystemCollaborationSupportAvailable;
+(id)SWVariantDefault;
+(id)SWVariantNewsToday;
+(id)highlightCollectionTitle;
+(id)noticeHandlerQueue;
+(id)shareURLFetchQueue;
+(id)signingQueue;
-(id)_attributionIdentifiersForHighlight:(id)arg0 ;
-(id)_sandboxExtensionIssueFileURL:(id)arg0 withAuditToken:(struct ? )arg1 ;
-(id)collaborationHighlightForIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)collaborationHighlightForURL:(id)arg0 error:(*id)arg1 ;
-(id)fetchAttributionForAttributionIdentifier:(id)arg0 ;
-(id)fetchAttributionsForHighlight:(id)arg0 ;
-(id)getShareURLForFileURL:(id)arg0 ;
-(id)highlightForURL:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithAppIdentifier:(id)arg0 ;
-(id)originalSenderForCollaborationHighlight:(id)arg0 ;
-(void)_disconnectNoticeServiceConnectionIfNecessary;
-(void)_getShareURLForFileURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)_notifyDelegateHighlightsDidChange;
-(void)_postNoticeForHighlightEvent:(id)arg0 ;
-(void)_processPendingHighlightEvent:(id)arg0 ;
-(void)_sendCurrentNoticesToDaemonAndDisconnect;
-(void)apiAdapterHighlightsDidChange:(id)arg0 ;
-(void)getCollaborationHighlightForURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)getHighlightForURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)getSignedIdentityProofForCollaborationHighlight:(id)arg0 usingData:(id)arg1 completionHandler:(id)arg2 ;
-(void)postNoticeForEvent:(id)arg0 ;
-(void)postNoticeForHighlightEvent:(id)arg0 ;
-(void)serviceProxyDidConnect:(id)arg0 ;
-(void)serviceProxyDidDisconnect:(id)arg0 ;


@end


#endif