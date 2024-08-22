// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICFPSAPCONTEXT_H
#define ICFPSAPCONTEXT_H


#import <Foundation/Foundation.h>


@interface ICFPSAPContext : NSObject {
    *FPSAPContextOpaque_ _fairPlaySAPContext;
    FairPlayHWInfo_ _hardwareInfo;
}




-(BOOL)exchangeWithSAPVersion:(unsigned int)arg0 data:(id)arg1 returningData:(*id)arg2 exchangeStatus:(char *)arg3 error:(*id)arg4 ;
-(BOOL)processResponseWithSignatureData:(id)arg0 data:(id)arg1 error:(*id)arg2 ;
-(BOOL)signData:(id)arg0 returningSignatureData:(*id)arg1 error:(*id)arg2 ;
-(id)initReturningError:(*id)arg0 ;
-(void)dealloc;


@end


#endif