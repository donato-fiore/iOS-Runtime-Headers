// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKCREDENTIALPROVISIONINGVIEW_H
#define PKCREDENTIALPROVISIONINGVIEW_H



#import "PKProvisioningProgressView.h"

@interface PKCredentialProvisioningView : PKProvisioningProgressView {
    BOOL _supportsUWB;
}


@property (nonatomic) NSInteger state; // ivar: _state


-(id)initWithContext:(id)arg0 ;


@end


#endif