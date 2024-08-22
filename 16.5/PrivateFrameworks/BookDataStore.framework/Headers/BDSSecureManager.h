// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BDSSECUREMANAGER_H
#define BDSSECUREMANAGER_H

@protocol BDSSecureEngagementManaging, BCCloudSecureUserDataManager;

#import <Foundation/Foundation.h>

#import "_TtC13BookDataStore23CloudSecureManagerProxy.h"

@interface BDSSecureManager : NSObject

@property (readonly, nonatomic) NSObject<BDSSecureEngagementManaging> *engagementManager;
@property (retain, nonatomic) _TtC13BookDataStore23CloudSecureManagerProxy *secureManager; // ivar: _secureManager
@property (readonly, nonatomic) NSObject<BCCloudSecureUserDataManager> *userDataManager;


+(id)sharedManager;
-(id)init;
-(void)setEnableCloudSync:(BOOL)arg0 ;


@end


#endif