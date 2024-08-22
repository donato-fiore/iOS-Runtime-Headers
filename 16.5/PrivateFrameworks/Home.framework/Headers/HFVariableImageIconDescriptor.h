// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFVARIABLEIMAGEICONDESCRIPTOR_H
#define HFVARIABLEIMAGEICONDESCRIPTOR_H



#import "HFImageIconDescriptor.h"

@interface HFVariableImageIconDescriptor : HFImageIconDescriptor

@property (readonly, nonatomic) CGFloat variableValue; // ivar: _variableValue


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithSystemImageNamed:(id)arg0 variableValue:(CGFloat)arg1 configuration:(id)arg2 ;


@end


#endif