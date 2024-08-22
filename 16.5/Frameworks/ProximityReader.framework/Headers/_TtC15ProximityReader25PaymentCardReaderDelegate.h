// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC15PROXIMITYREADER25PAYMENTCARDREADERDELEGATE_H
#define _TTC15PROXIMITYREADER25PAYMENTCARDREADERDELEGATE_H

@class SwiftObject;
@protocol _TtP15ProximityReader30PaymentTerminalServiceDelegate_;



@interface _TtC15ProximityReader25PaymentCardReaderDelegate : SwiftObject <_TtP15ProximityReader30PaymentTerminalServiceDelegate_>





-(void)closed:(BOOL)arg0 ;
-(void)loading:(NSInteger)arg0 ;
-(void)readFeedback:(NSInteger)arg0 ;


@end


#endif