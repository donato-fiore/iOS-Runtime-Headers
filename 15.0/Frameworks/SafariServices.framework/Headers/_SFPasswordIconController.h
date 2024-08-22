// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFPASSWORDICONCONTROLLER_H
#define _SFPASSWORDICONCONTROLLER_H

@class WBSCache, NSMutableDictionary, NSMutableSet, NSMutableArray, _SFSiteMetadataManager;
@protocol OS_dispatch_queue, _SFPasswordIconControllerDelegate;

#import <Foundation/Foundation.h>


@interface _SFPasswordIconController : NSObject {
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


@property (weak, nonatomic) NSObject<_SFPasswordIconControllerDelegate> *delegate; // ivar: _delegate


+(struct CGSize )preferredIconSize;
-(id)backgroundColorForDomain:(id)arg0 ;
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