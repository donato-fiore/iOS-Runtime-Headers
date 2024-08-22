// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKINKRENDERINGDESCRIPTOR_H
#define PKINKRENDERINGDESCRIPTOR_H

@class NSString;

#import <Foundation/Foundation.h>

#import "PKInkParticleDescriptor.h"

@interface PKInkRenderingDescriptor : NSObject

@property (nonatomic) BOOL animating; // ivar: _animating
@property (nonatomic) NSUInteger blendMode; // ivar: _blendMode
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) PKInkParticleDescriptor *particleDescriptor; // ivar: _particleDescriptor
@property (nonatomic) NSUInteger type; // ivar: _type
@property (nonatomic) NSUInteger version; // ivar: _version




@end


#endif