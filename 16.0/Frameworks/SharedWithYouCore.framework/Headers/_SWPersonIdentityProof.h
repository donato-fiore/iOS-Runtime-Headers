// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SWPERSONIDENTITYPROOF_H
#define _SWPERSONIDENTITYPROOF_H

@class NSString, NSArray, NSData;
@protocol _SWPersonIdentityProofProtocol;


#import "SWPersonIdentityProof.h"

@interface _SWPersonIdentityProof : SWPersonIdentityProof <_SWPersonIdentityProofProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *inclusionHashes;
@property (nonatomic) NSUInteger localKeyIndex;
@property (copy, nonatomic) NSData *publicKey;
@property (readonly) Class superclass;


-(id)initWithInclusionHashes:(id)arg0 ;


@end


#endif