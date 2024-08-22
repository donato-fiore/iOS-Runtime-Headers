// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OZARPLANEINFO_H
#define OZARPLANEINFO_H

@class NSNumber, NSValue, NSUUID;

#import <Foundation/Foundation.h>


@interface OZARPlaneInfo : NSObject

@property (nonatomic) NSNumber *alignment; // ivar: _alignment
@property (nonatomic) NSValue *center; // ivar: _center
@property (nonatomic) NSNumber *classification; // ivar: _classification
@property (nonatomic) NSValue *extent; // ivar: _extent
@property (nonatomic) NSUUID *identifier; // ivar: _identifier
@property (nonatomic) NSValue *transform; // ivar: _transform


-(struct ? )simdTransform;


@end


#endif