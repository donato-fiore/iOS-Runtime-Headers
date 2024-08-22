// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKINKRENDERINGDESCRIPTOR_H
#define PKINKRENDERINGDESCRIPTOR_H


#import <Foundation/Foundation.h>

#import "PKInkParticleDescriptor.h"

@interface PKInkRenderingDescriptor : NSObject

@property (readonly, nonatomic) NSUInteger blendMode; // ivar: _blendMode
@property (readonly, nonatomic) PKInkParticleDescriptor *particleDescriptor; // ivar: _particleDescriptor
@property (readonly, nonatomic) PKInkParticleDescriptor *secondaryParticleDescriptor; // ivar: _secondaryParticleDescriptor
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


-(id)initWithType:(NSUInteger)arg0 blendMode:(NSUInteger)arg1 particleDescriptor:(id)arg2 secondaryParticleDescriptor:(id)arg3 ;
-(id)mutableCopy;


@end


#endif