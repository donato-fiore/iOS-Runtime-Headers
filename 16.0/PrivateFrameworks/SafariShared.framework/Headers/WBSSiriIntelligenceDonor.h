// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSSIRIINTELLIGENCEDONOR_H
#define WBSSIRIINTELLIGENCEDONOR_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WBSSiriIntelligenceDonor : NSObject {
    NSObject<OS_dispatch_queue> *_coreSpotlightDonationSerialQueue;
}




+(id)_bookmarkItemIdentifierForURLString:(id)arg0 ;
+(id)_coreSpotlightItemIdentifierForURLString:(id)arg0 ;
+(id)_historyItemIdentifierForURLString:(id)arg0 ;
+(id)coreSpotlightPageDonationIdentifier;
+(id)historyItemIdentifierForURL:(id)arg0 ;
+(id)sharedInstance;
-(BOOL)donateTextInWebView:(id)arg0 extractedReaderText:(id)arg1 canDonateFullPageText:(BOOL)arg2 extractInnerText:(id)arg3 ;
-(id)_contentDescriptionForURL:(id)arg0 ;
-(id)_indexedBookmarksIDs:(*id)arg0 ;
-(id)_searchableItemsForIDs:(id)arg0 allBookmarks:(id)arg1 ;
-(id)init;
-(void)_computeCoreSpotlightIDsForBookmarks:(id)arg0 ;
-(void)_computeCoreSpotlightIndexingRequirementsForAllBookmarksIDs:(id)arg0 indexedBookmarksIDs:(id)arg1 outIndexIDs:(*id)arg2 outRemoveIDs:(*id)arg3 ;
-(void)_donateDataForPageWithURL:(id)arg0 fullPageText:(id)arg1 readerText:(id)arg2 autocompleteTriggers:(id)arg3 ;
-(void)_indexCoreSpotlightData:(id)arg0 completionHandler:(id)arg1 ;
-(void)_indexHistoryItemsToCoreSpotlight:(id)arg0 completionHandler:(id)arg1 ;
-(void)_removeCoreSpotlightDataWithIDs:(id)arg0 completionHandler:(id)arg1 ;
-(void)_sanitizeAttributeSet:(id)arg0 ;
-(void)donateDataForPageWithURL:(id)arg0 fullPageText:(id)arg1 readerText:(id)arg2 ;
-(void)donateSafariBookmarksToCoreSpotlight:(id)arg0 ;
-(void)export30DaysWorthOfHistoryToCoreSpotlightWithCompletionHandler:(id)arg0 ;
-(void)processRemovedHistoryItems:(id)arg0 ;
-(void)removeAllCoreSpotlightHistoryDataDonatedBySafari;


@end


#endif