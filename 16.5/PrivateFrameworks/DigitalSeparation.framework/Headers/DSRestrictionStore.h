// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DSRESTRICTIONSTORE_H
#define DSRESTRICTIONSTORE_H


#import <Foundation/Foundation.h>


@interface DSRestrictionStore : NSObject



+(BOOL)hasRestriction;
+(BOOL)isAppRemovalRestricted;
+(BOOL)isFingerprintModificationRestricted;
+(BOOL)isPasscodeModificationRestricted;
+(BOOL)isPermissionRestricted:(id)arg0 ;
+(BOOL)isPrivateRelayRestricted;
+(BOOL)isSourceRestricted:(id)arg0 ;
+(void)initialize;


@end


#endif