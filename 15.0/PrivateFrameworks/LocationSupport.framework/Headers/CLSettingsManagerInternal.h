// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLSETTINGSMANAGERINTERNAL_H
#define CLSETTINGSMANAGERINTERNAL_H

@class NSMutableSet, NSString, NSMutableDictionary;
@protocol CLSettingsManagerProtocol;


#import "CLIntersiloService.h"

@interface CLSettingsManagerInternal : CLIntersiloService <CLSettingsManagerProtocol>



@property (retain) NSMutableSet *clients; // ivar: _clients
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSMutableDictionary *settingsDictionary; // ivar: _settingsDictionary
@property (readonly) Class superclass;
@property (nonatomic) BOOL valid;


+(id)getSilo;
+(void)becameFatallyBlocked:(id)arg0 index:(NSUInteger)arg1 ;
+(void)performSyncOnSilo:(id)arg0 invoker:(id)arg1 ;
-(id)syncgetSetValue:(id)arg0 forKey:(id)arg1 withoutNotifying:(id)arg2 ;
-(id)syncgetSettingsAndRegisterForUpdates:(id)arg0 ;
-(void)beginService;
-(void)endService;
-(void)flush;
-(void)refresh;
-(void)unregisterForUpdates:(id)arg0 ;
-(void)updateClientsWithDictionary:(id)arg0 ;


@end


#endif