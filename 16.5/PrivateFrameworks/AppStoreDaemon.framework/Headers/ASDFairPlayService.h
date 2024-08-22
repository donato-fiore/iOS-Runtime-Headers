// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASDFAIRPLAYSERVICE_H
#define ASDFAIRPLAYSERVICE_H

@class NSString;
@protocol ASDServiceProvider;

#import <Foundation/Foundation.h>

#import "ASDServiceBroker.h"

@interface ASDFairPlayService : NSObject <ASDServiceProvider>

 {
    ASDServiceBroker *_serviceBroker;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)defaultService;
+(id)interface;
-(BOOL)importKeybag:(id)arg0 error:(*id)arg1 ;
-(BOOL)importSubscriptionKeybag:(id)arg0 error:(*id)arg1 ;
-(id)generateKeybagRequestForDSID:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)generateSubscriptionRequestForDSID:(NSUInteger)arg0 error:(*id)arg1 ;


@end


#endif