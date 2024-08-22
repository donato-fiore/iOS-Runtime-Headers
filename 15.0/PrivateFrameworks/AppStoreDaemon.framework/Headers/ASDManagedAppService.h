// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASDMANAGEDAPPSERVICE_H
#define ASDMANAGEDAPPSERVICE_H

@class NSString;
@protocol ASDServiceProvider;

#import <Foundation/Foundation.h>

#import "ASDServiceBroker.h"

@interface ASDManagedAppService : NSObject <ASDServiceProvider>

 {
    ASDServiceBroker *_serviceBroker;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)defaultService;
+(id)interface;
-(id)init;
-(id)showVPPInviteForCurrentUser:(id)arg0 orgName:(id)arg1 ;
-(void)requestStatusWithResultHandler:(id)arg0 ;
-(void)submitManifestRequest:(id)arg0 withResultHandler:(id)arg1 ;
-(void)submitVPPRequest:(id)arg0 withResultHandler:(id)arg1 ;


@end


#endif