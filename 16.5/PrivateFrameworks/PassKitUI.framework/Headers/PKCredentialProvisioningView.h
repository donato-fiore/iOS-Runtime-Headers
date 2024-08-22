// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKCREDENTIALPROVISIONINGVIEW_H
#define PKCREDENTIALPROVISIONINGVIEW_H

@class NSString;


#import "PKProvisioningProgressView.h"
#import "PKSubcredentialPairingFlowControllerContext.h"

@interface PKCredentialProvisioningView : PKProvisioningProgressView {
    BOOL _supportsUWB;
    PKSubcredentialPairingFlowControllerContext *_context;
    NSString *_templateIdentifier;
}


@property (nonatomic) NSInteger state; // ivar: _state


-(id)initWithContext:(id)arg0 ;


@end


#endif