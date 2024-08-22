// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASCDEFAULTS_H
#define ASCDEFAULTS_H

@class NSString, NSNumber;

#import <Foundation/Foundation.h>


@interface ASCDefaults : NSObject

@property (readonly, copy, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (copy, nonatomic) NSString *debugPackageURL;
@property (nonatomic) BOOL disableShutdownTimer;
@property (nonatomic) BOOL enableWebInspector;
@property (nonatomic) BOOL forceRightToLeftLayout;
@property (nonatomic) BOOL forceStandaloneWatch;
@property (copy, nonatomic) NSNumber *overlaysLoadTimeout;
@property (copy, nonatomic) NSNumber *overlaysRateLimitRequestsPerSecond;
@property (copy, nonatomic) NSNumber *overlaysRateLimitTimeWindow;
@property (nonatomic) BOOL preferInternalJS;
@property (copy, nonatomic) NSString *storefrontLocaleID;


+(id)daemonDefaults;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithBundleID:(id)arg0 ;
-(id)objectForKey:(id)arg0 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;


@end


#endif