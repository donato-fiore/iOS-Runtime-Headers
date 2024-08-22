// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCNBOUNDINGSPHERE_H
#define SCNBOUNDINGSPHERE_H


#import <Foundation/Foundation.h>


@interface SCNBoundingSphere : NSObject

@property (nonatomic) SCNVector3 center; // ivar: center
@property (nonatomic) CGFloat radius; // ivar: radius


-(id)description;


@end


#endif