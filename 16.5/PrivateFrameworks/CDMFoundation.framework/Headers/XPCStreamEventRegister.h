// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef XPCSTREAMEVENTREGISTER_H
#define XPCSTREAMEVENTREGISTER_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface XPCStreamEventRegister : NSObject

@property (readonly, nonatomic) NSDictionary *registrationsMap; // ivar: _registrationsMap


+(id)_registrationKeyFromStreamName:(id)arg0 eventName:(id)arg1 ;
+(id)defaultRegister;
+(id)registerWithRegistrations:(id)arg0 ;
-(BOOL)handleXPCEvent:(id)arg0 fromStream:(id)arg1 currentConfig:(id)arg2 ;
-(id)_initWithRegistrationsMap:(id)arg0 ;
-(id)handleableXPCEventStreams;


@end


#endif