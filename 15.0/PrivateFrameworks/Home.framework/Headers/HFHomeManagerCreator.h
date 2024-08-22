// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFHOMEMANAGERCREATOR_H
#define HFHOMEMANAGERCREATOR_H

@class HMHomeManagerConfiguration;
@protocol HFHomeManagerCreatorDelegate, HFHomeConfigurationStatus;

#import <Foundation/Foundation.h>


@interface HFHomeManagerCreator : NSObject

@property (copy, nonatomic) HMHomeManagerConfiguration *configuration; // ivar: _configuration
@property (nonatomic) NSUInteger creationPolicy; // ivar: _creationPolicy
@property (weak, nonatomic) NSObject<HFHomeManagerCreatorDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<HFHomeConfigurationStatus> *homeStatus; // ivar: _homeStatus
@property (nonatomic) NSInteger hostProcessType; // ivar: _hostProcessType


+(BOOL)allowCreationInTest;
+(void)setAllowCreationInTest:(BOOL)arg0 ;
-(BOOL)_shouldCreateHomeManager;
-(BOOL)canCreateHomeManager;
-(NSUInteger)_homeManagerCreationPolicy;
-(id)_createHomeManager;
-(id)createHomeManagerIfNeeded;
-(id)init;
-(id)initWithHostProcess:(NSInteger)arg0 configuration:(id)arg1 homeStatus:(id)arg2 delegate:(id)arg3 ;
-(void)_createHomeManagerOnQueue;


@end


#endif