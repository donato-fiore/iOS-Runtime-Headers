// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSABSTRACTFACILITYSERVICE_H
#define SBSABSTRACTFACILITYSERVICE_H

@class NSString;
@protocol BSInvalidatable, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SBSServiceFacilityClient.h"

@interface SBSAbstractFacilityService : NSObject <BSInvalidatable>

 {
    SBSServiceFacilityClient *_client;
}


@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (readonly, nonatomic) SBSServiceFacilityClient *client;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(Class)serviceFacilityClientClass;
-(id)init;
-(void)dealloc;
-(void)invalidate;


@end


#endif