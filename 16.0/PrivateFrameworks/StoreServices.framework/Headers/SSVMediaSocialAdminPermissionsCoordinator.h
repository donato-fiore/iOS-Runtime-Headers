// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSVMEDIASOCIALADMINPERMISSIONSCOORDINATOR_H
#define SSVMEDIASOCIALADMINPERMISSIONSCOORDINATOR_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SSVMediaSocialAdminPermissionsCoordinator : NSObject {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}


@property (readonly, nonatomic) BOOL isCurrentUserAdmin;
@property CGFloat refreshPeriod; // ivar: _refreshPeriod


+(id)sharedCoordinator;
-(BOOL)_statusIsFresh:(id)arg0 ;
-(id)_adminStatusForAccountID:(id)arg0 ;
-(id)init;
-(void)_setAdminStatus:(id)arg0 forAccountID:(id)arg1 ;
-(void)getAdminStatusAndWaitWithOptions:(id)arg0 resultBlock:(id)arg1 ;
-(void)getAdminStatusWithOptions:(id)arg0 resultBlock:(id)arg1 ;
-(void)reset;


@end


#endif