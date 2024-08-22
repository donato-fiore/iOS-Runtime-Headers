// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKNFCTAGREADERSESSION_H
#define PKNFCTAGREADERSESSION_H

@class NSString;
@protocol NFReaderSessionDelegate, PKNFCTagReaderSessionDelegate;


#import "PKPaymentSession.h"

@interface PKNFCTagReaderSession : PKPaymentSession <NFReaderSessionDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKNFCTagReaderSessionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithInternalSession:(id)arg0 targetQueue:(id)arg1 ;
-(void)endSession;
-(void)readNDEFMessageFromTag:(id)arg0 completion:(id)arg1 ;
-(void)readerSession:(id)arg0 didDetectTags:(id)arg1 ;
-(void)readerSessionDidEndUnexpectedly:(id)arg0 reason:(id)arg1 ;
-(void)startPolling;
-(void)stopPolling;


@end


#endif