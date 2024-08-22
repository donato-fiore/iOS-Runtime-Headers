// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDPREMOTESECRETENTRYPANE_H
#define CDPREMOTESECRETENTRYPANE_H

@class UIButton, CDPDevice;


#import "CDPPassphraseEntryPane.h"
#import "CDPRemoteValidationEscapeOffer.h"

@interface CDPRemoteSecretEntryPane : CDPPassphraseEntryPane {
    UIButton *_footerButton;
}


@property (retain, nonatomic) CDPDevice *device; // ivar: _device
@property (retain, nonatomic) CDPRemoteValidationEscapeOffer *escapeOffer; // ivar: _escapeOffer
@property BOOL remoteAccountRecovery; // ivar: _remoteAccountRecovery
@property (nonatomic) NSUInteger remoteSecretType; // ivar: _remoteSecretType


-(id)_headerStringForDevice:(id)arg0 localDeviceClass:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)didFinishResizingHeaderView;
-(void)didFinishResizingPinView;
-(void)setTitle:(id)arg0 ;


@end


#endif