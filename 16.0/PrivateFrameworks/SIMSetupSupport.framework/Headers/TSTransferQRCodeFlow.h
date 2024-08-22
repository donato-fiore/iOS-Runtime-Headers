// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSTRANSFERQRCODEFLOW_H
#define TSTRANSFERQRCODEFLOW_H

@class NSString;
@protocol TSSIMSetupFlowDelegate;


#import "TSSIMSetupFlow.h"

@interface TSTransferQRCodeFlow : TSSIMSetupFlow <TSSIMSetupFlowDelegate>

 {
    NSString *_iccid;
    NSString *_carrierName;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithIccid:(id)arg0 ;
-(void)firstViewController:(id)arg0 ;


@end


#endif