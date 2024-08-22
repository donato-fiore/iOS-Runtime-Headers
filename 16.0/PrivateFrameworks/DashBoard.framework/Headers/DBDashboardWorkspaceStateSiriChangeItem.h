// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DBDASHBOARDWORKSPACESTATESIRICHANGEITEM_H
#define DBDASHBOARDWORKSPACESTATESIRICHANGEITEM_H



#import "DBDashboardWorkspaceStateChangeItem.h"

@interface DBDashboardWorkspaceStateSiriChangeItem : DBDashboardWorkspaceStateChangeItem

@property (nonatomic, getter=isFloating) BOOL floating; // ivar: _floating


-(BOOL)prefersAnimation;
-(id)_newEntityFromChangeItemWithPolicyProvider:(id)arg0 ;
-(id)init;


@end


#endif