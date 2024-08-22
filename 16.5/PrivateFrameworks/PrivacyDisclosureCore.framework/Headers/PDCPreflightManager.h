// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PDCPREFLIGHTMANAGER_H
#define PDCPREFLIGHTMANAGER_H

@protocol PDCConsentStore, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PDCPreflightManager : NSObject

@property (retain, nonatomic) NSObject<PDCConsentStore> *consentStore; // ivar: _consentStore
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


+(BOOL)isPreflightFeatureEnabled;
-(BOOL)_requiresPreflightForApplication:(id)arg0 ;
-(BOOL)_requiresPreflightForApplicationRecord:(id)arg0 ;
-(BOOL)requiresPreflightForApplication:(id)arg0 ;
-(BOOL)requiresPreflightForApplicationRecord:(id)arg0 ;
-(id)_preflightLaunchForApplication:(id)arg0 withCompletionHandler:(id)arg1 ;
-(id)initWithTargetQueue:(id)arg0 ;
-(id)initWithTargetQueue:(id)arg0 consentStore:(id)arg1 ;
-(id)preflightLaunchForApplication:(id)arg0 withCompletionHandler:(id)arg1 ;


@end


#endif