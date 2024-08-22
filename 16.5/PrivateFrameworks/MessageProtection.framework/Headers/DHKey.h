// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DHKEY_H
#define DHKEY_H



#import "FullKey.h"

@interface DHKey : FullKey



-(id)description;
-(id)keyAgreementWithPublicKey:(id)arg0 error:(*id)arg1 ;
-(id)publicKey;


@end


#endif