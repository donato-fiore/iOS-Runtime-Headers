// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DBDASHBOARDAPPLICATIONSCENEENTITY_H
#define DBDASHBOARDAPPLICATIONSCENEENTITY_H



#import "DBDashboardEntity.h"
#import "DBApplicationInfo.h"

@interface DBDashboardApplicationSceneEntity : DBDashboardEntity

@property (readonly, nonatomic) DBApplicationInfo *applicationInfo; // ivar: _applicationInfo


+(id)applicationSceneEntityForApplicationInfo:(id)arg0 ;
-(BOOL)isApplicationEntity;
-(BOOL)isFullScreenEntity;
-(id)_initWithApplicationInfo:(id)arg0 ;
-(void)_buildDescriptionWithBuilder:(id)arg0 ;


@end


#endif