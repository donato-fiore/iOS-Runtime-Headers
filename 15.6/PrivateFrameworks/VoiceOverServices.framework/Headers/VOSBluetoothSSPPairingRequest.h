// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VOSBLUETOOTHSSPPAIRINGREQUEST_H
#define VOSBLUETOOTHSSPPAIRINGREQUEST_H

@class PSSpecifier, UIAlertController;

#import <Foundation/Foundation.h>

#import "VOSBluetoothDevice.h"

@interface VOSBluetoothSSPPairingRequest : NSObject {
    VOSBluetoothDevice *_device;
    PSSpecifier *_specifier;
    id *_delegate;
    int _pairingStyle;
    UIAlertController *_alert;
}


@property (copy, nonatomic) id *pairingAcceptedBlock; // ivar: _pairingAcceptedBlock
@property (copy, nonatomic) id *pairingFailedBlock; // ivar: _pairingFailedBlock


-(id)_sanitizeNameForAlert:(id)arg0 ;
-(id)initWithDevice:(id)arg0 andSpecifier:(id)arg1 ;
-(int)pairingStyle;
-(void)dealloc;
-(void)dismiss;
-(void)hidPairingResult:(id)arg0 ;
-(void)setDelegate:(id)arg0 ;
-(void)setPairingStyle:(int)arg0 andPasskey:(id)arg1 ;
-(void)showWithWindow:(id)arg0 ;


@end


#endif