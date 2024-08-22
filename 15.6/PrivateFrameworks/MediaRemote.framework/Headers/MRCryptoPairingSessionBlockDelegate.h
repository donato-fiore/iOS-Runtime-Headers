// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MRCRYPTOPAIRINGSESSIONBLOCKDELEGATE_H
#define MRCRYPTOPAIRINGSESSIONBLOCKDELEGATE_H

@class NSString;
@protocol MRCryptoPairingSessionDelegate;

#import <Foundation/Foundation.h>


@interface MRCryptoPairingSessionBlockDelegate : NSObject <MRCryptoPairingSessionDelegate>



@property (copy, nonatomic) id *dataExchangeBlock; // ivar: _dataExchangeBlock
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *exchangeCompleteBlock; // ivar: _exchangeCompleteBlock
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *hideSetupCodeBlock; // ivar: _hideSetupCodeBlock
@property (copy, nonatomic) id *promptForSetupCodeBlock; // ivar: _promptForSetupCodeBlock
@property (copy, nonatomic) id *showSetupCodeBlock; // ivar: _showSetupCodeBlock
@property (readonly) Class superclass;


-(void)pairingSession:(id)arg0 didCompleteExchangeWithError:(id)arg1 ;
-(void)pairingSession:(id)arg0 didPrepareExchangeData:(id)arg1 ;
-(void)pairingSession:(id)arg0 promptForSetupCodeWithCompletion:(id)arg1 ;
-(void)pairingSession:(id)arg0 promptForSetupCodeWithDelay:(CGFloat)arg1 completion:(id)arg2 ;
-(void)pairingSession:(id)arg0 showSetupCode:(id)arg1 ;
-(void)pairingSessionHideSetupCode:(id)arg0 ;


@end


#endif