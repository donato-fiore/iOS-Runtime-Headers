// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STMANAGEMENTSTATEOBSERVER_H
#define STMANAGEMENTSTATEOBSERVER_H

@class NSNumber;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "STManagementState.h"
#import "STManagementStateObserver.h"

@interface STManagementStateObserver : NSObject

@property NSInteger contactManagementState; // ivar: _contactManagementState
@property (readonly, copy) NSNumber *dsid; // ivar: _dsid
@property (retain) STManagementState *managementState; // ivar: _managementState
@property (retain) STManagementStateObserver *me; // ivar: _me
@property (readonly) int screenTimeSettingsChangeNotifyToken; // ivar: _screenTimeSettingsChangeNotifyToken
@property (readonly) NSObject<OS_dispatch_queue> *screenTimeSettingsChangeQueue; // ivar: _screenTimeSettingsChangeQueue


+(void)createObserverWithDSID:(id)arg0 completionHandler:(id)arg1 ;
-(id)_initWithDSID:(id)arg0 ;
-(void)dealloc;


@end


#endif