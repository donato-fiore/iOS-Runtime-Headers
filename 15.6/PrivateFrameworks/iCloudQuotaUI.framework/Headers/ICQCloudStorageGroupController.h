// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICQCLOUDSTORAGEGROUPCONTROLLER_H
#define ICQCLOUDSTORAGEGROUPCONTROLLER_H

@class PSListController, NSMutableArray, PSSpecifier, PSTableCell, PSCloudStorageOffersManager, NSString;
@protocol PSCloudStorageOffersManagerDelegate, RUITableViewRowDelegate, DelayedPushDelegate, CloudStorageGroupControllerProtocol;

#import <Foundation/Foundation.h>

#import "ICQQuotaInfoResponse.h"
#import "ICQPreferencesRemoteUIDelegate.h"

@interface ICQCloudStorageGroupController : NSObject <PSCloudStorageOffersManagerDelegate, RUITableViewRowDelegate, DelayedPushDelegate, CloudStorageGroupControllerProtocol>

 {
    PSListController *_listController;
    NSMutableArray *_specifiers;
    PSSpecifier *_managedStorage;
    BOOL _buyMore;
    BOOL _quotaFetchInProgress;
    BOOL _quotaCached;
    BOOL _quotaFailed;
    BOOL _loadingStorage;
    BOOL _loadingCommerce;
    BOOL _delayedEnterManageStorage;
    ICQQuotaInfoResponse *_quotaInfo;
    ICQPreferencesRemoteUIDelegate *_storageDelegate;
    PSTableCell *_remoteLoadingCell;
    PSCloudStorageOffersManager *_storageOffersManager;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)backupInfoHeaders;
+(id)backupInfoHeadersForAccount:(id)arg0 ;
-(BOOL)hasPurchasedMoreStorage;
-(Class)tableCellClassForTableViewRow:(id)arg0 ;
-(id)availableStorage:(id)arg0 ;
-(id)init;
-(id)sourceURLForRUITableViewRow;
-(id)specifiersWithBuyMore:(BOOL)arg0 ;
-(id)textFieldRow:(id)arg0 changeCharactersInRange:(struct _NSRange )arg1 replacementString:(id)arg2 ;
-(id)totalStorage:(id)arg0 ;
-(void)addGroupToListController:(id)arg0 ;
-(void)cancelLoaders;
-(void)clearQuotaCache;
-(void)dealloc;
-(void)enterBuyStorage;
-(void)enterBuyStorageWhenPossible;
-(void)enterManageStorageWhenPossible;
-(void)enterManagedStorage:(id)arg0 ;
-(void)getQuotaInfo;
-(void)groupRemovedFromListController;
-(void)loadFailed:(id)arg0 withError:(id)arg1 ;
-(void)loadFinished:(id)arg0 ;
-(void)loadStarted:(id)arg0 ;
-(void)manager:(id)arg0 loadDidFailWithError:(id)arg1 ;
-(void)manager:(id)arg0 willPresentViewController:(id)arg1 ;
-(void)quotaInfoChanged;
-(void)reachabilityChanged:(id)arg0 ;
-(void)remoteUIDelegate:(id)arg0 didCreatePage:(id)arg1 forAccount:(id)arg2 inObjectModel:(id)arg3 ;
-(void)remoteUIDelegate:(id)arg0 didCreatePage:(id)arg1 inObjectModel:(id)arg2 ;
-(void)rowDidChange:(id)arg0 action:(int)arg1 ;
-(void)rowDidEndEditing:(id)arg0 ;
-(void)rowIsFirstResponder:(id)arg0 ;
-(void)startSpinnerInCellForSpecifier:(id)arg0 ;
-(void)stopSpinner;
-(void)updateManagedStorageState;


@end


#endif