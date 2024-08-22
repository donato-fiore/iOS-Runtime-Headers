// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BMDSLARGUMENTTRANSFORM_H
#define BMDSLARGUMENTTRANSFORM_H

@protocol BMDSLTransform, BMDSLArgumentSelector;


#import "BMDSLBaseCodable.h"

@interface BMDSLArgumentTransform : BMDSLBaseCodable <BMDSLTransform>



@property (readonly, nonatomic) NSObject<BMDSLArgumentSelector> *selector; // ivar: _selector


+(BOOL)supportsSecureCoding;
+(id)withSelector:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSelector:(id)arg0 ;
-(id)initWithSelector:(id)arg0 name:(id)arg1 version:(unsigned int)arg2 ;
-(id)transformInput:(id)arg0 combinedState:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif