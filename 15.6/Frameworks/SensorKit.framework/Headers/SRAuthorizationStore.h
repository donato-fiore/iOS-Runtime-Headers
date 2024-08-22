// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SRAUTHORIZATIONSTORE_H
#define SRAUTHORIZATIONSTORE_H

@class NSHashTable, NSSet, NSDictionary;
@protocol SRTCCStore, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SRAuthorizationStore : NSObject {
    int _notifyToken;
    NSHashTable *_readerAuthorizationDelegates;
    NSHashTable *_writerAuthorizationDelegates;
    id<SRTCCStore> *_tccStore;
    NSSet *_sensors;
}


@property (copy) NSDictionary *readerAuthorizationGroups; // ivar: _readerAuthorizationGroups
@property (copy) NSDictionary *readerAuthorizationValues; // ivar: _readerAuthorizationValues
@property (copy) NSDictionary *readerLastModifiedAuthorizationTimes; // ivar: _readerLastModifiedAuthorizationTimes
@property BOOL sensorKitActive; // ivar: _sensorKitActive
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *updateQueue; // ivar: _updateQueue
@property (copy) NSDictionary *writerAuthorizationGroups; // ivar: _writerAuthorizationGroups
@property (copy) NSDictionary *writerAuthorizationValues; // ivar: _writerAuthorizationValues


+(id)allSensorsStore;
+(id)sharedAuthorizationStoreForSensors:(id)arg0 ;
+(void)initialize;
-(BOOL)checkAccessForService:(id)arg0 auditToken:(struct ? )arg1 ;
-(BOOL)sensorHasReaderAuthorization:(id)arg0 ;
-(BOOL)sensorHasReaderAuthorization:(id)arg0 forBundleId:(id)arg1 ;
-(BOOL)setAuthorizationForBundleId:(id)arg0 service:(id)arg1 value:(BOOL)arg2 ;
-(BOOL)setAuthorizationForBundleId:(id)arg0 service:(id)arg1 value:(BOOL)arg2 setOverride:(BOOL)arg3 ;
-(id)initWithSensors:(id)arg0 ;
-(id)readerAuthorizationBundleIdValues;
-(void)addReaderAuthorizationDelegate:(id)arg0 ;
-(void)addWriterAuthorizationDelegate:(id)arg0 ;
-(void)dealloc;
-(void)listenForAuthorizationUpdates:(BOOL)arg0 ;
-(void)removeReaderAuthorizationDelegate:(id)arg0 ;
-(void)removeWriterAuthorizationDelegate:(id)arg0 ;
-(void)resetAllAuthorizations;
-(void)resetAllAuthorizationsForBundleId:(id)arg0 ;
-(void)resetAuthorizationForService:(id)arg0 bundleId:(id)arg1 ;


@end


#endif