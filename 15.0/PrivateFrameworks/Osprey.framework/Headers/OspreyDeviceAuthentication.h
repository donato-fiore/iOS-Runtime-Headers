// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OSPREYDEVICEAUTHENTICATION_H
#define OSPREYDEVICEAUTHENTICATION_H

@class NSDictionary, NSString;
@protocol OspreyDeviceAuthenticating;

#import <Foundation/Foundation.h>

#import "OspreyConnectionPreferences.h"
#import "OspreyPreferences.h"

@interface OspreyDeviceAuthentication : NSObject <OspreyDeviceAuthenticating>

 {
    OspreyConnectionPreferences *_connectionPreferences;
    OspreyPreferences *_allPreferences;
    NSDictionary *_strategies;
    BOOL _hasCurrentStrategyVersion;
}


@property (nonatomic) NSUInteger currentStrategyVersion; // ivar: _currentStrategyVersion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)authenticationStrategyVersion;
-(id)_currentStrategy;
-(id)initWithChannel:(id)arg0 connectionPreferences:(id)arg1 allPreferences:(id)arg2 ;
// -(void)signData:(id)arg0 success:(id)arg1 failure:(unk)arg2  ;


@end


#endif