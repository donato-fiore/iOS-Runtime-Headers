// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FMFLOCATIONSHARINGVIEWCONTROLLER_H
#define FMFLOCATIONSHARINGVIEWCONTROLLER_H

@class PSListController, NSArray, NSString, NSMutableDictionary, UIAlertController, FMFHandle, NSSet;
@protocol FMFSessionDelegateInternal, OS_dispatch_queue;



@interface FMFLocationSharingViewController : PSListController <FMFSessionDelegateInternal>



@property (retain, nonatomic) NSArray *allFollowersHandles; // ivar: _allFollowersHandles
@property (nonatomic) BOOL areMeDeviceInfoLoaded; // ivar: _areMeDeviceInfoLoaded
@property (nonatomic) BOOL areSpecifiersLoaded; // ivar: _areSpecifiersLoaded
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *deviceSpecifiers; // ivar: _deviceSpecifiers
@property (retain, nonatomic) NSMutableDictionary *dsidToFamilyPhoto; // ivar: _dsidToFamilyPhoto
@property (retain, nonatomic) NSArray *familyMembers; // ivar: _familyMembers
@property (retain, nonatomic) NSArray *familySpecifiers; // ivar: _familySpecifiers
@property (retain, nonatomic) NSArray *followersHandles; // ivar: _followersHandles
@property (retain, nonatomic) NSArray *followersSpecifiers; // ivar: _followersSpecifiers
@property (retain, nonatomic) UIAlertController *genericErrorAlert; // ivar: _genericErrorAlert
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *hashedFamilyDsids; // ivar: _hashedFamilyDsids
@property (nonatomic) BOOL isAccessibilitySize; // ivar: _isAccessibilitySize
@property (nonatomic) BOOL isFindMyDeviceOn; // ivar: _isFindMyDeviceOn
@property (nonatomic) BOOL isMyLocationEnabled; // ivar: _isMyLocationEnabled
@property (retain, nonatomic) FMFHandle *lastSelectedHandle; // ivar: _lastSelectedHandle
@property (nonatomic) BOOL meDeviceChangePending; // ivar: _meDeviceChangePending
@property (retain, nonatomic) NSSet *meDevices; // ivar: _meDevices
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *specifiersQueue; // ivar: _specifiersQueue
@property (readonly) Class superclass;
@property (nonatomic) BOOL useFamilyCirclePhotos; // ivar: _useFamilyCirclePhotos
@property (nonatomic) BOOL useFamilyCirclePhotosLoaded; // ivar: _useFamilyCirclePhotosLoaded


-(BOOL)_isFamilyMemberAFollower:(id)arg0 ;
-(BOOL)_isHandleAFollower:(id)arg0 ;
-(BOOL)noMeDeviceSelected:(id)arg0 ;
-(BOOL)phoneNumberMatches:(id)arg0 phone2:(id)arg1 ;
-(id)_defaultSpecifiers;
-(id)_findMyDeviceSpecifiers;
-(id)_findMyDeviceStatus:(id)arg0 ;
-(id)_followerHandleWithHashedDSID:(id)arg0 ;
-(id)_shareSwitchEnabled:(id)arg0 ;
-(id)_specifierForFamilyMember:(id)arg0 ;
-(id)_specifierForHandle:(id)arg0 ;
-(id)allHandlesMatchingABCardForSelectedHandle:(id)arg0 ;
-(id)formatStringForHours:(NSInteger)arg0 minutes:(NSInteger)arg1 ;
-(id)genericAlertController;
-(id)identifierForHandle:(id)arg0 ;
-(id)init;
-(id)monogramForHandle:(id)arg0 ;
-(id)offerTimeRemaining:(CGFloat)arg0 ;
-(id)reverseString:(id)arg0 ;
-(id)sortedFollowersWithCombinedRecords:(id)arg0 ;
-(id)specifiers;
-(id)stringByKeepingCharacterSet:(id)arg0 inString:(id)arg1 ;
-(void)_findMyDeviceSpecifierWasTapped:(id)arg0 ;
-(void)_loadFamilyMemberPhotos;
-(void)_loadFamilyMembers:(BOOL)arg0 ;
-(void)_loadSpecifiers;
-(void)_meDeviceSpecifierWasTapped:(id)arg0 ;
-(void)_pushAddressBookUIForHandle:(id)arg0 ;
-(void)_setShareSwitchEnabled:(id)arg0 forSpecifier:(id)arg1 ;
-(void)_showFamilyMemberDetails:(id)arg0 ;
-(void)_showHandleDetails:(id)arg0 ;
-(void)addRemoveActionToContactViewController:(id)arg0 ;
-(void)addShareActionToContactViewController:(id)arg0 ;
-(void)contactStoreDidChange:(id)arg0 ;
-(void)dealloc;
-(void)didChangeActiveLocationSharingDevice:(id)arg0 ;
-(void)didReceiveServerError:(id)arg0 ;
-(void)didStartSharingMyLocationWithHandle:(id)arg0 ;
-(void)didStopSharingMyLocationWithHandle:(id)arg0 ;
-(void)didUpdateActiveDeviceList:(id)arg0 ;
-(void)didUpdateHidingStatus:(BOOL)arg0 ;
-(void)displayAlertController:(id)arg0 ;
-(void)networkReachabilityUpdated:(BOOL)arg0 ;
-(void)reloadSpecifiersOnMainQueue;
-(void)removeFollower:(id)arg0 ;
-(void)saveActiveDeviceSelection;
-(void)shareMyLocation:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateFindMyDeviceStatus;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif