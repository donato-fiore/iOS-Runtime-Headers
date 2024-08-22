// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INCAPPPROXY_H
#define INCAPPPROXY_H


#import <Foundation/Foundation.h>

#import "INCExtensionConnection.h"

@interface INCAppProxy : NSObject

@property (readonly, weak, nonatomic) INCExtensionConnection *_connection; // ivar: _connection


+(BOOL)shouldLaunchAppInBackgroundWithIntent:(id)arg0 intentResponse:(id)arg1 ;
+(void)initialize;
-(id)_initWithConnection:(id)arg0 ;
-(void)launchAppInBackground:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)launchAppInBackground:(BOOL)arg0 restrictAppsToCarPlay:(BOOL)arg1 userActivityIdentifier:(id)arg2 completionHandler:(id)arg3 ;
-(void)launchAppInBackground:(BOOL)arg0 restrictAppsToCarPlay:(BOOL)arg1 userActivityIdentifier:(id)arg2 retainsSiri:(BOOL)arg3 completionHandler:(id)arg4 ;


@end


#endif