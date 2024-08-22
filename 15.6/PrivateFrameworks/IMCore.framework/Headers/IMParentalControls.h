// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMPARENTALCONTROLS_H
#define IMPARENTALCONTROLS_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface IMParentalControls : NSObject

@property (readonly, nonatomic) BOOL _disableAV; // ivar: _disableAV
@property (readonly, nonatomic) BOOL _forceChatLogging; // ivar: _forceChatLogging
@property (readonly, nonatomic) NSMutableDictionary *_parentalControls; // ivar: _parentalControls
@property (readonly, nonatomic) BOOL active; // ivar: _active
@property (readonly, nonatomic) BOOL disableAV;
@property (readonly, nonatomic) BOOL forceChatLogging;
@property (nonatomic) BOOL shouldPostNotifications; // ivar: _shouldPostNotifications


+(id)objectForKey:(id)arg0 ;
+(id)standardControls;
-(BOOL)accountHasAllowlist:(id)arg0 ;
-(BOOL)accountIsEnabled:(id)arg0 ;
-(BOOL)disableAccount:(id)arg0 ;
-(BOOL)disableService:(id)arg0 ;
-(BOOL)forceAllowlistForAccount:(id)arg0 ;
-(BOOL)forceAllowlistForService:(id)arg0 ;
-(BOOL)okToConnectAccount:(id)arg0 ;
-(id)_serviceWithName:(id)arg0 ;
-(id)allowlistForAccount:(id)arg0 ;
-(id)allowlistForService:(id)arg0 ;
-(id)init;
-(void)_managedPrefsNotification:(id)arg0 ;
-(void)_updateParentalSettings;
-(void)dealloc;


@end


#endif