// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLSUSERDEFAULTS_H
#define CLSUSERDEFAULTS_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CLSEndpointConnection.h"

@interface CLSUserDefaults : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}


@property (retain, nonatomic) CLSEndpointConnection *endpointConnection; // ivar: _endpointConnection


+(Class)endpointClass;
+(id)displayNameForDefaultName:(id)arg0 ;
+(id)sharedDefaults;
-(BOOL)userDefaultForDefaultNamed:(id)arg0 ;
-(id)initWithEndpoint:(id)arg0 ;
-(id)syncUtilityServer:(id)arg0 ;
-(id)utilityServer:(id)arg0 ;
-(void)getUserDefaultForDefaultNamed:(id)arg0 completion:(id)arg1 ;
-(void)setUserDefaultValue:(id)arg0 forDefaultNamed:(id)arg1 completion:(id)arg2 ;
-(void)userDefaultsConfigurationDictionaryWithCompletion:(id)arg0 ;


@end


#endif