// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SPRPINCONTROLLER_H
#define SPRPINCONTROLLER_H



#import "SPRObject.h"
#import "SPRPINCrypto.h"

@interface SPRPINController : SPRObject {
    SPRPINCrypto *_pinCrypto;
}




-(BOOL)addDigitWithValue:(unsigned char)arg0 error:(*id)arg1 ;
-(BOOL)capturePINWithParameters:(id)arg0 error:(*id)arg1 ;
-(BOOL)removeLastDigitAndReturnError:(*id)arg0 ;
-(BOOL)updateParameters:(id)arg0 error:(*id)arg1 ;
-(BOOL)verifyWithPINToken:(id)arg0 error:(*id)arg1 ;
-(id)generatePINBlockAndReturnError:(*id)arg0 ;
-(void)cancelPINCapture;


@end


#endif