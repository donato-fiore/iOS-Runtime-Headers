// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DBMUTABLEDASHBOARDWORKSPACESTATE_H
#define DBMUTABLEDASHBOARDWORKSPACESTATE_H



#import "DBDashboardWorkspaceState.h"
#import "DBDashboardEntity.h"

@interface DBMutableDashboardWorkspaceState : DBDashboardWorkspaceState

@property (retain, nonatomic) DBDashboardEntity *baseEntity;
@property (retain, nonatomic) DBDashboardEntity *stackedEntity;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif