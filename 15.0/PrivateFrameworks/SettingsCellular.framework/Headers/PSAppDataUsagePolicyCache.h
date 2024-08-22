// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PSAPPDATAUSAGEPOLICYCACHE_H
#define PSAPPDATAUSAGEPOLICYCACHE_H

@class NSCache;

#import <Foundation/Foundation.h>

#import "Logger.h"

@interface PSAppDataUsagePolicyCache : NSObject {
    Logger *_logger;
}


@property (retain, nonatomic) *__CTServerConnection ctServerConnection; // ivar: _ctServerConnection
@property (retain, nonatomic) NSCache *policyCache; // ivar: _policyCache


+(id)sharedInstance;
-(BOOL)setCellularUsagePolicy:(id)arg0 forBundle:(id)arg1 ;
-(BOOL)setUsagePoliciesForBundle:(id)arg0 cellular:(BOOL)arg1 wifi:(BOOL)arg2 ;
-(id)fetchUsagePolicyFor:(id)arg0 ;
-(id)getLogger;
-(id)init;
-(id)initPrivate;
-(id)usagePolicyFor:(id)arg0 ;
-(void)clearCache;
-(void)dealloc;
-(void)handlePolicyChangedNotification;
-(void)managedConfigurationProfileListDidChange;
-(void)managedConfigurationSettingsDidChange;
-(void)willEnterForeground;


@end


#endif