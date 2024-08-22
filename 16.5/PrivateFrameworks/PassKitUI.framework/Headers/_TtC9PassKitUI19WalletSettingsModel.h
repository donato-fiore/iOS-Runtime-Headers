// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC9PASSKITUI19WALLETSETTINGSMODEL_H
#define _TTC9PASSKITUI19WALLETSETTINGSMODEL_H

@class SwiftObject;



@interface _TtC9PassKitUI19WalletSettingsModel : SwiftObject {
    ? _passes;
    ? _defaultPass;
    ? _paymentDefaults;
    ? _hardwareConfigurationModel;
    ? _contactFormatValidator;
    ? cachedTransactionModelsByUniqueID;
    ? passLibrary;
    ? paymentService;
    ? defaults;
    ? recents;
}




-(void)passLibraryDidChangeWithNotification:(id)arg0 ;
-(void)paymentOptionsDidChange;


@end


#endif