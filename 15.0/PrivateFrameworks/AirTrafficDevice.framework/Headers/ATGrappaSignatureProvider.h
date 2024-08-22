// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATGRAPPASIGNATUREPROVIDER_H
#define ATGRAPPASIGNATUREPROVIDER_H

@class ATSignatureProvider;


#import "ATGrappaSession.h"
#import "ATDeviceSettings.h"

@interface ATGrappaSignatureProvider : ATSignatureProvider {
    ATGrappaSession *_grappaSession;
    ATDeviceSettings *_settings;
}




-(id)createSignature:(*id)arg0 forData:(id)arg1 ;
-(id)initWithGrappaSession:(id)arg0 ;
-(id)verifySignature:(id)arg0 forData:(id)arg1 ;


@end


#endif