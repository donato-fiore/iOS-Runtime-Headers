// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKNOISEFIELDNODE_H
#define SKNOISEFIELDNODE_H



#import "SKFieldNode.h"

@interface SKNoiseFieldNode : SKFieldNode

@property (nonatomic) float animationSpeed;
@property (nonatomic) float smoothness;


+(BOOL)supportsSecureCoding;
-(id)_descriptionClassName;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)_initialize;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif