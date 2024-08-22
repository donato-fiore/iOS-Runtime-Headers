// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC9PAYMENTUI19WALLETSETTINGSMODEL_H
#define _TTC9PAYMENTUI19WALLETSETTINGSMODEL_H

@class SwiftObject;



@interface _TtC9PaymentUI19WalletSettingsModel : SwiftObject {
    ? _passes;
    ? _defaultPass;
    ? _paymentDefaults;
    ? passLibrary;
    ? paymentService;
    ? defaults;
    ? recents;
}




-(void)passLibraryDidChangeWithNotification:(id)arg0 ;


@end


#endif