// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTFRAMEWORKENVIRONMENT_H
#define MTFRAMEWORKENVIRONMENT_H

@class NSString;
@protocol MTIDSecretStore;

#import <Foundation/Foundation.h>

#import "MTIDCache.h"

@interface MTFrameworkEnvironment : NSObject {
    NSString *_localDataPath;
    id<MTIDSecretStore> *_secretStore;
    MTIDCache *_idCache;
}


@property (copy, nonatomic) NSString *localDataPath;


+(id)sharedEnvironment;
+(void)initialize;
+(void)setSharedEnvironment:(id)arg0 ;
+(void)withEnvironment:(id)arg0 execute:(id)arg1 ;
-(BOOL)isInternalBuild;
-(BOOL)useCloudKitSandbox;
-(id)date;
-(id)dateOfBirthComponents;
-(id)hostProcessBundleIdentifier;
-(id)idCache;
-(id)metricsKitBundleIdentifier;
-(id)secretStore;
-(id)valueForEntitlement:(id)arg0 ;


@end


#endif