// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BCSICLOUDSERVERENVIRONMENT_H
#define BCSICLOUDSERVERENVIRONMENT_H

@class NSDictionary, NSString;
@protocol BSDescriptionProviding, BCSICloudServerEnvironmentProtocol, BCSUserDefaultsProviding;

#import <Foundation/Foundation.h>


@interface BCSICloudServerEnvironment : NSObject <BSDescriptionProviding, BCSICloudServerEnvironmentProtocol>



@property (readonly, nonatomic) NSDictionary *additionalRequestHTTPHeaders;
@property (readonly, nonatomic) NSInteger containerEnvironment;
@property (readonly, nonatomic) NSString *containerID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isInternalInstall) BOOL isInternalInstall; // ivar: _isInternalInstall
@property (readonly, nonatomic, getter=isStagingMode) BOOL isStagingMode;
@property (readonly) Class superclass;
@property (nonatomic) NSInteger type; // ivar: _type
@property (readonly, nonatomic) NSObject<BCSUserDefaultsProviding> *userDefaults; // ivar: _userDefaults


-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithUserDefaults:(id)arg0 isInternalInstall:(BOOL)arg1 type:(NSInteger)arg2 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif