// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SWSIGNEDPERSONIDENTITYPROOF_H
#define SWSIGNEDPERSONIDENTITYPROOF_H

@class NSData;


#import "SWPersonIdentityProof.h"

@interface SWSignedPersonIdentityProof : SWPersonIdentityProof

@property (readonly, copy, nonatomic) NSData *signatureData; // ivar: _signatureData


-(id)initWithPersonIdentityProof:(id)arg0 signatureData:(id)arg1 ;


@end


#endif