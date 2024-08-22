// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMDSLMULTIKEYPATHSTRANSFORM_H
#define BMDSLMULTIKEYPATHSTRANSFORM_H

@class NSArray;
@protocol BMDSLTransform;


#import "BMDSLBaseCodable.h"

@interface BMDSLMultiKeyPathsTransform : BMDSLBaseCodable <BMDSLTransform>



@property (readonly, copy, nonatomic) NSArray *keyPaths; // ivar: _keyPaths


+(BOOL)supportsSecureCoding;
+(id)withKeyPaths:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKeyPaths:(id)arg0 ;
-(id)initWithKeyPaths:(id)arg0 name:(id)arg1 version:(unsigned int)arg2 ;
-(id)transformInput:(id)arg0 combinedState:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif