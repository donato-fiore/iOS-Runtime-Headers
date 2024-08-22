// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SCNBOUNDINGBOX_H
#define SCNBOUNDINGBOX_H


#import <Foundation/Foundation.h>


@interface SCNBoundingBox : NSObject

@property (nonatomic) SCNVector3 max; // ivar: max
@property (nonatomic) SCNVector3 min; // ivar: min


-(id)description;


@end


#endif