// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AFMULTIUSERCONNECTION_H
#define AFMULTIUSERCONNECTION_H

@class NSXPCConnection;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AFInstanceContext.h"

@interface AFMultiUserConnection : NSObject {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_targetQueue;
    AFInstanceContext *_instanceContext;
}




-(id)_connection;
-(id)_multiUserServiceWithErrorHandler:(id)arg0 ;
-(id)init;
-(id)initWithConnectionFactory:(id)arg0 ;
-(void)_clearConnection;
-(void)getConformingSharedUserIdForHomeUserId:(id)arg0 completion:(id)arg1 ;
-(void)getConformingSharedUserIds:(id)arg0 ;
-(void)getFirstNameForSharedUserId:(id)arg0 completion:(id)arg1 ;
-(void)getHomeUserIdForSharedUserId:(id)arg0 completion:(id)arg1 ;
-(void)getHomeUserIdOfRecognizedUserWithCompletion:(id)arg0 ;
-(void)getMultiUserSettingsForSharedUserID:(id)arg0 completion:(id)arg1 ;
-(void)getPreferredMediaUserHomeUserIDWithCompletion:(id)arg0 ;
-(void)getSharedUserIdForHomeUserId:(id)arg0 completion:(id)arg1 ;
-(void)getSharedUserInfoForSharedUserID:(id)arg0 completion:(id)arg1 ;
-(void)getSharedUserProfileLimitWithCompletion:(id)arg0 ;
-(void)getiCloudAltDSIDOfRecognizedUserWithCompletion:(id)arg0 ;
-(void)homeUserIdToNames:(id)arg0 ;


@end


#endif