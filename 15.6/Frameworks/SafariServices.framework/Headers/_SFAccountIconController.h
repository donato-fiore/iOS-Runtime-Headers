// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SFACCOUNTICONCONTROLLER_H
#define _SFACCOUNTICONCONTROLLER_H

@class WBSCache, NSMutableDictionary, NSMutableSet, NSMutableArray, _SFSiteMetadataManager;
@protocol OS_dispatch_queue, _SFAccountIconControllerDelegate;

#import <Foundation/Foundation.h>


@interface _SFAccountIconController : NSObject {
    WBSCache *_iconCache;
    NSMutableDictionary *_domainsToExtractedBackgroundColors;
    NSMutableSet *_touchIconRequests;
    NSMutableDictionary *_domainToItems;
    NSMutableSet *_domainsThatHaveRequestedIcon;
    NSMutableArray *_blocksAwaitingHistoryItems;
    NSObject<OS_dispatch_queue> *_queue;
    _SFSiteMetadataManager *_metadataManager;
    NSMutableDictionary *_domainToAppID;
    NSMutableArray *_blocksAwaitingSharedWebCredentialsInformation;
    BOOL _initializedHistory;
}


@property (weak, nonatomic) NSObject<_SFAccountIconControllerDelegate> *delegate; // ivar: _delegate


+(struct CGSize )_preferredIconSize;
+(struct CGSize )tableViewIconSize;
-(id)backgroundColorForDomain:(id)arg0 ;
-(id)cachedIconForDomain:(id)arg0 resizedToSize:(struct CGSize )arg1 ;
-(id)iconForDomain:(id)arg0 ;
-(id)initWithMetadataManager:(id)arg0 ;
-(void)_checkForLocalVisitToDomain:(id)arg0 withCompletion:(id)arg1 ;
-(void)_fetchAppIconForDomain:(id)arg0 ;
-(void)_fetchTouchIconForDomain:(id)arg0 ;
-(void)_iconDidUpdateForDomain:(id)arg0 ;
-(void)_populateDomainToAppIDWithCompletion:(id)arg0 ;
-(void)_populateDomainToItemsWithCompletion:(id)arg0 ;
-(void)_requestTouchIconForDomain:(id)arg0 iconDownloadingEnabled:(BOOL)arg1 ;
-(void)clearIconFetchingState;


@end


#endif