// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUCSSCHEDULER_H
#define SUCSSCHEDULER_H

@class _CDContextualChangeRegistration;
@protocol _CDContext;

#import <Foundation/Foundation.h>


@interface SUCSScheduler : NSObject {
    id<_CDContext> *_context;
    _CDContextualChangeRegistration *_registration;
}




+(BOOL)_callInProgress;
+(BOOL)_getBoolForKeyPath:(id)arg0 ;
+(BOOL)_hasNetworkConnection;
+(id)batteryLevelPredicate:(id)arg0 ;
+(id)carplayPredicate:(BOOL)arg0 ;
+(id)networkPredicate:(BOOL)arg0 ;
+(id)phoneCallPredicate:(BOOL)arg0 ;
+(int)_batteryLevel;
+(int)_getIntForKeyPath:(id)arg0 ;
-(id)init;
-(void)dealloc;
-(void)registerInstallAlertConditionsWithHandler:(id)arg0 ;
-(void)unregisterInstallationAlertAction;


@end


#endif