// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TKSMARTCARDUSERINTERACTIONFORSECUREPINCHANGE_H
#define TKSMARTCARDUSERINTERACTIONFORSECUREPINCHANGE_H

@class NSData;
@protocol NSSecureCoding;


#import "TKSmartCardUserInteractionForPINOperation.h"
#import "TKSmartCardPINFormat.h"
#import "TKSmartCardSlot.h"

@interface TKSmartCardUserInteractionForSecurePINChange : TKSmartCardUserInteractionForPINOperation <NSSecureCoding>



@property (retain) NSData *APDU; // ivar: _APDU
@property NSUInteger PINConfirmation; // ivar: _PINConfirmation
@property (retain) TKSmartCardPINFormat *PINFormat; // ivar: _PINFormat
@property NSInteger currentPINByteOffset; // ivar: _currentPINByteOffset
@property NSInteger newPINByteOffset; // ivar: _newPINByteOffset
@property (weak) TKSmartCardSlot *slot; // ivar: _slot


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)runWithReply:(id)arg0 ;


@end


#endif