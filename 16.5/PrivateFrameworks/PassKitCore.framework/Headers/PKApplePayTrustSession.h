// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKAPPLEPAYTRUSTSESSION_H
#define PKAPPLEPAYTRUSTSESSION_H



#import "PKPaymentSession.h"

@interface PKApplePayTrustSession : PKPaymentSession



-(BOOL)deleteKeyWithIdentifier:(id)arg0 ;
-(id)createKeyWithRequest:(id)arg0 error:(*id)arg1 ;
-(id)initWithInternalSession:(id)arg0 targetQueue:(id)arg1 ;
-(id)keyWithIdentifier:(id)arg0 ;
-(id)signatureForRequest:(id)arg0 withAuthorization:(id)arg1 ;


@end


#endif