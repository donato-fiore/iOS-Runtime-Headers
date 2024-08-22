// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTSDEVICESETUPMANAGER_H
#define MTSDEVICESETUPMANAGER_H

@class NSString;
@protocol HMFLogging;

#import <Foundation/Foundation.h>

#import "MTSXPCServerProxy.h"

@interface MTSDeviceSetupManager : NSObject <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSString *localizedEcosystemName; // ivar: _localizedEcosystemName
@property (readonly) MTSXPCServerProxy *serverProxy; // ivar: _serverProxy
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithLocalizedEcosystemName:(id)arg0 ;
-(id)initWithLocalizedEcosystemName:(id)arg0 serverProxy:(id)arg1 ;
-(void)dealloc;
-(void)performDeviceSetupUsingRequest:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif