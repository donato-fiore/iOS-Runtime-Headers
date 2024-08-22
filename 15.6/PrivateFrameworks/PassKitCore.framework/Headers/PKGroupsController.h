// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKGROUPSCONTROLLER_H
#define PKGROUPSCONTROLLER_H

@class NSSet, NSMutableArray, NSMutableDictionary, NSArray, NSString;
@protocol PKPassLibraryDelegate, PKGroupsControllerDelegate;

#import <Foundation/Foundation.h>

#import "PKPassLibrary.h"
#import "PKPaymentService.h"
#import "PKCatalog.h"

@interface PKGroupsController : NSObject <PKPassLibraryDelegate>

 {
    PKPassLibrary *_passLibrary;
    PKPaymentService *_paymentService;
    NSUInteger _filters;
    NSUInteger _passTypeMask;
    NSSet *_allowedPassUniqueIDs;
    NSMutableArray *_groups;
    NSMutableDictionary *_passesByUniqueID;
    NSMutableDictionary *_groupsByGroupID;
    NSMutableDictionary *_indicesByGroupID;
    NSMutableDictionary *_groupIDsByPassUniqueID;
    NSMutableDictionary *_groupIDsByExpiredPassUniqueID;
    BOOL _suppressRemoteUpdates;
    BOOL _enqueueRemoteUpdates;
    PKCatalog *_catalogBeforeReordering;
    NSMutableArray *_enqueuedUpdates;
    NSArray *_localPasses;
    NSSet *_expressPassesInformation;
    BOOL _limitedMode;
    BOOL _activePassesOnly;
    int _expressPassesInformationToken;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKGroupsControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *expiredSectionPasses; // ivar: _expiredSectionPasses
@property (readonly, nonatomic) NSArray *filteredPassUniqueIDs; // ivar: _filteredPassUniqueIDs
@property (readonly, nonatomic) BOOL filteringEnabled;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL reorderingEnabled; // ivar: _reorderingEnabled
@property (nonatomic) BOOL shouldSeparatePaymentPasses; // ivar: _shouldSeparatePaymentPasses
@property (readonly) Class superclass;


-(BOOL)_groupIDIsNew:(id)arg0 ;
-(NSUInteger)_destinationIndexForGroupID:(id)arg0 catalogGroups:(id)arg1 skippingNewGroupsAfterIndex:(NSUInteger)arg2 ;
-(NSUInteger)_indexOfGroupID:(id)arg0 ;
-(NSUInteger)groupCount;
-(NSUInteger)groupIndexForPassUniqueID:(id)arg0 ;
-(NSUInteger)indexOfGroup:(id)arg0 ;
-(NSUInteger)indexOfSeparationGroup;
-(id)_copyRemoteCatalog;
-(id)_displayablePassesDictionaryFromPasses:(id)arg0 withCatalog:(id)arg1 andPassAnnotations:(id)arg2 ;
-(id)_displayablePassesDictionaryFromSet:(id)arg0 withCatalog:(id)arg1 ;
-(id)_groupsExcludingTypePayment;
-(id)_updateAndCreateGroupsWithCatalog:(id)arg0 passesByUniqueID:(id)arg1 notify:(BOOL)arg2 ;
-(id)groupAtIndex:(NSUInteger)arg0 ;
-(id)groups;
-(id)init;
-(id)initLimited;
-(id)initWithPassLibrary:(id)arg0 ;
-(id)initWithPassTypeMask:(NSUInteger)arg0 passFilters:(NSUInteger)arg1 allowedPassUniqueIDs:(id)arg2 ;
-(id)passWithUniqueID:(id)arg0 ;
-(id)snapshotFetchOptions;
-(void)_fixIndex:(NSUInteger)arg0 ;
-(void)_fixIndicesFrom:(NSUInteger)arg0 ;
-(void)_fixIndicesFrom:(NSUInteger)arg0 through:(NSUInteger)arg1 ;
-(void)_insertGroup:(id)arg0 atIndex:(NSUInteger)arg1 notify:(BOOL)arg2 ;
-(void)_insertLocalGroupsIntoCatalog:(id)arg0 withPassesByUniqueID:(id)arg1 ;
-(void)_moveGroup:(id)arg0 fromIndex:(NSUInteger)arg1 toIndex:(NSUInteger)arg2 notify:(BOOL)arg3 ;
-(void)_performEnqueuedUpdates;
-(void)_performOrEnqueueUpdate:(id)arg0 ;
-(void)_placeGroup:(id)arg0 atIndex:(NSUInteger)arg1 notify:(BOOL)arg2 ;
-(void)_removeGroup:(id)arg0 notify:(BOOL)arg1 ;
-(void)_updateStateWithCatalog:(id)arg0 passes:(id)arg1 annotations:(id)arg2 notify:(BOOL)arg3 ;
-(void)_updateStateWithCatalog:(id)arg0 passes:(id)arg1 displayablePasses:(id)arg2 notify:(BOOL)arg3 ;
-(void)addLocalPasses:(id)arg0 ;
-(void)dealloc;
-(void)enableRemoteUpdates;
-(void)getSnapshotWithOptions:(id)arg0 synchronously:(BOOL)arg1 handler:(id)arg2 ;
-(void)handleUserPassDelete:(id)arg0 ;
-(void)handleUserPassRecover:(id)arg0 ;
-(void)handleUserPassesDelete:(id)arg0 ;
-(void)loadGroupsSynchronously;
-(void)loadGroupsWithCompletion:(id)arg0 ;
-(void)moveGroupAtIndex:(NSUInteger)arg0 toIndex:(NSUInteger)arg1 ;
-(void)movePass:(id)arg0 inGroup:(id)arg1 toIndex:(NSUInteger)arg2 ;
-(void)objectSettingsDidChangeNotification:(id)arg0 ;
-(void)passLibrary:(id)arg0 receivedUpdatedCatalog:(id)arg1 passes:(id)arg2 ;
-(void)processFetchedSnapshot:(id)arg0 withOptions:(id)arg1 synchronously:(BOOL)arg2 notify:(BOOL)arg3 completion:(id)arg4 ;
-(void)reloadGroups;
-(void)reloadGroupsAndNotify:(BOOL)arg0 completion:(id)arg1 ;
-(void)reloadGroupsWithCompletion:(id)arg0 ;
-(void)suppressRemoteUpdates:(BOOL)arg0 ;
-(void)updateStateWithSnapshot:(id)arg0 options:(id)arg1 notify:(BOOL)arg2 ;


@end


#endif