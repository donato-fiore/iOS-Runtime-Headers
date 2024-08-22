// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BMJAVASCRIPTBASEDONOR_H
#define BMJAVASCRIPTBASEDONOR_H

@protocol BMDonorJS;


#import "BMBaseDonor.h"

@interface BMJavascriptBaseDonor : BMBaseDonor <BMDonorJS>





-(id)initWithType:(id)arg0 ;
-(void)donate:(id)arg0 ;
-(void)donateWithConfiguration:(id)arg0 context:(id)arg1 donationCompleteBlock:(id)arg2 ;


@end


#endif