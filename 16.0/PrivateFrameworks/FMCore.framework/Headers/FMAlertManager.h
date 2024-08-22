// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FMALERTMANAGER_H
#define FMALERTMANAGER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface FMAlertManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *activeAlerts; // ivar: _activeAlerts
@property (retain, nonatomic) NSMutableDictionary *activeCFNotificationsByCategory; // ivar: _activeCFNotificationsByCategory


+(id)sharedInstance;
-(id)_xpcTransactionNameFor:(id)arg0 ;
-(id)init;
-(id)initSingleton;
-(void)activateAlert:(id)arg0 ;


@end


#endif