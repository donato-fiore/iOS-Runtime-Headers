// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BMDSLKEYPATHTRANSFORM_H
#define BMDSLKEYPATHTRANSFORM_H

@class NSString;
@protocol BMDSLTransform;


#import "BMDSLBaseCodable.h"

@interface BMDSLKeyPathTransform : BMDSLBaseCodable <BMDSLTransform>



@property (readonly, copy, nonatomic) NSString *keyPath; // ivar: _keyPath


+(BOOL)supportsSecureCoding;
+(id)withKeyPath:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKeyPath:(id)arg0 ;
-(id)initWithKeyPath:(id)arg0 name:(id)arg1 version:(unsigned int)arg2 ;
-(id)transformInput:(id)arg0 combinedState:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif