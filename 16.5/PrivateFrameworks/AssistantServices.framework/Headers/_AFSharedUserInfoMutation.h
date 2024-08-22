// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _AFSHAREDUSERINFOMUTATION_H
#define _AFSHAREDUSERINFOMUTATION_H

@class NSString;
@protocol AFSharedUserInfoMutating;

#import <Foundation/Foundation.h>

#import "AFSharedUserInfo.h"
#import "AFCompanionDeviceInfo.h"

@interface _AFSharedUserInfoMutation : NSObject <AFSharedUserInfoMutating>

 {
    AFSharedUserInfo *_base;
    NSString *_sharedUserId;
    NSString *_loggableSharedUserId;
    AFCompanionDeviceInfo *_companionDeviceInfo;
    BOOL _personalRequestsEnabled;
    BOOL _companionLinkReady;
    NSString *_homeUserId;
    NSString *_iCloudAltDSID;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)getCompanionLinkReady;
-(BOOL)getPersonalRequestsEnabled;
-(BOOL)isDirty;
-(id)getCompanionDeviceInfo;
-(id)getHomeUserId;
-(id)getICloudAltDSID;
-(id)getLoggableSharedUserId;
-(id)getSharedUserId;
-(id)initWithBase:(id)arg0 ;
-(void)setCompanionDeviceInfo:(id)arg0 ;
-(void)setCompanionLinkReady:(BOOL)arg0 ;
-(void)setHomeUserId:(id)arg0 ;
-(void)setICloudAltDSID:(id)arg0 ;
-(void)setLoggableSharedUserId:(id)arg0 ;
-(void)setPersonalRequestsEnabled:(BOOL)arg0 ;
-(void)setSharedUserId:(id)arg0 ;


@end


#endif