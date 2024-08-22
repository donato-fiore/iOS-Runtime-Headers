// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NFTRUSTSESSION_H
#define NFTRUSTSESSION_H



#import "NFSession.h"

@interface NFTrustSession : NFSession



-(BOOL)deleteKey:(id)arg0 error:(*id)arg1 ;
-(id)createKey:(id)arg0 request:(id)arg1 error:(*id)arg2 ;
-(id)getKey:(id)arg0 error:(*id)arg1 ;
-(id)listKeys:(*id)arg0 ;
-(id)signWithKey:(id)arg0 request:(id)arg1 authorization:(id)arg2 error:(*id)arg3 ;
-(id)signWithKey:(id)arg0 request:(id)arg1 paymentRequest:(id)arg2 authorization:(id)arg3 error:(*id)arg4 ;


@end


#endif