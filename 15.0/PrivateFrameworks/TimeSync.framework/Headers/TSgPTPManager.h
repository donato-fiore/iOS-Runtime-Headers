// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSGPTPMANAGER_H
#define TSGPTPMANAGER_H

@class IOKService, IOKConnection;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "TSgPTPClock.h"

@interface TSgPTPManager : NSObject {
    IOKService *_service;
    IOKConnection *_connection;
    TSgPTPClock *_systemDomain;
    NSObject<OS_dispatch_queue> *_systemDomainQueue;
}


@property (readonly, nonatomic) NSUInteger airPlayPTPInstanceClockIdentifier;
@property (readonly, nonatomic) NSUInteger avbPTPInstance0ClockIdentifier;
@property (readonly, nonatomic) NSUInteger avbPTPInstance1ClockIdentifier;
@property (readonly, nonatomic) NSUInteger avbPTPInstance2ClockIdentifier;
@property (readonly, nonatomic) NSUInteger avbPTPInstance3ClockIdentifier;
@property (readonly, nonatomic) NSUInteger copresencePTPInstanceClockIdentifier;
@property (readonly, retain, nonatomic) TSgPTPClock *systemDomain;
@property (readonly, nonatomic) NSUInteger systemDomainClockIdentifier; // ivar: _systemDomainClockIdentifier


+(id)diagnosticDescriptionForService:(id)arg0 withIndent:(id)arg1 ;
+(id)diagnosticInfoForService:(id)arg0 ;
+(id)gPTPManager;
+(id)sharedgPTPManager;
+(id)sharedgPTPManagerSyncWithTimeout:(NSUInteger)arg0 ;
+(void)notifyWhengPTPManagerIsAvailable:(id)arg0 ;
-(BOOL)addAVBDomainIndex:(unsigned short)arg0 identifier:(*NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)addAVBPTPInstanceIndex:(unsigned short)arg0 identifier:(*NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)addAirPlayPTPInstance:(*NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)addCopresencePTPInstance:(*NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)addDomain:(*NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)addPTPInstance:(*NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)addTimeOfDayPTPInstance:(*NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)removeAVBDomainWithIndex:(unsigned short)arg0 error:(*id)arg1 ;
-(BOOL)removeAVBPTPInstanceWithIndex:(unsigned short)arg0 error:(*id)arg1 ;
-(BOOL)removeAirPlayPTPInstanceWithError:(*id)arg0 ;
-(BOOL)removeCopresencePTPInstanceWithError:(*id)arg0 ;
-(BOOL)removeDomainWithIdentifier:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)removePTPInstanceWithIdentifier:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)init;
-(void)dealloc;


@end


#endif