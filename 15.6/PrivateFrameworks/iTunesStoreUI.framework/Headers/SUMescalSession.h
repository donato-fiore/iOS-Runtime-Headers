// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUMESCALSESSION_H
#define SUMESCALSESSION_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SUMescalSession : NSObject {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    BOOL _complete;
    FairPlayHWInfo_ _hardwareInfo;
    *FPSAPContextOpaque_ _session;
}


@property (readonly, getter=isComplete) BOOL complete;


-(BOOL)verifyPrimeSignature:(id)arg0 error:(*id)arg1 ;
-(id)_newDataWithBytes:(char *)arg0 length:(unsigned int)arg1 ;
-(id)exchangeData:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)primeForAccountCreationWithData:(id)arg0 error:(*id)arg1 ;
-(id)signData:(id)arg0 error:(*id)arg1 ;
-(void)_teardownSession;
-(void)dealloc;


@end


#endif