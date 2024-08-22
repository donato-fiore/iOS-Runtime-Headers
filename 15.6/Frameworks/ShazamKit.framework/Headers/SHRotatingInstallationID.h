// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SHROTATINGINSTALLATIONID_H
#define SHROTATINGINSTALLATIONID_H


#import <Foundation/Foundation.h>


@interface SHRotatingInstallationID : NSObject



+(id)cachedInstallationIDForUTCDay;
+(id)cachedInstallationIDWithMaxAge:(CGFloat)arg0 ;
+(id)creationDate;
+(id)installationID;
+(void)setCreationDate:(id)arg0 ;
+(void)setInstallationID:(id)arg0 ;


@end


#endif