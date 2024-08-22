// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DSAPP_H
#define DSAPP_H

@class NSString, NSMutableSet;
@protocol NSMutableCopying;

#import <Foundation/Foundation.h>


@interface DSApp : NSObject <NSMutableCopying>



@property (copy, nonatomic) NSString *appID; // ivar: _appID
@property (copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (nonatomic) NSUInteger locationAuthorization; // ivar: _locationAuthorization
@property (retain, nonatomic) NSMutableSet *permissionsGranted; // ivar: _permissionsGranted


+(BOOL)app:(id)arg0 hasPermission:(id)arg1 ;
+(BOOL)app:(id)arg0 hasPermissionAcceptingAnyLocationAuthorization:(id)arg1 ;
+(BOOL)appHasNoPermissions:(id)arg0 ;
+(BOOL)skipTCCCheck:(id)arg0 ;
-(BOOL)hasLocationAccess;
-(NSInteger)compare:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif