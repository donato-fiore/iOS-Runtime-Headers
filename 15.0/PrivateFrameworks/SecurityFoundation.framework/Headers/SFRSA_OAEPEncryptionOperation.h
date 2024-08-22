// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFRSA_OAEPENCRYPTIONOPERATION_H
#define SFRSA_OAEPENCRYPTIONOPERATION_H

@protocol SFMaskGenerationFunction;


#import "SFRSAEncryptionOperation.h"

@interface SFRSA_OAEPEncryptionOperation : SFRSAEncryptionOperation {
    id *_oaepEncryptionOperationInternal;
}


@property (copy, nonatomic) NSObject<SFMaskGenerationFunction> *maskGenerationFunction;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithKeySpecifier:(id)arg0 ;
-(id)initWithKeySpecifier:(id)arg0 maskGenerationFunction:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif