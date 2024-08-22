// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STLOCATIONSHARINGMODIFICATIONCLIENT_H
#define STLOCATIONSHARINGMODIFICATIONCLIENT_H


#import <Foundation/Foundation.h>

#import "STManagementState.h"

@interface STLocationSharingModificationClient : NSObject

@property (readonly) STManagementState *managementState; // ivar: _managementState


-(id)init;
-(void)isLocationSharingModificationAllowedForUserID:(id)arg0 completionHandler:(id)arg1 ;
-(void)setLocationSharingModificationAllowed:(BOOL)arg0 forUserID:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif