// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC15PROXIMITYREADER17PAYMENTCARDREADER_H
#define _TTC15PROXIMITYREADER17PAYMENTCARDREADER_H

@class SwiftObject;
@protocol _TtP15ProximityReader30PaymentTerminalServiceDelegate_;



@interface _TtC15ProximityReader17PaymentCardReader : SwiftObject <_TtP15ProximityReader30PaymentTerminalServiceDelegate_>

 {
    ? id;
    ? activeSession;
    ? options;
    ? updateHandler;
    ? releaseConnectionHandler;
    ? arbiter;
    ? foregroundState;
    ? xpcDisconnectionExpected;
    ? connection;
    ? readerIdentifierCache;
    ? installId;
}




-(void)closed:(BOOL)arg0 ;
-(void)loading:(NSInteger)arg0 ;
-(void)readFeedback:(NSInteger)arg0 ;
-(void)sessionUpdated:(id)arg0 ;


@end


#endif