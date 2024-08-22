// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSVFAIRPLAYSAPCONTEXT_H
#define SSVFAIRPLAYSAPCONTEXT_H


#import <Foundation/Foundation.h>


@interface SSVFairPlaySAPContext : NSObject {
    *FPSAPContextOpaque_ _context;
    FairPlayHWInfo_ _hardwareInfo;
    NSInteger _version;
}


@property (readonly, nonatomic, getter=isComplete) BOOL complete; // ivar: _complete


-(BOOL)verifyPrimeSignature:(id)arg0 error:(*id)arg1 ;
-(BOOL)verifySignature:(id)arg0 forData:(id)arg1 error:(*id)arg2 ;
-(id)exchangeData:(id)arg0 error:(*id)arg1 ;
-(id)initWithSAPVersion:(NSInteger)arg0 ;
-(id)primingSignatureForData:(id)arg0 error:(*id)arg1 ;
-(id)signData:(id)arg0 error:(*id)arg1 ;
-(void)_teardownSession;
-(void)dealloc;


@end


#endif