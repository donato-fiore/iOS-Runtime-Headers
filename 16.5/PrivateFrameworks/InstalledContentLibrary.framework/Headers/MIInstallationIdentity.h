// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MIINSTALLATIONIDENTITY_H
#define MIINSTALLATIONIDENTITY_H

@class NSData;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MIInstallationIdentity : NSObject <NSCopying>



@property (copy, nonatomic) NSData *installSessionID; // ivar: _installSessionID
@property (copy, nonatomic) NSData *uniqueInstallID; // ivar: _uniqueInstallID


+(id)identityForUpdateOfBundle:(id)arg0 error:(*id)arg1 ;
+(id)installationIdentityForBundle:(id)arg0 settingIfNotSet:(BOOL)arg1 error:(*id)arg2 ;
+(id)newIdentityForBundle:(id)arg0 ;
-(BOOL)_writeToBundle:(id)arg0 error:(*id)arg1 ;
-(BOOL)_writeToBundle:(id)arg0 fd:(int)arg1 fdLocation:(id)arg2 error:(*id)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)writeToBundle:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithSessionID:(id)arg0 uniqueID:(id)arg1 ;


@end


#endif