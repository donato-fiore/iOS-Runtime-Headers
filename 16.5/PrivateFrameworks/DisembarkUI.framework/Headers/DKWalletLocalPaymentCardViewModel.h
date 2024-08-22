// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DKWALLETLOCALPAYMENTCARDVIEWMODEL_H
#define DKWALLETLOCALPAYMENTCARDVIEWMODEL_H

@class NSString;
@protocol DKWalletCardDisplayable;

#import <Foundation/Foundation.h>


@interface DKWalletLocalPaymentCardViewModel : NSObject <DKWalletCardDisplayable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *subtitle; // ivar: subtitle
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *title; // ivar: title
@property (retain, nonatomic) NSString *uniqueIdentifier; // ivar: uniqueIdentifier




@end


#endif