// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATMD5SIGNATUREPROVIDER_H
#define ATMD5SIGNATUREPROVIDER_H

@class ATSignatureProvider;



@interface ATMD5SignatureProvider : ATSignatureProvider



-(id)createSignature:(*id)arg0 forData:(id)arg1 ;
-(id)verifySignature:(id)arg0 forData:(id)arg1 ;


@end


#endif