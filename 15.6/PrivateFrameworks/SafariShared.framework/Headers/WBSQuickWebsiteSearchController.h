// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSQUICKWEBSITESEARCHCONTROLLER_H
#define WBSQUICKWEBSITESEARCHCONTROLLER_H

@class NSURL, NSMutableDictionary, NSString, NSArray;
@protocol WBSQuickWebsiteSearchProviderDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "WBSCoalescedAsynchronousWriter.h"

@interface WBSQuickWebsiteSearchController : NSObject <WBSQuickWebsiteSearchProviderDelegate>

 {
    NSURL *_searchDescriptionsURL;
    BOOL _hasBegunLoadingFromDisk;
    NSObject<OS_dispatch_queue> *_quickWebsiteSearchProvidersBySourcePageURLStringAccessQueue;
    NSMutableDictionary *_quickWebsiteSearchProvidersByHost;
    NSMutableDictionary *_openSearchDescriptionsByDescriptionDocumentURLString;
    NSMutableDictionary *_hostSetsByOpenSearchDescriptionDocumentURLString;
    WBSCoalescedAsynchronousWriter *_writer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *quickWebsiteSearchHosts;
@property BOOL quickWebsiteSearchProvidersLoadedFromDisk; // ivar: _quickWebsiteSearchProvidersLoadedFromDisk
@property (readonly) Class superclass;


+(id)sharedController;
-(BOOL)_quickWebsiteSearchProviderHasSearchURLTemplateStringOnAccessQueue:(id)arg0 ;
-(BOOL)_shouldRemoveQuickWebsiteSearchProvider:(id)arg0 ;
-(id)_dictionaryRepresentation;
-(id)_initWithSearchDescriptionsURL:(id)arg0 ;
-(id)openSearchDescriptionForOpenSearchDescriptionURLString:(id)arg0 ;
-(id)providerForSourcePageURLString:(id)arg0 ;
-(id)providersMatchingQueryString:(id)arg0 ;
-(id)quickWebsiteSearchProvider:(id)arg0 openSearchDescriptionForOpenSearchDescriptionURLString:(id)arg1 ;
-(void)_addHost:(id)arg0 toOpenSearchDescriptionWithDocumentURL:(id)arg1 ;
-(void)_didCollectOpenSearchDescription:(id)arg0 ;
-(void)_didFinishLoadingFromDisk;
-(void)_loadFromDisk;
-(void)_pruneUnusedQuickWebsiteSearchProviders;
-(void)_removeHost:(id)arg0 fromOpenSearchDescriptionWithDocumentURL:(id)arg1 ;
-(void)_resetCachedDataWithCompletionHandler:(id)arg0 ;
-(void)_saveToDiskSoon;
-(void)_sendNotification:(id)arg0 forQuickWebsiteSearchProvider:(id)arg1 ;
-(void)beginLoadingFromDiskIfNeeded;
-(void)clear;
-(void)didPerformSearchWithProvider:(id)arg0 ;
-(void)noteProvidersAreStale;
-(void)removeProviderWithHost:(id)arg0 ;
-(void)removeProvidersAddedAfterDate:(id)arg0 beforeDate:(id)arg1 ;
-(void)removeProvidersWithHosts:(id)arg0 ;
-(void)savePendingChangesBeforeTermination;
-(void)setOpenSearchDescriptionURLString:(id)arg0 forSourcePageURLString:(id)arg1 ;
-(void)setSearchURLTemplateFromForm:(id)arg0 forSourcePageURLString:(id)arg1 ;


@end


#endif