// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFRSA_PSSSIGNINGOPERATION_H
#define SFRSA_PSSSIGNINGOPERATION_H

@protocol SFMaskGenerationFunction;


#import "SFRSASigningOperation.h"

@interface SFRSA_PSSSigningOperation : SFRSASigningOperation {
    id *_pssSigningOperationInternal;
}


@property (copy, nonatomic) NSObject<SFMaskGenerationFunction> *maskGenerationFunction;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithKeySpecifier:(id)arg0 digestOperation:(id)arg1 ;
-(id)initWithKeySpecifier:(id)arg0 digestOperation:(id)arg1 maskGenerationFunction:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif