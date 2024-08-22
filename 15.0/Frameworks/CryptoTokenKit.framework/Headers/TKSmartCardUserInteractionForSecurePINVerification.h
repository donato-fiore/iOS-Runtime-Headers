// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TKSMARTCARDUSERINTERACTIONFORSECUREPINVERIFICATION_H
#define TKSMARTCARDUSERINTERACTIONFORSECUREPINVERIFICATION_H

@class NSData;
@protocol NSSecureCoding;


#import "TKSmartCardUserInteractionForPINOperation.h"
#import "TKSmartCardPINFormat.h"
#import "TKSmartCardSlot.h"

@interface TKSmartCardUserInteractionForSecurePINVerification : TKSmartCardUserInteractionForPINOperation <NSSecureCoding>



@property (retain) NSData *APDU; // ivar: _APDU
@property NSInteger PINByteOffset; // ivar: _PINByteOffset
@property (retain) TKSmartCardPINFormat *PINFormat; // ivar: _PINFormat
@property (weak) TKSmartCardSlot *slot; // ivar: _slot


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)runWithReply:(id)arg0 ;


@end


#endif