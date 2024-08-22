// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBDEVICEAPPLICATIONSCENEPLACEHOLDERCONTENTCONTEXT_H
#define SBDEVICEAPPLICATIONSCENEPLACEHOLDERCONTENTCONTEXT_H

@class NSString, NSURL;
@protocol SBScenePlaceholderContentContext, NSMutableCopying, SBActivationSettings;

#import <Foundation/Foundation.h>


@interface SBDeviceApplicationScenePlaceholderContentContext : NSObject <SBScenePlaceholderContentContext, NSMutableCopying>



@property (copy, nonatomic) NSObject<SBActivationSettings> *activationSettings; // ivar: _settings
@property (readonly, nonatomic) BOOL canShowUserContent;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasOrientationMismatchForClassicApp; // ivar: _hasOrientationMismatchForClassicApp
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger layoutEnvironment; // ivar: _layoutEnvironment
@property (nonatomic) NSUInteger preferredContentType; // ivar: _preferredContentType
@property (nonatomic) BOOL prefersLiveXIB; // ivar: _prefersLiveXIB
@property (copy, nonatomic) NSString *requestedLaunchIdentifier; // ivar: _requestedLaunchIdentifier
@property (nonatomic) NSInteger sizingPolicy; // ivar: _sizingPolicy
@property (readonly) Class superclass;
@property (copy, nonatomic) NSURL *url; // ivar: _url


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithActivationSettings:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif