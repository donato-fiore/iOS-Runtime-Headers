// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MESSAGECONTENTITEMSHELPER_H
#define MESSAGECONTENTITEMSHELPER_H

@class NSMutableDictionary, NSMutableSet, NSProgress, NSArray, NSString, EMMailDropMetadata, WKWebView;
@protocol EFLoggable, EFScheduler, MSMailWebProcessAttachmentProxy, ContentRepresentationHandlingDelegate;

#import <Foundation/Foundation.h>


@interface MessageContentItemsHelper : NSObject <EFLoggable>

 {
    NSMutableDictionary *_elementIDToContentID;
    NSMutableDictionary *_elementIDToWKAttachmentID;
    NSMutableDictionary *_contentIDToTask;
    NSMutableSet *_inlinedImageContentIDs;
    BOOL _didComputeMailDropProperties;
    NSInteger _totalUnstartedMailDropDownloadSize;
    id<EFScheduler> *_attachmentsScheduler;
    NSProgress *_totalMailDropProgress;
    id<MSMailWebProcessAttachmentProxy> *_webProcessProxy;
}


@property (nonatomic) BOOL allMailDropsDownloaded; // ivar: _allMailDropsDownloaded
@property (retain, nonatomic) NSArray *contentItems; // ivar: _contentItems
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) EMMailDropMetadata *mailDropBannerMetadata; // ivar: _mailDropBannerMetadata
@property (copy, nonatomic) id *maildropProgressHandler; // ivar: _maildropProgressHandler
@property (weak, nonatomic) NSObject<ContentRepresentationHandlingDelegate> *representationHandler; // ivar: _representationHandler
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger totalMailDropDownloadSize; // ivar: _totalMailDropDownloadSize
@property (retain, nonatomic) WKWebView *webView; // ivar: _webView


+(id)log;
-(NSInteger)displayStateForContentItem:(id)arg0 ;
-(id)_futureForContentItem:(id)arg0 networkUsage:(NSInteger)arg1 invokerID:(id)arg2 previouslyInvoked:(*BOOL)arg3 progress:(*id)arg4 ;
-(id)_representationTypeForContentItem:(id)arg0 ;
-(id)contentItemForContentID:(id)arg0 ;
-(id)contentItemForElementID:(id)arg0 ;
-(id)futureForContentItem:(id)arg0 download:(BOOL)arg1 ;
-(id)initWithWebView:(id)arg0 contentItemHandler:(id)arg1 ;
-(id)startDownloadForContentItem:(id)arg0 userInitiated:(BOOL)arg1 ;
-(void)_computeMailDropProperties;
-(void)_injectAttachmentViewForElementWithSourceAttributeValue:(id)arg0 forContentItem:(id)arg1 ;
-(void)_updateProgressFraction:(id)arg0 forContentItem:(id)arg1 ;
-(void)associateElementID:(id)arg0 withContentID:(id)arg1 ;
-(void)associateElementID:(id)arg0 withWKAttachmentID:(id)arg1 ;
-(void)attachmentWasTappedWithElementID:(id)arg0 rect:(struct CGRect )arg1 view:(id)arg2 ;
-(void)displayViewerForContentItem:(id)arg0 rect:(struct CGRect )arg1 view:(id)arg2 ;
-(void)downloadAllMailDropAttachments;
-(void)inlineImageFinishedDownloading:(id)arg0 ;
-(void)noteDidFailLoadingResourceWithURL:(id)arg0 ;
-(void)noteDidFinishDocumentLoadForURL:(id)arg0 ;
-(void)setDisplayState:(NSInteger)arg0 forContentItem:(id)arg1 ;
-(void)setPercentCompleted:(CGFloat)arg0 forContentItem:(id)arg1 ;
-(void)showMenuForContentItem:(id)arg0 rect:(struct CGRect )arg1 view:(id)arg2 ;
-(void)updateDragItemProvider:(id)arg0 forElementID:(id)arg1 ;


@end


#endif