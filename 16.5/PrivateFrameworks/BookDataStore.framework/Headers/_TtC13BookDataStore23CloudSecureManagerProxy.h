// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC13BOOKDATASTORE23CLOUDSECUREMANAGERPROXY_H
#define _TTC13BOOKDATASTORE23CLOUDSECUREMANAGERPROXY_H

@protocol BCCloudSecureManaging, BDSSecureEngagementManaging, BCCloudSecureUserDataManager;

#import <Foundation/Foundation.h>


@interface _TtC13BookDataStore23CloudSecureManagerProxy : NSObject <BCCloudSecureManaging>

 {
    ? serviceProxy;
}


@property (nonatomic, retain) NSObject<BDSSecureEngagementManaging> *engagementManager; // ivar: engagementManager
@property (nonatomic, retain) NSObject<BCCloudSecureUserDataManager> *userDataManager; // ivar: userDataManager


+(id)sharedManager;
+(void)setSharedManager:(id)arg0 ;
-(id)init;
-(void)setEnableCloudSync:(BOOL)arg0 ;


@end


#endif