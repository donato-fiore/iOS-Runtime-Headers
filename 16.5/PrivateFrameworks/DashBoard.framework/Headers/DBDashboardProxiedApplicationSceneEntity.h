// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DBDASHBOARDPROXIEDAPPLICATIONSCENEENTITY_H
#define DBDASHBOARDPROXIEDAPPLICATIONSCENEENTITY_H



#import "DBDashboardEntity.h"
#import "DBApplicationInfo.h"
#import "DBDashboardApplicationSceneEntity.h"

@interface DBDashboardProxiedApplicationSceneEntity : DBDashboardEntity

@property (readonly, nonatomic) DBApplicationInfo *applicationToProxy; // ivar: _applicationToProxy
@property (readonly, nonatomic) DBDashboardApplicationSceneEntity *proxyEntity; // ivar: _proxyEntity


+(id)application:(id)arg0 proxiedByEntity:(id)arg1 ;
-(BOOL)isProxiedApplicationEntity;
-(id)_initWithApplication:(id)arg0 proxiedByEntity:(id)arg1 ;
-(void)_buildDescriptionWithBuilder:(id)arg0 ;


@end


#endif