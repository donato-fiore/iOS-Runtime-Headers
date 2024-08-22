// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPAYMENTDATAITEM_H
#define PKPAYMENTDATAITEM_H

@class NSString, NSArray;
@protocol PKPaymentValidating;

#import <Foundation/Foundation.h>

#import "PKPaymentAuthorizationDataModel.h"

@interface PKPaymentDataItem : NSObject <PKPaymentValidating>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *errors;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) PKPaymentAuthorizationDataModel *model; // ivar: _model
@property (readonly, nonatomic) NSArray *paymentContactFormatErrors;
@property (readonly, nonatomic, getter=isRejected) BOOL rejected;
@property (nonatomic) NSInteger status; // ivar: _status
@property (readonly) Class superclass;
@property (nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsMultipleItems;
+(NSInteger)dataType;
-(BOOL)isValidWithError:(*id)arg0 ;
-(id)initWithModel:(id)arg0 ;


@end


#endif