// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DSAPPPERMISSIONSDESCRIPTOR_H
#define DSAPPPERMISSIONSDESCRIPTOR_H

@class NSString;

#import <Foundation/Foundation.h>


@interface DSAppPermissionsDescriptor : NSObject

@property (readonly, copy, nonatomic) NSString *localizedDescription; // ivar: _localizedDescription


+(id)appsWithPermission:(id)arg0 fromAllApps:(id)arg1 ;
+(id)enumerateAppPermissionPairsFromApps:(id)arg0 permissions:(id)arg1 ;
+(id)localizedDescriptionFromApps:(id)arg0 permission:(id)arg1 ;
+(id)localizedDescriptionFromPermissions:(id)arg0 ;
+(id)localizedNameForPermission:(id)arg0 ;
+(id)sortSensorDict:(id)arg0 ;
+(void)ensureApp:(id)arg0 inSensorDict:(id)arg1 ;


@end


#endif