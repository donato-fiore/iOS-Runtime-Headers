// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DBDASHBOARDWORKSPACESTATEAPPLICATIONSCENECHANGEITEM_H
#define DBDASHBOARDWORKSPACESTATEAPPLICATIONSCENECHANGEITEM_H

@class NSDictionary;


#import "DBDashboardWorkspaceStateChangeItem.h"
#import "DBApplicationInfo.h"

@interface DBDashboardWorkspaceStateApplicationSceneChangeItem : DBDashboardWorkspaceStateChangeItem

@property (retain, nonatomic) NSDictionary *activationSettings; // ivar: _activationSettings
@property (retain, nonatomic) DBApplicationInfo *application; // ivar: _application


-(BOOL)prefersAnimation;
-(id)_newEntityFromChangeItemWithPolicyProvider:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithApplication:(id)arg0 ;
-(void)_buildDescriptionWithBuilder:(id)arg0 ;


@end


#endif