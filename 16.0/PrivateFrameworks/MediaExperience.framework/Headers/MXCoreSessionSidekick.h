// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MXCORESESSIONSIDEKICK_H
#define MXCORESESSIONSIDEKICK_H

@class NSString;


#import "MXCoreSessionBase.h"

@interface MXCoreSessionSidekick : MXCoreSessionBase

@property (retain, nonatomic) NSString *remoteDeviceID; // ivar: _remoteDeviceID


-(BOOL)isCategoryValid:(id)arg0 ;
-(BOOL)isModeValidForCategory:(id)arg0 ;
-(id)_initWithRemoteDeviceID:(id)arg0 ;
-(id)initWithRemoteDeviceID:(id)arg0 ;
-(int)_activate;
-(int)_copyPropertyForKey:(id)arg0 valueOut:(*id)arg1 ;
-(int)_deactivate:(BOOL)arg0 postInterruptionNotification:(BOOL)arg1 ;
-(int)_setPropertyForKey:(id)arg0 value:(id)arg1 ;
-(int)activate;
-(int)copyPropertyForKey:(id)arg0 valueOut:(*id)arg1 ;
-(int)deactivate:(BOOL)arg0 postInterruptionNotification:(BOOL)arg1 ;
-(int)setPropertyForKey:(id)arg0 value:(id)arg1 ;
-(void)dealloc;


@end


#endif