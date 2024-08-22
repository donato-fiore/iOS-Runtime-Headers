// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FASAVESCREENTIMESETTINGSCACHEREQUEST_H
#define FASAVESCREENTIMESETTINGSCACHEREQUEST_H

@class NSNumber;


#import "FAFamilyCircleRequest.h"
#import "FAScreentimeSettingsObjectCache.h"

@interface FASaveScreenTimeSettingsCacheRequest : FAFamilyCircleRequest

@property (copy) NSNumber *memberDSID; // ivar: _memberDSID
@property (readonly, copy) FAScreentimeSettingsObjectCache *object; // ivar: _object


-(id)initWithFamilyMemberDSID:(id)arg0 screentimeObject:(id)arg1 ;
-(void)startRequestWithCompletionHandler:(id)arg0 ;


@end


#endif