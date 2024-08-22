// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPACTIVITYAUTHORIZATIONMANAGER_H
#define CPACTIVITYAUTHORIZATIONMANAGER_H

@class TUNeighborhoodActivityConduit;

#import <Foundation/Foundation.h>


@interface CPActivityAuthorizationManager : NSObject {
    ? dataSource;
    ? notificationCenter;
    ? featureFlags;
    ? $__lazy_storage_$_neighborhoodActivityConduit;
    ? queue;
    ? appPolicyManager;
    ? audioRoutePolicyManager;
    ? lock;
    ? preparedAuthorizedBundleIdentifiers;
    ? isDisplayingAuthorizationRequest;
}


@property (nonatomic, retain) TUNeighborhoodActivityConduit *neighborhoodActivityConduit;


+(id)notificationDisplayInformationForAudioPolicyManager:(id)arg0 activity:(id)arg1 conversation:(id)arg2 ;
-(id)init;
-(id)initWithDataSource:(id)arg0 queue:(id)arg1 ;
-(void)requestAuthorizationForApplicationLaunchWithActivity:(id)arg0 completionHandler:(id)arg1 ;
-(void)requestAuthorizationForApplicationWithBundleIdentifier:(id)arg0 preparing:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)setAuthorization:(BOOL)arg0 forBundleIdentifier:(id)arg1 ;


@end


#endif