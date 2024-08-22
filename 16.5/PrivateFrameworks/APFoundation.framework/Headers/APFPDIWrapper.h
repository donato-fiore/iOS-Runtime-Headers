// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APFPDIWRAPPER_H
#define APFPDIWRAPPER_H


#import <Foundation/Foundation.h>


@interface APFPDIWrapper : NSObject



+(int)FPDICreateContext:(**void)arg0 withAttribute:(*void)arg1 initRequest:(**void)arg2 initRequestLength:(*unsigned int)arg3 ;
+(int)FPDIDestroyAllContext;
+(int)FPDIDestroyAllNonStashedContexts;
+(int)FPDIDestroyAttribute:(**void)arg0 ;
+(int)FPDIDestroyContext:(**void)arg0 ;
+(int)FPDIDestroyData:(**void)arg0 ;
+(int)FPDIInitAttribute:(**void)arg0 ;
+(int)FPDIInitContext:(*void)arg0 withInitResponse:(*void)arg1 initResponseLength:(unsigned int)arg2 setupRequest:(**void)arg3 setupRequestLength:(*unsigned int)arg4 ;
+(int)FPDISetHighPrivacyLevelForAttribute:(*void)arg0 ;
+(int)FPDISetStashingIsEnabled:(BOOL)arg0 forAttribute:(*void)arg1 ;
+(int)FPDISetupContext:(*void)arg0 withSetupResponse:(*void)arg1 setupResponseLength:(unsigned int)arg2 ;
+(int)FPDISignWithContext:(*void)arg0 message:(char *)arg1 messageLength:(unsigned int)arg2 rawSignature:(**void)arg3 rawSignatureLength:(*unsigned int)arg4 ;


@end


#endif