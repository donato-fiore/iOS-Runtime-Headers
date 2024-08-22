// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _LSDISKUSAGE_H
#define _LSDISKUSAGE_H

@class NSString, NSMutableDictionary, NSNumber;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _LSDiskUsage : NSObject <NSCopying, NSSecureCoding>

 {
    NSString *_bundleIdentifier;
    NSMutableDictionary *_usage;
    id *_validationToken;
}


@property (readonly, nonatomic) NSNumber *dynamicUsage;
@property (readonly, nonatomic) NSNumber *onDemandResourcesUsage;
@property (readonly, nonatomic) NSNumber *sharedUsage;
@property (readonly, nonatomic) NSNumber *staticUsage;


+(BOOL)supportsSecureCoding;
+(id)ODRConnection;
+(id)ODRUsageForBundleIdentifier:(id)arg0 error:(*id)arg1 ;
+(id)_serverQueue;
+(id)mobileInstallationQueue;
+(id)propertyQueue;
+(id)usageFromMobileInstallationForBundleIdentifier:(id)arg0 error:(*id)arg1 ;
-(BOOL)_fetchWithXPCConnection:(id)arg0 error:(*id)arg1 ;
-(BOOL)fetchClientSideWithError:(*id)arg0 ;
-(BOOL)fetchServerSideWithConnection:(id)arg0 error:(*id)arg1 ;
-(id)_initWithBundleIdentifier:(id)arg0 alreadyKnownUsage:(id)arg1 validationToken:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)removeAllCachedUsageValues;


@end


#endif