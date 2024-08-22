// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSMESCALFAIRPLAY_H
#define AMSMESCALFAIRPLAY_H


#import <Foundation/Foundation.h>


@interface AMSMescalFairPlay : NSObject {
    *FPSAPContextOpaque_ _context;
    FairPlayHWInfo_ _hardwareInfo;
    NSInteger _mescalType;
}


@property (readonly, nonatomic, getter=isComplete) BOOL complete; // ivar: _complete


-(BOOL)verifyPrimeSignature:(id)arg0 error:(*id)arg1 ;
-(BOOL)verifySignature:(id)arg0 forData:(id)arg1 error:(*id)arg2 ;
-(id)_dataWithFairPlayBytes:(char *)arg0 length:(unsigned int)arg1 ;
-(id)exchangeData:(id)arg0 error:(*id)arg1 ;
-(id)initWithMescalType:(NSInteger)arg0 error:(*id)arg1 ;
-(id)primingSignatureForData:(id)arg0 error:(*id)arg1 ;
-(id)signData:(id)arg0 error:(*id)arg1 ;
-(void)_teardownSession;
-(void)dealloc;


@end


#endif