// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIGNINGPUBLICKEY_H
#define SIGNINGPUBLICKEY_H



#import "PublicKey.h"

@interface SigningPublicKey : PublicKey



-(BOOL)verifySignature:(id)arg0 formatter:(id)arg1 ;
-(BOOL)verifySignature:(id)arg0 ofData:(id)arg1 ;
-(id)description;


@end


#endif