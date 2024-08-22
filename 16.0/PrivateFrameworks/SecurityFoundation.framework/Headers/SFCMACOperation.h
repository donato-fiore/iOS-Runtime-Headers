// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFCMACOPERATION_H
#define SFCMACOPERATION_H



#import "SFMessageAuthenticationCodeOperation.h"
#import "SFSymmetricEncryptionOperation.h"

@interface SFCMACOperation : SFMessageAuthenticationCodeOperation {
    id *_cmacOperationInternal;
}


@property (copy, nonatomic) SFSymmetricEncryptionOperation *encryptionOperation;


-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEncryptionOperation:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif