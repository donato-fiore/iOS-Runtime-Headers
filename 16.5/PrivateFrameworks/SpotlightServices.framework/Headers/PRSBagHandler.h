// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRSBAGHANDLER_H
#define PRSBAGHANDLER_H

@class NSMutableArray, PARBag, NSArray, NSSet, NSString, GEOUserSessionEntity, NSMutableDictionary;
@protocol OS_dispatch_group, OS_dispatch_queue, PRSSessionController;

#import <Foundation/Foundation.h>

#import "SSPlistDataReader.h"

@interface PRSBagHandler : NSObject {
    BOOL _waitingForLocation;
    NSObject<OS_dispatch_group> *_locationGroup;
    id *_lockObject;
    NSMutableArray *_tasks;
    PARBag *_bag;
    NSObject<OS_dispatch_queue> *_bagQueue;
}


@property (nonatomic) BOOL active; // ivar: _active
@property (retain) NSArray *anonymousMetadataUndesiredBundleIDs; // ivar: _anonymousMetadataUndesiredBundleIDs
@property (retain, nonatomic) NSSet *appBlocklist; // ivar: _appBlocklist
@property (readonly, nonatomic, getter=isBagEnabled) BOOL bagEnabled; // ivar: _bagEnabled
@property (retain) SSPlistDataReader *cep_server_values; // ivar: _cep_server_values
@property (weak) NSObject<PRSSessionController> *client; // ivar: _client
@property (nonatomic) BOOL collectAnonymousData; // ivar: _collectAnonymousData
@property (nonatomic) BOOL collectScores; // ivar: _collectScores
@property (nonatomic) BOOL disableAsTypedSuggestion; // ivar: _disableAsTypedSuggestion
@property (retain, nonatomic) NSArray *enabledDomains; // ivar: _enabledDomains
@property (retain, nonatomic) NSString *fteContinueString; // ivar: _fteContinueString
@property (retain, nonatomic) NSString *fteLearnMoreString; // ivar: _fteLearnMoreString
@property (retain, nonatomic) NSString *fteLocString; // ivar: _fteLocString
@property (readonly) GEOUserSessionEntity *geoUserSessionEntity; // ivar: _geoUserSessionEntity
@property (readonly, nonatomic) NSString *lookupFirstUseDescription1; // ivar: _lookupFirstUseDescription1
@property (readonly, nonatomic) NSString *lookupFirstUseDescription2; // ivar: _lookupFirstUseDescription2
@property (readonly, nonatomic) NSString *lookupFirstUseLearnMore; // ivar: _lookupFirstUseLearnMore
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *resourceFetchQueue; // ivar: _resourceFetchQueue
@property (retain, nonatomic) NSMutableDictionary *resourceMetadata; // ivar: _resourceMetadata
@property (nonatomic) BOOL resourceMetadataNeedsWrite; // ivar: _resourceMetadataNeedsWrite
@property (retain, nonatomic) NSString *resourceMetadataPath; // ivar: _resourceMetadataPath
@property CGFloat searchRenderTimeout; // ivar: _searchRenderTimeout
@property (nonatomic) NSInteger status; // ivar: _status
@property (retain, nonatomic) NSArray *suggestionRankerModelParams; // ivar: _suggestionRankerModelParams
@property CGFloat suggestionsRenderTimeout; // ivar: _suggestionsRenderTimeout
@property (nonatomic) BOOL use2LayerRanking; // ivar: _use2LayerRanking


+(id)sharedHandler;
+(void)initialize;
-(BOOL)isEnabled;
-(BOOL)isLocaleSupported:(id)arg0 ;
-(BOOL)searchSupported:(BOOL)arg0 ;
-(BOOL)sessionReady;
-(id)_base64CEPDataNoCopyFromFeatureData:(id)arg0 ;
-(id)applicationNameForUserAgent;
-(id)excludedDomainIdentifiers;
-(id)init;
-(id)supportedServices;
-(id)userId;
-(void)_processQIFeatures:(id)arg0 forClient:(id)arg1 ;
-(void)activate;
-(void)deactivate;
-(void)fetchModifiedResourceFromSession:(id)arg0 resource:(id)arg1 completion:(id)arg2 ;
-(void)getFTEStringsWithReply:(id)arg0 ;
-(void)parseCEPFromData:(id)arg0 forClient:(id)arg1 ;
-(void)refreshGUID;
-(void)removeTask:(id)arg0 ;
-(void)triggerTaskWhenReady:(id)arg0 ;
-(void)updateFromSession:(id)arg0 bag:(id)arg1 forClient:(id)arg2 error:(id)arg3 ;
-(void)updateWithBagDictionary:(id)arg0 error:(id)arg1 ;


@end


#endif