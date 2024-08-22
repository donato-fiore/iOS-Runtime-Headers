// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TKSMARTCARDUSERINTERACTIONFORCONFIRMATION_H
#define TKSMARTCARDUSERINTERACTIONFORCONFIRMATION_H

@protocol NSSecureCoding;


#import "TKSmartCardUserInteraction.h"
#import "TKSmartCardSlot.h"

@interface TKSmartCardUserInteractionForConfirmation : TKSmartCardUserInteraction <NSSecureCoding>



@property BOOL result; // ivar: _result
@property (weak) TKSmartCardSlot *slot; // ivar: _slot


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)runWithReply:(id)arg0 ;


@end


#endif