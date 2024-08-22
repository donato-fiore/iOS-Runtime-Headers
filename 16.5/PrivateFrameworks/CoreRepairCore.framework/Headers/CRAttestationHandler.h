// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRATTESTATIONHANDLER_H
#define CRATTESTATIONHANDLER_H

@protocol CRAttestationProtocol;

#import <Foundation/Foundation.h>

#import "CRAttestationBaseDeviceHandler.h"

@interface CRAttestationHandler : NSObject <CRAttestationProtocol>

 {
    CRAttestationBaseDeviceHandler *handle;
}




+(id)sharedInstance;
-(id)_init;
-(id)getHandlerForDevice;
-(void)challengeComponentsWith:(id)arg0 withReply:(id)arg1 ;
-(void)getStrongComponentsWithReply:(id)arg0 ;


@end


#endif