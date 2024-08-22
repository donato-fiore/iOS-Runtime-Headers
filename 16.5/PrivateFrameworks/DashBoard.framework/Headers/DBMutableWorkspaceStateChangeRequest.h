// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DBMUTABLEWORKSPACESTATECHANGEREQUEST_H
#define DBMUTABLEWORKSPACESTATECHANGEREQUEST_H



#import "DBWorkspaceStateChangeRequest.h"

@interface DBMutableWorkspaceStateChangeRequest : DBWorkspaceStateChangeRequest



-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)activateApplication:(id)arg0 ;
-(void)activateApplication:(id)arg0 withSettings:(id)arg1 ;
-(void)activateHomeScreen;
-(void)activateSiri;
-(void)activateSiriFloating;
-(void)activateStackedApplication:(id)arg0 ;
-(void)activateStackedApplication:(id)arg0 withSettings:(id)arg1 ;
-(void)addChangeItem:(id)arg0 ;
-(void)deactivateApplication:(id)arg0 ;
-(void)deactivateSiri;
-(void)destroyApplication:(id)arg0 ;
-(void)removeChangeItem:(id)arg0 ;


@end


#endif