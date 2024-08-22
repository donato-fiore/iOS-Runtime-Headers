// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNENTITYIDENTIFICATIONMODELALGORITHMVIPV3_H
#define VNENTITYIDENTIFICATIONMODELALGORITHMVIPV3_H



#import "VNEntityIdentificationModelAlgorithm.h"

@interface VNEntityIdentificationModelAlgorithmVIPv3 : VNEntityIdentificationModelAlgorithm

@property NSInteger indexType; // ivar: _indexType


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(Class)trainedModelClass;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif