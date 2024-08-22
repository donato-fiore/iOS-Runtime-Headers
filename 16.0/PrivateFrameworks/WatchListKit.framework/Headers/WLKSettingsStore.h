// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WLKSETTINGSSTORE_H
#define WLKSETTINGSSTORE_H

@class NSString, NSMutableArray, NSUserDefaults, NSXPCConnection, NSDate, NSNumber, NSSet;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WLKSettingsStore : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_readWriteQueue;
    NSString *_pushToken;
    NSString *_accountID;
    BOOL _optedIn;
    BOOL _migratediOS;
    BOOL _migratedtvOS;
    NSMutableArray *_apps;
    NSUserDefaults *_defaultsAccessor;
    int _didChangeNotificationToken;
    int _userDefaultsDidChangeNotificationToken;
    NSXPCConnection *_connection;
}


@property BOOL hasOutstandingChanges; // ivar: _hasOutstandingChanges
@property int ignoreChangesCount; // ivar: _ignoreChangesCount
@property (readonly, copy, nonatomic) NSDate *lastSyncDate; // ivar: _lastSyncDate
@property (readonly, copy, nonatomic) NSDate *lastSyncToCloudDate; // ivar: _lastSyncToCloudDate
@property (nonatomic) BOOL migratediOS;
@property (nonatomic) BOOL migratedtvOS;
@property (nonatomic) BOOL optedIn;
@property (copy, nonatomic) NSNumber *optedInVal; // ivar: _optedInVal
@property (nonatomic) BOOL privateModeEnabled;
@property (copy, nonatomic) NSString *pushToken;
@property (nonatomic) BOOL sportsScoreSpoilersAllowed;
@property (readonly, copy, nonatomic) NSSet *suppressedSportsEventIDs;
@property (nonatomic) BOOL upNextLockupsUseCoverArt;


+(id)keyPathsForValuesAffectingValueForKey:(id)arg0 ;
+(id)sharedSettings;
+(void)synchronizeSettingsDefaultsForKeys:(id)arg0 ;
-(BOOL)synchronize:(NSUInteger)arg0 ;
-(id)_appsForChannelID:(id)arg0 ;
-(id)_connection;
-(id)_dictionaryOnDisk;
-(id)_dictionaryRepresentation;
-(id)_dictionaryRepresentationCopyingItems:(BOOL)arg0 ;
-(id)_dictionaryRepresentationDataOnly;
-(id)_supportPath;
-(id)_watchListAppsFiltered;
-(id)consentedBrands;
-(id)deniedBrands;
-(id)description;
-(id)init;
-(id)settingsForChannelID:(id)arg0 externalID:(id)arg1 ;
-(id)watchListApps;
-(id)watchListAppsFiltered;
-(void)_activeAccountChangedNotification:(id)arg0 ;
-(void)_attemptCullingOfObsoleteApp:(id)arg0 ;
-(void)_dictionaryOnDisk:(id)arg0 ;
-(void)_readFromDisk;
-(void)_removeWatchListApp:(id)arg0 ;
-(void)_tickleKVO;
-(void)_updateDisplayNamesForUI:(id)arg0 ;
-(void)_writeToDisk;
-(void)_writeToDisk:(id)arg0 completion:(id)arg1 ;
-(void)beginIgnoringChanges;
-(void)clearAllSportsNotificationSuppression;
-(void)dealloc;
-(void)endIgnoringChanges;
-(void)forceUpdateWithCompletion:(id)arg0 ;
-(void)refresh;
-(void)setName:(id)arg0 forChannelID:(id)arg1 externalID:(id)arg2 ;
-(void)setSportsNotificationSuppression:(BOOL)arg0 forEventID:(id)arg1 ;
-(void)setStatus:(NSUInteger)arg0 forChannelID:(id)arg1 externalID:(id)arg2 ;
-(void)synchronize:(NSUInteger)arg0 completion:(id)arg1 ;


@end


#endif