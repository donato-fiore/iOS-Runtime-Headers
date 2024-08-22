// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ANHOMEMANAGER_H
#define ANHOMEMANAGER_H

@class NSArray, HMAccessory, HMHome, NSString, NSMapTable, HMHomeManager, NSMutableArray, NSDate;
@protocol HMHomeManagerDelegate, HMHomeDelegate, HMHomeDelegatePrivate, HMAccessoryDelegatePrivate, ANAnalyticsDailyHomesProvider, DICHomeManagerProviding, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ANAccessorySettingsCache.h"

@interface ANHomeManager : NSObject <HMHomeManagerDelegate, HMHomeDelegate, HMHomeDelegatePrivate, HMAccessoryDelegatePrivate, ANAnalyticsDailyHomesProvider, DICHomeManagerProviding>



@property (readonly, nonatomic) ANAccessorySettingsCache *accessorySettingsCache; // ivar: _accessorySettingsCache
@property (readonly, nonatomic) NSArray *allHomes;
@property (readonly, nonatomic) HMAccessory *currentAccessory;
@property (readonly, nonatomic) HMHome *currentHome;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSMapTable *delegatesToQueues; // ivar: _delegatesToQueues
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HMHomeManager *homeManager; // ivar: _homeManager
@property (readonly, nonatomic) NSArray *homes;
@property (nonatomic) BOOL homesLoaded; // ivar: _homesLoaded
@property (readonly, nonatomic) NSMutableArray *homesLoadedCompletionHandlers; // ivar: _homesLoadedCompletionHandlers
@property (readonly, nonatomic) NSArray *homesSupportingAnnounce;
@property (readonly, nonatomic) NSDate *loadHomesStart; // ivar: _loadHomesStart
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // ivar: _serialQueue
@property (readonly) Class superclass;


+(NSUInteger)defaultHomeOptions;
+(id)bundleForLocationAuthorization;
+(id)shared;
-(BOOL)isEndpointWithUUID:(id)arg0 inRoomWithName:(id)arg1 ;
-(BOOL)isLocalDeviceInRoom:(id)arg0 ;
-(id)_findBestHomeNames;
-(id)_homeNamesForAccessoryForContext:(id)arg0 ;
-(id)_homesForContext:(id)arg0 ;
-(id)homeForID:(id)arg0 ;
-(id)homeNamesForContext:(id)arg0 ;
-(id)homeWithName:(id)arg0 ;
-(id)homesWithRoomNames:(id)arg0 ;
-(id)homesWithZoneNames:(id)arg0 ;
-(id)init;
-(id)initWithCaching:(BOOL)arg0 ;
-(id)initWithCaching:(BOOL)arg0 homeOptions:(NSUInteger)arg1 ;
-(void)_executeBlockForDelegates:(id)arg0 ;
-(void)_notifyManagerLoadedHomes:(id)arg0 ;
-(void)accessoryDidUpdateControllable:(id)arg0 ;
-(void)accessoryDidUpdateName:(id)arg0 ;
-(void)accessoryDidUpdateSupportsAudioAnalysis:(id)arg0 ;
-(void)accessoryDidUpdateSupportsDropIn:(id)arg0 ;
-(void)addDelegate:(id)arg0 queue:(id)arg1 ;
-(void)home:(id)arg0 didAddAccessory:(id)arg1 ;
-(void)home:(id)arg0 didAddUser:(id)arg1 ;
-(void)home:(id)arg0 didRemoveAccessory:(id)arg1 ;
-(void)home:(id)arg0 didRemoveUser:(id)arg1 ;
-(void)home:(id)arg0 didUpdateAccessControlForUser:(id)arg1 ;
-(void)homeDidUpdateAccessControlForCurrentUser:(id)arg0 ;
-(void)homeManager:(id)arg0 didAddHome:(id)arg1 ;
-(void)homeManager:(id)arg0 didRemoveHome:(id)arg1 ;
-(void)homeManagerDidUpdateHomes:(id)arg0 ;
-(void)loadHomeSynchronous;
-(void)loadHomes:(id)arg0 ;
-(void)registerDelegate:(id)arg0 queue:(id)arg1 ;


@end


#endif