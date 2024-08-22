// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWPHOTOENCODERNODEATTACHEDMEDIACONFIGURATION_H
#define BWPHOTOENCODERNODEATTACHEDMEDIACONFIGURATION_H


#import <Foundation/Foundation.h>


@interface BWPhotoEncoderNodeAttachedMediaConfiguration : NSObject

@property (readonly, nonatomic) float mainImageDownscalingFactor; // ivar: _mainImageDownscalingFactor
@property (readonly, nonatomic) BOOL propagatesDownstream; // ivar: _propagatesDownstream


-(id)initWithMainImageDownscalingFactor:(float)arg0 propagatesDownstream:(BOOL)arg1 ;


@end


#endif